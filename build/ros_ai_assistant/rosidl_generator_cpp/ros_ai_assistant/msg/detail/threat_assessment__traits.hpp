// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ai_assistant:msg/ThreatAssessment.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__THREAT_ASSESSMENT__TRAITS_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__THREAT_ASSESSMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_ai_assistant/msg/detail/threat_assessment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros_ai_assistant
{

namespace msg
{

inline void to_flow_style_yaml(
  const ThreatAssessment & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: threat_id
  {
    out << "threat_id: ";
    rosidl_generator_traits::value_to_yaml(msg.threat_id, out);
    out << ", ";
  }

  // member: threat_level
  {
    out << "threat_level: ";
    rosidl_generator_traits::value_to_yaml(msg.threat_level, out);
    out << ", ";
  }

  // member: category
  {
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: recommended_action
  {
    out << "recommended_action: ";
    rosidl_generator_traits::value_to_yaml(msg.recommended_action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ThreatAssessment & msg,
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

  // member: threat_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threat_id: ";
    rosidl_generator_traits::value_to_yaml(msg.threat_id, out);
    out << "\n";
  }

  // member: threat_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threat_level: ";
    rosidl_generator_traits::value_to_yaml(msg.threat_level, out);
    out << "\n";
  }

  // member: category
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
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

  // member: recommended_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recommended_action: ";
    rosidl_generator_traits::value_to_yaml(msg.recommended_action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ThreatAssessment & msg, bool use_flow_style = false)
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
  const ros_ai_assistant::msg::ThreatAssessment & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::msg::ThreatAssessment & msg)
{
  return ros_ai_assistant::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::msg::ThreatAssessment>()
{
  return "ros_ai_assistant::msg::ThreatAssessment";
}

template<>
inline const char * name<ros_ai_assistant::msg::ThreatAssessment>()
{
  return "ros_ai_assistant/msg/ThreatAssessment";
}

template<>
struct has_fixed_size<ros_ai_assistant::msg::ThreatAssessment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::msg::ThreatAssessment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::msg::ThreatAssessment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__THREAT_ASSESSMENT__TRAITS_HPP_
