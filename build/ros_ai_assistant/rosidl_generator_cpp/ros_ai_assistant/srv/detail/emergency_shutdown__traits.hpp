// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ai_assistant:srv/EmergencyShutdown.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__EMERGENCY_SHUTDOWN__TRAITS_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__EMERGENCY_SHUTDOWN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_ai_assistant/srv/detail/emergency_shutdown__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_ai_assistant
{

namespace srv
{

inline void to_flow_style_yaml(
  const EmergencyShutdown_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyShutdown_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyShutdown_Request & msg, bool use_flow_style = false)
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
  const ros_ai_assistant::srv::EmergencyShutdown_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::srv::EmergencyShutdown_Request & msg)
{
  return ros_ai_assistant::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::srv::EmergencyShutdown_Request>()
{
  return "ros_ai_assistant::srv::EmergencyShutdown_Request";
}

template<>
inline const char * name<ros_ai_assistant::srv::EmergencyShutdown_Request>()
{
  return "ros_ai_assistant/srv/EmergencyShutdown_Request";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::EmergencyShutdown_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::srv::EmergencyShutdown_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::srv::EmergencyShutdown_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_ai_assistant
{

namespace srv
{

inline void to_flow_style_yaml(
  const EmergencyShutdown_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyShutdown_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyShutdown_Response & msg, bool use_flow_style = false)
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
  const ros_ai_assistant::srv::EmergencyShutdown_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::srv::EmergencyShutdown_Response & msg)
{
  return ros_ai_assistant::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::srv::EmergencyShutdown_Response>()
{
  return "ros_ai_assistant::srv::EmergencyShutdown_Response";
}

template<>
inline const char * name<ros_ai_assistant::srv::EmergencyShutdown_Response>()
{
  return "ros_ai_assistant/srv/EmergencyShutdown_Response";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::EmergencyShutdown_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::srv::EmergencyShutdown_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::srv::EmergencyShutdown_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_ai_assistant::srv::EmergencyShutdown>()
{
  return "ros_ai_assistant::srv::EmergencyShutdown";
}

template<>
inline const char * name<ros_ai_assistant::srv::EmergencyShutdown>()
{
  return "ros_ai_assistant/srv/EmergencyShutdown";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::EmergencyShutdown>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_ai_assistant::srv::EmergencyShutdown_Request>::value &&
    has_fixed_size<ros_ai_assistant::srv::EmergencyShutdown_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_ai_assistant::srv::EmergencyShutdown>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_ai_assistant::srv::EmergencyShutdown_Request>::value &&
    has_bounded_size<ros_ai_assistant::srv::EmergencyShutdown_Response>::value
  >
{
};

template<>
struct is_service<ros_ai_assistant::srv::EmergencyShutdown>
  : std::true_type
{
};

template<>
struct is_service_request<ros_ai_assistant::srv::EmergencyShutdown_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_ai_assistant::srv::EmergencyShutdown_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__EMERGENCY_SHUTDOWN__TRAITS_HPP_
