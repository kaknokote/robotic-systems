// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ai_assistant:srv/ThreatAssessment.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__THREAT_ASSESSMENT__TRAITS_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__THREAT_ASSESSMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_ai_assistant/srv/detail/threat_assessment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_ai_assistant
{

namespace srv
{

inline void to_flow_style_yaml(
  const ThreatAssessment_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: scenario_description
  {
    out << "scenario_description: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario_description, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ThreatAssessment_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: scenario_description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scenario_description: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario_description, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ThreatAssessment_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros_ai_assistant

namespace rosidl_generator_traits
{

[[deprecated("use ros_ai_assistant::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_ai_assistant::srv::ThreatAssessment_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::srv::ThreatAssessment_Request & msg)
{
  return ros_ai_assistant::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::srv::ThreatAssessment_Request>()
{
  return "ros_ai_assistant::srv::ThreatAssessment_Request";
}

template<>
inline const char * name<ros_ai_assistant::srv::ThreatAssessment_Request>()
{
  return "ros_ai_assistant/srv/ThreatAssessment_Request";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::ThreatAssessment_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::srv::ThreatAssessment_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::srv::ThreatAssessment_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_ai_assistant
{

namespace srv
{

inline void to_flow_style_yaml(
  const ThreatAssessment_Response & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: recommendation
  {
    out << "recommendation: ";
    rosidl_generator_traits::value_to_yaml(msg.recommendation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ThreatAssessment_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: recommendation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recommendation: ";
    rosidl_generator_traits::value_to_yaml(msg.recommendation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ThreatAssessment_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros_ai_assistant

namespace rosidl_generator_traits
{

[[deprecated("use ros_ai_assistant::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_ai_assistant::srv::ThreatAssessment_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::srv::ThreatAssessment_Response & msg)
{
  return ros_ai_assistant::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::srv::ThreatAssessment_Response>()
{
  return "ros_ai_assistant::srv::ThreatAssessment_Response";
}

template<>
inline const char * name<ros_ai_assistant::srv::ThreatAssessment_Response>()
{
  return "ros_ai_assistant/srv/ThreatAssessment_Response";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::ThreatAssessment_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::srv::ThreatAssessment_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::srv::ThreatAssessment_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_ai_assistant::srv::ThreatAssessment>()
{
  return "ros_ai_assistant::srv::ThreatAssessment";
}

template<>
inline const char * name<ros_ai_assistant::srv::ThreatAssessment>()
{
  return "ros_ai_assistant/srv/ThreatAssessment";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::ThreatAssessment>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_ai_assistant::srv::ThreatAssessment_Request>::value &&
    has_fixed_size<ros_ai_assistant::srv::ThreatAssessment_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_ai_assistant::srv::ThreatAssessment>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_ai_assistant::srv::ThreatAssessment_Request>::value &&
    has_bounded_size<ros_ai_assistant::srv::ThreatAssessment_Response>::value
  >
{
};

template<>
struct is_service<ros_ai_assistant::srv::ThreatAssessment>
  : std::true_type
{
};

template<>
struct is_service_request<ros_ai_assistant::srv::ThreatAssessment_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_ai_assistant::srv::ThreatAssessment_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__THREAT_ASSESSMENT__TRAITS_HPP_
