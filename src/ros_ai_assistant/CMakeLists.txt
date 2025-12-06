cmake_minimum_required(VERSION 3.8)
project(ros_ai_assistant)

# Стандарты компиляции
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Сообщения и сервисы
set(MSG_FILES
  "msg/SecurityAlert.msg"
  "msg/UserCommand.msg"
  "msg/AIResponse.msg"
  "msg/SystemStatus.msg"
  "msg/ThreatAssessment.msg"
  "msg/WeaponStatus.msg"
)

set(SRV_FILES
  "srv/WeaponControl.srv"
  "srv/UserAuthentication.srv"
  "srv/ContextSwitch.srv"
  "srv/EmergencyShutdown.srv"
  "srv/ThreatAssessment.srv"
  "srv/OpenAIRequest.srv"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${MSG_FILES}
  ${SRV_FILES}
  DEPENDENCIES std_msgs
)

ament_export_dependencies(rosidl_default_runtime)

# Устанавливаем launch, config, api как ресурсы
install(DIRECTORY
  launch
  config
  api
  DESTINATION share/${PROJECT_NAME}
)

# Устанавливаем Python-ноды как исполняемые файлы
install(PROGRAMS
  scripts/ai_core_nodes/openai_integration.py
  scripts/ai_core_nodes/context_manager.py
  scripts/ai_core_nodes/decision_engine.py
  scripts/security_nodes/threat_assessment.py
  scripts/security_nodes/weapon_controller.py
  scripts/security_nodes/emergency_handler.py
  scripts/communication_nodes/voice_processor.py
  scripts/communication_nodes/dialog_manager.py
  scripts/communication_nodes/user_identity.py
  scripts/integration_nodes/api_gateway.py
  scripts/integration_nodes/ros_api_bridge.py
  scripts/integration_nodes/safety_monitor.py
  scripts/test_connection.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()

