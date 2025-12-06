// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ai_assistant:srv/EmergencyShutdown.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__EMERGENCY_SHUTDOWN__BUILDER_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__EMERGENCY_SHUTDOWN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_ai_assistant/srv/detail/emergency_shutdown__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_ai_assistant
{

namespace srv
{

namespace builder
{

class Init_EmergencyShutdown_Request_reason
{
public:
  Init_EmergencyShutdown_Request_reason()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_ai_assistant::srv::EmergencyShutdown_Request reason(::ros_ai_assistant::srv::EmergencyShutdown_Request::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::srv::EmergencyShutdown_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::srv::EmergencyShutdown_Request>()
{
  return ros_ai_assistant::srv::builder::Init_EmergencyShutdown_Request_reason();
}

}  // namespace ros_ai_assistant


namespace ros_ai_assistant
{

namespace srv
{

namespace builder
{

class Init_EmergencyShutdown_Response_message
{
public:
  explicit Init_EmergencyShutdown_Response_message(::ros_ai_assistant::srv::EmergencyShutdown_Response & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::srv::EmergencyShutdown_Response message(::ros_ai_assistant::srv::EmergencyShutdown_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::srv::EmergencyShutdown_Response msg_;
};

class Init_EmergencyShutdown_Response_accepted
{
public:
  Init_EmergencyShutdown_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyShutdown_Response_message accepted(::ros_ai_assistant::srv::EmergencyShutdown_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_EmergencyShutdown_Response_message(msg_);
  }

private:
  ::ros_ai_assistant::srv::EmergencyShutdown_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::srv::EmergencyShutdown_Response>()
{
  return ros_ai_assistant::srv::builder::Init_EmergencyShutdown_Response_accepted();
}

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__EMERGENCY_SHUTDOWN__BUILDER_HPP_
