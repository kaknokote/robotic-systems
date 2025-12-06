// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ai_assistant:msg/UserCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__USER_COMMAND__BUILDER_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__USER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_ai_assistant/msg/detail/user_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_ai_assistant
{

namespace msg
{

namespace builder
{

class Init_UserCommand_context
{
public:
  explicit Init_UserCommand_context(::ros_ai_assistant::msg::UserCommand & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::msg::UserCommand context(::ros_ai_assistant::msg::UserCommand::_context_type arg)
  {
    msg_.context = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::msg::UserCommand msg_;
};

class Init_UserCommand_priority
{
public:
  explicit Init_UserCommand_priority(::ros_ai_assistant::msg::UserCommand & msg)
  : msg_(msg)
  {}
  Init_UserCommand_context priority(::ros_ai_assistant::msg::UserCommand::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_UserCommand_context(msg_);
  }

private:
  ::ros_ai_assistant::msg::UserCommand msg_;
};

class Init_UserCommand_command_type
{
public:
  explicit Init_UserCommand_command_type(::ros_ai_assistant::msg::UserCommand & msg)
  : msg_(msg)
  {}
  Init_UserCommand_priority command_type(::ros_ai_assistant::msg::UserCommand::_command_type_type arg)
  {
    msg_.command_type = std::move(arg);
    return Init_UserCommand_priority(msg_);
  }

private:
  ::ros_ai_assistant::msg::UserCommand msg_;
};

class Init_UserCommand_command_text
{
public:
  explicit Init_UserCommand_command_text(::ros_ai_assistant::msg::UserCommand & msg)
  : msg_(msg)
  {}
  Init_UserCommand_command_type command_text(::ros_ai_assistant::msg::UserCommand::_command_text_type arg)
  {
    msg_.command_text = std::move(arg);
    return Init_UserCommand_command_type(msg_);
  }

private:
  ::ros_ai_assistant::msg::UserCommand msg_;
};

class Init_UserCommand_command_id
{
public:
  explicit Init_UserCommand_command_id(::ros_ai_assistant::msg::UserCommand & msg)
  : msg_(msg)
  {}
  Init_UserCommand_command_text command_id(::ros_ai_assistant::msg::UserCommand::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return Init_UserCommand_command_text(msg_);
  }

private:
  ::ros_ai_assistant::msg::UserCommand msg_;
};

class Init_UserCommand_header
{
public:
  Init_UserCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserCommand_command_id header(::ros_ai_assistant::msg::UserCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UserCommand_command_id(msg_);
  }

private:
  ::ros_ai_assistant::msg::UserCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::msg::UserCommand>()
{
  return ros_ai_assistant::msg::builder::Init_UserCommand_header();
}

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__USER_COMMAND__BUILDER_HPP_
