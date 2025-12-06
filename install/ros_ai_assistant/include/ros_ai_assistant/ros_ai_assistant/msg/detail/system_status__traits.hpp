// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ai_assistant:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_ai_assistant/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros_ai_assistant
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: is_operational
  {
    out << "is_operational: ";
    rosidl_generator_traits::value_to_yaml(msg.is_operational, out);
    out << ", ";
  }

  // member: component
  {
    out << "component: ";
    rosidl_generator_traits::value_to_yaml(msg.component, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemStatus & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: is_operational
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_operational: ";
    rosidl_generator_traits::value_to_yaml(msg.is_operational, out);
    out << "\n";
  }

  // member: component
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "component: ";
    rosidl_generator_traits::value_to_yaml(msg.component, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemStatus & msg, bool use_flow_style = false)
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
  const ros_ai_assistant::msg::SystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::msg::SystemStatus & msg)
{
  return ros_ai_assistant::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::msg::SystemStatus>()
{
  return "ros_ai_assistant::msg::SystemStatus";
}

template<>
inline const char * name<ros_ai_assistant::msg::SystemStatus>()
{
  return "ros_ai_assistant/msg/SystemStatus";
}

template<>
struct has_fixed_size<ros_ai_assistant::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::msg::SystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
