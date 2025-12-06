// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ai_assistant:msg/WeaponStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__WEAPON_STATUS__TRAITS_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__WEAPON_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_ai_assistant/msg/detail/weapon_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros_ai_assistant
{

namespace msg
{

inline void to_flow_style_yaml(
  const WeaponStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: armed
  {
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: ammo_level
  {
    out << "ammo_level: ";
    rosidl_generator_traits::value_to_yaml(msg.ammo_level, out);
    out << ", ";
  }

  // member: status_message
  {
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WeaponStatus & msg,
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

  // member: armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: ammo_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ammo_level: ";
    rosidl_generator_traits::value_to_yaml(msg.ammo_level, out);
    out << "\n";
  }

  // member: status_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WeaponStatus & msg, bool use_flow_style = false)
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
  const ros_ai_assistant::msg::WeaponStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::msg::WeaponStatus & msg)
{
  return ros_ai_assistant::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::msg::WeaponStatus>()
{
  return "ros_ai_assistant::msg::WeaponStatus";
}

template<>
inline const char * name<ros_ai_assistant::msg::WeaponStatus>()
{
  return "ros_ai_assistant/msg/WeaponStatus";
}

template<>
struct has_fixed_size<ros_ai_assistant::msg::WeaponStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::msg::WeaponStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::msg::WeaponStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__WEAPON_STATUS__TRAITS_HPP_
