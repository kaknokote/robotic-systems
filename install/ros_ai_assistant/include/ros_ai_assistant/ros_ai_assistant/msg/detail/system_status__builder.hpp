// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ai_assistant:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_ai_assistant/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_ai_assistant
{

namespace msg
{

namespace builder
{

class Init_SystemStatus_component
{
public:
  explicit Init_SystemStatus_component(::ros_ai_assistant::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::msg::SystemStatus component(::ros_ai_assistant::msg::SystemStatus::_component_type arg)
  {
    msg_.component = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::msg::SystemStatus msg_;
};

class Init_SystemStatus_is_operational
{
public:
  explicit Init_SystemStatus_is_operational(::ros_ai_assistant::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_component is_operational(::ros_ai_assistant::msg::SystemStatus::_is_operational_type arg)
  {
    msg_.is_operational = std::move(arg);
    return Init_SystemStatus_component(msg_);
  }

private:
  ::ros_ai_assistant::msg::SystemStatus msg_;
};

class Init_SystemStatus_status
{
public:
  explicit Init_SystemStatus_status(::ros_ai_assistant::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_is_operational status(::ros_ai_assistant::msg::SystemStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SystemStatus_is_operational(msg_);
  }

private:
  ::ros_ai_assistant::msg::SystemStatus msg_;
};

class Init_SystemStatus_header
{
public:
  Init_SystemStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_status header(::ros_ai_assistant::msg::SystemStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SystemStatus_status(msg_);
  }

private:
  ::ros_ai_assistant::msg::SystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::msg::SystemStatus>()
{
  return ros_ai_assistant::msg::builder::Init_SystemStatus_header();
}

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
