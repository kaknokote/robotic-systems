// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ai_assistant:msg/SecurityAlert.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__SECURITY_ALERT__TRAITS_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__SECURITY_ALERT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_ai_assistant/msg/detail/security_alert__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros_ai_assistant
{

namespace msg
{

inline void to_flow_style_yaml(
  const SecurityAlert & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: alert_id
  {
    out << "alert_id: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_id, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: requires_action
  {
    out << "requires_action: ";
    rosidl_generator_traits::value_to_yaml(msg.requires_action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SecurityAlert & msg,
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

  // member: alert_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alert_id: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_id, out);
    out << "\n";
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: requires_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requires_action: ";
    rosidl_generator_traits::value_to_yaml(msg.requires_action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SecurityAlert & msg, bool use_flow_style = false)
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
  const ros_ai_assistant::msg::SecurityAlert & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::msg::SecurityAlert & msg)
{
  return ros_ai_assistant::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::msg::SecurityAlert>()
{
  return "ros_ai_assistant::msg::SecurityAlert";
}

template<>
inline const char * name<ros_ai_assistant::msg::SecurityAlert>()
{
  return "ros_ai_assistant/msg/SecurityAlert";
}

template<>
struct has_fixed_size<ros_ai_assistant::msg::SecurityAlert>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::msg::SecurityAlert>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::msg::SecurityAlert>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__SECURITY_ALERT__TRAITS_HPP_
