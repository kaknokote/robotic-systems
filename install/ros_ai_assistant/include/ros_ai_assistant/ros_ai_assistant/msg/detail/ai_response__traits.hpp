// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ai_assistant:msg/AIResponse.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__AI_RESPONSE__TRAITS_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__AI_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_ai_assistant/msg/detail/ai_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros_ai_assistant
{

namespace msg
{

inline void to_flow_style_yaml(
  const AIResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: command_id
  {
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << ", ";
  }

  // member: response_text
  {
    out << "response_text: ";
    rosidl_generator_traits::value_to_yaml(msg.response_text, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: tokens_used
  {
    out << "tokens_used: ";
    rosidl_generator_traits::value_to_yaml(msg.tokens_used, out);
    out << ", ";
  }

  // member: finish_reason
  {
    out << "finish_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.finish_reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AIResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: command_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << "\n";
  }

  // member: response_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response_text: ";
    rosidl_generator_traits::value_to_yaml(msg.response_text, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: tokens_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tokens_used: ";
    rosidl_generator_traits::value_to_yaml(msg.tokens_used, out);
    out << "\n";
  }

  // member: finish_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finish_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.finish_reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AIResponse & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros_ai_assistant

namespace rosidl_generator_traits
{

[[deprecated("use ros_ai_assistant::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_ai_assistant::msg::AIResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::msg::AIResponse & msg)
{
  return ros_ai_assistant::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::msg::AIResponse>()
{
  return "ros_ai_assistant::msg::AIResponse";
}

template<>
inline const char * name<ros_ai_assistant::msg::AIResponse>()
{
  return "ros_ai_assistant/msg/AIResponse";
}

template<>
struct has_fixed_size<ros_ai_assistant::msg::AIResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::msg::AIResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::msg::AIResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__AI_RESPONSE__TRAITS_HPP_
