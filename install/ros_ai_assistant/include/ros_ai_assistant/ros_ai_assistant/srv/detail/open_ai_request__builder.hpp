// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ai_assistant:srv/OpenAIRequest.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__OPEN_AI_REQUEST__BUILDER_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__OPEN_AI_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_ai_assistant/srv/detail/open_ai_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_ai_assistant
{

namespace srv
{

namespace builder
{

class Init_OpenAIRequest_Request_model
{
public:
  explicit Init_OpenAIRequest_Request_model(::ros_ai_assistant::srv::OpenAIRequest_Request & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::srv::OpenAIRequest_Request model(::ros_ai_assistant::srv::OpenAIRequest_Request::_model_type arg)
  {
    msg_.model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::srv::OpenAIRequest_Request msg_;
};

class Init_OpenAIRequest_Request_context
{
public:
  explicit Init_OpenAIRequest_Request_context(::ros_ai_assistant::srv::OpenAIRequest_Request & msg)
  : msg_(msg)
  {}
  Init_OpenAIRequest_Request_model context(::ros_ai_assistant::srv::OpenAIRequest_Request::_context_type arg)
  {
    msg_.context = std::move(arg);
    return Init_OpenAIRequest_Request_model(msg_);
  }

private:
  ::ros_ai_assistant::srv::OpenAIRequest_Request msg_;
};

class Init_OpenAIRequest_Request_prompt
{
public:
  Init_OpenAIRequest_Request_prompt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenAIRequest_Request_context prompt(::ros_ai_assistant::srv::OpenAIRequest_Request::_prompt_type arg)
  {
    msg_.prompt = std::move(arg);
    return Init_OpenAIRequest_Request_context(msg_);
  }

private:
  ::ros_ai_assistant::srv::OpenAIRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::srv::OpenAIRequest_Request>()
{
  return ros_ai_assistant::srv::builder::Init_OpenAIRequest_Request_prompt();
}

}  // namespace ros_ai_assistant


namespace ros_ai_assistant
{

namespace srv
{

namespace builder
{

class Init_OpenAIRequest_Response_confidence
{
public:
  explicit Init_OpenAIRequest_Response_confidence(::ros_ai_assistant::srv::OpenAIRequest_Response & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::srv::OpenAIRequest_Response confidence(::ros_ai_assistant::srv::OpenAIRequest_Response::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::srv::OpenAIRequest_Response msg_;
};

class Init_OpenAIRequest_Response_success
{
public:
  explicit Init_OpenAIRequest_Response_success(::ros_ai_assistant::srv::OpenAIRequest_Response & msg)
  : msg_(msg)
  {}
  Init_OpenAIRequest_Response_confidence success(::ros_ai_assistant::srv::OpenAIRequest_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_OpenAIRequest_Response_confidence(msg_);
  }

private:
  ::ros_ai_assistant::srv::OpenAIRequest_Response msg_;
};

class Init_OpenAIRequest_Response_response
{
public:
  Init_OpenAIRequest_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenAIRequest_Response_success response(::ros_ai_assistant::srv::OpenAIRequest_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_OpenAIRequest_Response_success(msg_);
  }

private:
  ::ros_ai_assistant::srv::OpenAIRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::srv::OpenAIRequest_Response>()
{
  return ros_ai_assistant::srv::builder::Init_OpenAIRequest_Response_response();
}

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__OPEN_AI_REQUEST__BUILDER_HPP_
