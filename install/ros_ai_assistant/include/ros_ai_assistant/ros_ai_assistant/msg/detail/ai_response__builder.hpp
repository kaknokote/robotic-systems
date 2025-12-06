// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ai_assistant:msg/AIResponse.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__AI_RESPONSE__BUILDER_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__AI_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_ai_assistant/msg/detail/ai_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_ai_assistant
{

namespace msg
{

namespace builder
{

class Init_AIResponse_finish_reason
{
public:
  explicit Init_AIResponse_finish_reason(::ros_ai_assistant::msg::AIResponse & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::msg::AIResponse finish_reason(::ros_ai_assistant::msg::AIResponse::_finish_reason_type arg)
  {
    msg_.finish_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::msg::AIResponse msg_;
};

class Init_AIResponse_tokens_used
{
public:
  explicit Init_AIResponse_tokens_used(::ros_ai_assistant::msg::AIResponse & msg)
  : msg_(msg)
  {}
  Init_AIResponse_finish_reason tokens_used(::ros_ai_assistant::msg::AIResponse::_tokens_used_type arg)
  {
    msg_.tokens_used = std::move(arg);
    return Init_AIResponse_finish_reason(msg_);
  }

private:
  ::ros_ai_assistant::msg::AIResponse msg_;
};

class Init_AIResponse_confidence
{
public:
  explicit Init_AIResponse_confidence(::ros_ai_assistant::msg::AIResponse & msg)
  : msg_(msg)
  {}
  Init_AIResponse_tokens_used confidence(::ros_ai_assistant::msg::AIResponse::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_AIResponse_tokens_used(msg_);
  }

private:
  ::ros_ai_assistant::msg::AIResponse msg_;
};

class Init_AIResponse_response_text
{
public:
  explicit Init_AIResponse_response_text(::ros_ai_assistant::msg::AIResponse & msg)
  : msg_(msg)
  {}
  Init_AIResponse_confidence response_text(::ros_ai_assistant::msg::AIResponse::_response_text_type arg)
  {
    msg_.response_text = std::move(arg);
    return Init_AIResponse_confidence(msg_);
  }

private:
  ::ros_ai_assistant::msg::AIResponse msg_;
};

class Init_AIResponse_command_id
{
public:
  explicit Init_AIResponse_command_id(::ros_ai_assistant::msg::AIResponse & msg)
  : msg_(msg)
  {}
  Init_AIResponse_response_text command_id(::ros_ai_assistant::msg::AIResponse::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return Init_AIResponse_response_text(msg_);
  }

private:
  ::ros_ai_assistant::msg::AIResponse msg_;
};

class Init_AIResponse_header
{
public:
  Init_AIResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AIResponse_command_id header(::ros_ai_assistant::msg::AIResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AIResponse_command_id(msg_);
  }

private:
  ::ros_ai_assistant::msg::AIResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::msg::AIResponse>()
{
  return ros_ai_assistant::msg::builder::Init_AIResponse_header();
}

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__AI_RESPONSE__BUILDER_HPP_
