// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ai_assistant:srv/ContextSwitch.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__CONTEXT_SWITCH__BUILDER_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__CONTEXT_SWITCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_ai_assistant/srv/detail/context_switch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_ai_assistant
{

namespace srv
{

namespace builder
{

class Init_ContextSwitch_Request_save_previous
{
public:
  explicit Init_ContextSwitch_Request_save_previous(::ros_ai_assistant::srv::ContextSwitch_Request & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::srv::ContextSwitch_Request save_previous(::ros_ai_assistant::srv::ContextSwitch_Request::_save_previous_type arg)
  {
    msg_.save_previous = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::srv::ContextSwitch_Request msg_;
};

class Init_ContextSwitch_Request_new_context
{
public:
  Init_ContextSwitch_Request_new_context()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContextSwitch_Request_save_previous new_context(::ros_ai_assistant::srv::ContextSwitch_Request::_new_context_type arg)
  {
    msg_.new_context = std::move(arg);
    return Init_ContextSwitch_Request_save_previous(msg_);
  }

private:
  ::ros_ai_assistant::srv::ContextSwitch_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::srv::ContextSwitch_Request>()
{
  return ros_ai_assistant::srv::builder::Init_ContextSwitch_Request_new_context();
}

}  // namespace ros_ai_assistant


namespace ros_ai_assistant
{

namespace srv
{

namespace builder
{

class Init_ContextSwitch_Response_message
{
public:
  explicit Init_ContextSwitch_Response_message(::ros_ai_assistant::srv::ContextSwitch_Response & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::srv::ContextSwitch_Response message(::ros_ai_assistant::srv::ContextSwitch_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::srv::ContextSwitch_Response msg_;
};

class Init_ContextSwitch_Response_success
{
public:
  Init_ContextSwitch_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContextSwitch_Response_message success(::ros_ai_assistant::srv::ContextSwitch_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ContextSwitch_Response_message(msg_);
  }

private:
  ::ros_ai_assistant::srv::ContextSwitch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::srv::ContextSwitch_Response>()
{
  return ros_ai_assistant::srv::builder::Init_ContextSwitch_Response_success();
}

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__CONTEXT_SWITCH__BUILDER_HPP_
