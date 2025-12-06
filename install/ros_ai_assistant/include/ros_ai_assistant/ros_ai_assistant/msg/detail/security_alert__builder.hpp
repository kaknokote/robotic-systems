// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ai_assistant:msg/SecurityAlert.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__SECURITY_ALERT__BUILDER_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__SECURITY_ALERT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_ai_assistant/msg/detail/security_alert__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_ai_assistant
{

namespace msg
{

namespace builder
{

class Init_SecurityAlert_requires_action
{
public:
  explicit Init_SecurityAlert_requires_action(::ros_ai_assistant::msg::SecurityAlert & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::msg::SecurityAlert requires_action(::ros_ai_assistant::msg::SecurityAlert::_requires_action_type arg)
  {
    msg_.requires_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::msg::SecurityAlert msg_;
};

class Init_SecurityAlert_source
{
public:
  explicit Init_SecurityAlert_source(::ros_ai_assistant::msg::SecurityAlert & msg)
  : msg_(msg)
  {}
  Init_SecurityAlert_requires_action source(::ros_ai_assistant::msg::SecurityAlert::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_SecurityAlert_requires_action(msg_);
  }

private:
  ::ros_ai_assistant::msg::SecurityAlert msg_;
};

class Init_SecurityAlert_description
{
public:
  explicit Init_SecurityAlert_description(::ros_ai_assistant::msg::SecurityAlert & msg)
  : msg_(msg)
  {}
  Init_SecurityAlert_source description(::ros_ai_assistant::msg::SecurityAlert::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_SecurityAlert_source(msg_);
  }

private:
  ::ros_ai_assistant::msg::SecurityAlert msg_;
};

class Init_SecurityAlert_level
{
public:
  explicit Init_SecurityAlert_level(::ros_ai_assistant::msg::SecurityAlert & msg)
  : msg_(msg)
  {}
  Init_SecurityAlert_description level(::ros_ai_assistant::msg::SecurityAlert::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_SecurityAlert_description(msg_);
  }

private:
  ::ros_ai_assistant::msg::SecurityAlert msg_;
};

class Init_SecurityAlert_alert_id
{
public:
  explicit Init_SecurityAlert_alert_id(::ros_ai_assistant::msg::SecurityAlert & msg)
  : msg_(msg)
  {}
  Init_SecurityAlert_level alert_id(::ros_ai_assistant::msg::SecurityAlert::_alert_id_type arg)
  {
    msg_.alert_id = std::move(arg);
    return Init_SecurityAlert_level(msg_);
  }

private:
  ::ros_ai_assistant::msg::SecurityAlert msg_;
};

class Init_SecurityAlert_header
{
public:
  Init_SecurityAlert_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SecurityAlert_alert_id header(::ros_ai_assistant::msg::SecurityAlert::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SecurityAlert_alert_id(msg_);
  }

private:
  ::ros_ai_assistant::msg::SecurityAlert msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::msg::SecurityAlert>()
{
  return ros_ai_assistant::msg::builder::Init_SecurityAlert_header();
}

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__SECURITY_ALERT__BUILDER_HPP_
