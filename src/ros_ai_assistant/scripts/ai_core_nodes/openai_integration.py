#!/usr/bin/env python3
"""
OpenAI Integration Node for ROS2 AI Assistant
"""

import asyncio
import threading
from typing import Dict, List

import aiohttp
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup

from ros_ai_assistant.msg import AIResponse, UserCommand, SystemStatus
from ros_ai_assistant.srv import OpenAIRequest


class OpenAIIntegrationNode(Node):
    def __init__(self):
        super().__init__('openai_integration')

        # Параметры конфигурации
        self.declare_parameter('openai_api_key', '')
        self.declare_parameter('model', 'gpt-4')
        self.declare_parameter('max_tokens', 2000)
        self.declare_parameter('temperature', 0.7)
        self.declare_parameter('max_context_length', 10)
        self.declare_parameter('request_timeout', 30.0)

        self.api_key = self.get_parameter('openai_api_key').get_parameter_value().string_value
        self.model = self.get_parameter('model').get_parameter_value().string_value
        self.max_tokens = self.get_parameter('max_tokens').get_parameter_value().integer_value
        self.temperature = self.get_parameter('temperature').get_parameter_value().double_value
        self.max_context_length = self.get_parameter('max_context_length').get_parameter_value().integer_value
        self.request_timeout = self.get_parameter('request_timeout').get_parameter_value().double_value

        # Топики для публикации (в ROS2 лучше без ведущего слэша)
        self.ai_response_pub = self.create_publisher(AIResponse, 'ai_assistant/response', 10)
        self.system_status_pub = self.create_publisher(SystemStatus, 'ai_assistant/system_status', 10)

        # Группа callback'ов, чтобы можно было вызывать сервис и сабскрайбер параллельно
        self.cb_group = ReentrantCallbackGroup()

        # Подписка на команды пользователя
        self.user_sub = self.create_subscription(
            UserCommand,
            'ai_assistant/user_command',
            self.user_command_callback,
            10,
            callback_group=self.cb_group,
        )

        # Сервис для обработки запросов
        self.openai_service = self.create_service(
            OpenAIRequest,
            'ai_assistant/openai_request',
            self.handle_openai_request,
            callback_group=self.cb_group,
        )

        # Контекст диалога
        self.conversation_context: List[Dict] = []

        # Асинхронный event loop в отдельном потоке
        self.loop = asyncio.new_event_loop()
        self.session: aiohttp.ClientSession | None = None
        self.thread = threading.Thread(target=self._run_loop, daemon=True)
        self.thread.start()

        self.get_logger().info('OpenAI Integration Node (ROS2) initialized')

    # ---------- Async loop / HTTP ----------

    def _run_loop(self):
        asyncio.set_event_loop(self.loop)
        self.session = aiohttp.ClientSession(loop=self.loop)
        self.loop.run_forever()

    async def _get_session(self):
        if self.session is None or self.session.closed:
            self.session = aiohttp.ClientSession()
        return self.session

    # ---------- Callbacks ----------

    def user_command_callback(self, msg: UserCommand):
        self.get_logger().info(f'Received user command: {msg.command_text}')

        future = asyncio.run_coroutine_threadsafe(
            self.process_user_command(msg),
            self.loop,
        )
        try:
            future.result(timeout=self.request_timeout)
        except Exception as e:
            self.get_logger().error(f'Error processing user command: {e}')
            self._publish_error_response(str(e))

    async def process_user_command(self, msg: UserCommand):
        try:
            prompt = self._build_prompt_from_command(msg)
            response = await self._send_openai_request(prompt, msg.context)
            self._publish_ai_response(response, msg.command_id)
        except Exception as e:
            self.get_logger().error(f'Error in process_user_command: {e}')
            self._publish_error_response(str(e))

    def handle_openai_request(self, request: OpenAIRequest.Request, response: OpenAIRequest.Response):
        self.get_logger().info(f'Service request: {request.prompt[:100]}...')

        try:
            future = asyncio.run_coroutine_threadsafe(
                self._process_service_request(request),
                self.loop,
            )
            result = future.result(timeout=self.request_timeout)

            response.response = result['response']
            response.success = result['success']
            response.confidence = result['confidence']
            return response

        except Exception as e:
            self.get_logger().error(f'Service request failed: {e}')
            response.response = f'Error: {str(e)}'
            response.success = False
            response.confidence = 0.0
            return response

    async def _process_service_request(self, req: OpenAIRequest.Request):
        try:
            resp = await self._send_openai_request(req.prompt, req.context)
            return {
                'response': resp['content'],
                'success': True,
                'confidence': resp.get('confidence', 0.8),
            }
        except Exception as e:
            self.get_logger().error(f'Error in _process_service_request: {e}')
            return {
                'response': f'Error: {str(e)}',
                'success': False,
                'confidence': 0.0,
            }

    # ---------- OpenAI HTTP ----------

    async def _send_openai_request(self, prompt: str, context: str = '') -> Dict:
        session = await self._get_session()
        messages = self._build_messages(prompt, context)

        payload = {
            'model': self.model,
            'messages': messages,
            'max_tokens': self.max_tokens,
            'temperature': self.temperature,
            'top_p': 0.9,
        }

        headers = {
            'Authorization': f'Bearer {self.api_key}',
            'Content-Type': 'application/json',
        }

        try:
            async with session.post(
                'https://api.openai.com/v1/chat/completions',
                json=payload,
                headers=headers,
                timeout=aiohttp.ClientTimeout(total=self.request_timeout),
            ) as resp:
                if resp.status == 200:
                    data = await resp.json()
                    return self._parse_openai_response(data)
                else:
                    error_text = await resp.text()
                    raise Exception(f'OpenAI API error {resp.status}: {error_text}')
        except asyncio.TimeoutError:
            raise Exception('OpenAI API request timeout')
        except Exception as e:
            raise Exception(f'OpenAI API communication error: {str(e)}')

    # ---------- Prompt / контекст ----------

    def _build_messages(self, prompt: str, context: str = '') -> List[Dict]:
        messages: List[Dict] = []

        system_message = self._get_system_prompt(context)
        messages.append({'role': 'system', 'content': system_message})

        for ctx in self.conversation_context[-self.max_context_length :]:
            messages.append(ctx)

        messages.append({'role': 'user', 'content': prompt})
        return messages

    def _get_system_prompt(self, context: str = '') -> str:
        base_prompt = (
            "Ты - интеллектуальный помощник в системе ROS2 робота-телохранителя. "
            "Твои задачи включают обработку команд, анализ ситуаций и предоставление рекомендаций.\n\n"
            "Важные правила:\n"
            "1. Всегда оценивай безопасность предлагаемых действий\n"
            "2. Предупреждай о потенциальных рисках\n"
            "3. Будь точным и лаконичным в ответах\n"
            "4. Следуй этическим принципам и законам робототехники\n\n"
            f"Контекст: {context}"
        )
        return base_prompt

    def _build_prompt_from_command(self, msg: UserCommand) -> str:
        return (
            f"Команда пользователя: {msg.command_text}\n"
            f"Тип команды: {msg.command_type}\n"
            f"Приоритет: {msg.priority}\n\n"
            "Проанализируй команду и предоставь соответствующий ответ."
        )

    def _parse_openai_response(self, data: Dict) -> Dict:
        try:
            choice = data['choices'][0]
            message = choice['message']

            response = {
                'content': message['content'],
                'role': message['role'],
                'finish_reason': choice.get('finish_reason', ''),
                'tokens_used': data.get('usage', {}).get('total_tokens', 0),
                'confidence': 0.9,
            }

            self._update_conversation_context(
                {'role': 'user', 'content': 'предыдущий запрос'},
                {'role': 'assistant', 'content': response['content']},
            )

            return response
        except (KeyError, IndexError) as e:
            raise Exception(f'Invalid OpenAI response format: {e}')

    def _update_conversation_context(self, user_message: Dict, assistant_message: Dict):
        self.conversation_context.append(user_message)
        self.conversation_context.append(assistant_message)
        if len(self.conversation_context) > self.max_context_length * 2:
            self.conversation_context = self.conversation_context[-(self.max_context_length * 2) :]

    # ---------- Публикация сообщений ----------

    def _publish_ai_response(self, response: Dict, command_id: str):
        msg = AIResponse()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.command_id = command_id
        msg.response_text = response['content']
        msg.confidence = float(response.get('confidence', 0.8))
        msg.tokens_used = int(response.get('tokens_used', 0))
        msg.finish_reason = response.get('finish_reason', '')
        self.ai_response_pub.publish(msg)
        self.get_logger().info(f'AI response published for command {command_id}')

    def _publish_error_response(self, error_message: str):
        msg = AIResponse()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.command_id = ''
        msg.response_text = f'Ошибка: {error_message}'
        msg.confidence = 0.0
        msg.tokens_used = 0
        msg.finish_reason = 'error'
        self.ai_response_pub.publish(msg)

    def _publish_system_status(self, status: str, is_operational: bool):
        msg = SystemStatus()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.status = status
        msg.is_operational = is_operational
        msg.component = 'openai_integration'
        self.system_status_pub.publish(msg)

    # ---------- Завершение ----------

    def shutdown(self):
        self.get_logger().info('Shutting down OpenAI Integration Node')
        if self.loop.is_running():
            self.loop.call_soon_threadsafe(self.loop.stop)

        if self.session and not self.session.closed:
            asyncio.run_coroutine_threadsafe(self.session.close(), self.loop)

        self.thread.join(timeout=5)


def main(args=None):
    rclpy.init(args=args)
    node = OpenAIIntegrationNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.shutdown()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

