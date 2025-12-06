// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ai_assistant:srv/ContextSwitch.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__CONTEXT_SWITCH__TRAITS_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__CONTEXT_SWITCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_ai_assistant/srv/detail/context_switch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_ai_assistant
{

namespace srv
{

inline void to_flow_style_yaml(
  const ContextSwitch_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: new_context
  {
    out << "new_context: ";
    rosidl_generator_traits::value_to_yaml(msg.new_context, out);
    out << ", ";
  }

  // member: save_previous
  {
    out << "save_previous: ";
    rosidl_generator_traits::value_to_yaml(msg.save_previous, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ContextSwitch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: new_context
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_context: ";
    rosidl_generator_traits::value_to_yaml(msg.new_context, out);
    out << "\n";
  }

  // member: save_previous
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "save_previous: ";
    rosidl_generator_traits::value_to_yaml(msg.save_previous, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContextSwitch_Request & msg, bool use_flow_style = false)
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
  const ros_ai_assistant::srv::ContextSwitch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::srv::ContextSwitch_Request & msg)
{
  return ros_ai_assistant::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::srv::ContextSwitch_Request>()
{
  return "ros_ai_assistant::srv::ContextSwitch_Request";
}

template<>
inline const char * name<ros_ai_assistant::srv::ContextSwitch_Request>()
{
  return "ros_ai_assistant/srv/ContextSwitch_Request";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::ContextSwitch_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::srv::ContextSwitch_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::srv::ContextSwitch_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_ai_assistant
{

namespace srv
{

inline void to_flow_style_yaml(
  const ContextSwitch_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
  const ContextSwitch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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

inline std::string to_yaml(const ContextSwitch_Response & msg, bool use_flow_style = false)
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
  const ros_ai_assistant::srv::ContextSwitch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::srv::ContextSwitch_Response & msg)
{
  return ros_ai_assistant::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::srv::ContextSwitch_Response>()
{
  return "ros_ai_assistant::srv::ContextSwitch_Response";
}

template<>
inline const char * name<ros_ai_assistant::srv::ContextSwitch_Response>()
{
  return "ros_ai_assistant/srv/ContextSwitch_Response";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::ContextSwitch_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::srv::ContextSwitch_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::srv::ContextSwitch_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_ai_assistant::srv::ContextSwitch>()
{
  return "ros_ai_assistant::srv::ContextSwitch";
}

template<>
inline const char * name<ros_ai_assistant::srv::ContextSwitch>()
{
  return "ros_ai_assistant/srv/ContextSwitch";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::ContextSwitch>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_ai_assistant::srv::ContextSwitch_Request>::value &&
    has_fixed_size<ros_ai_assistant::srv::ContextSwitch_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_ai_assistant::srv::ContextSwitch>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_ai_assistant::srv::ContextSwitch_Request>::value &&
    has_bounded_size<ros_ai_assistant::srv::ContextSwitch_Response>::value
  >
{
};

template<>
struct is_service<ros_ai_assistant::srv::ContextSwitch>
  : std::true_type
{
};

template<>
struct is_service_request<ros_ai_assistant::srv::ContextSwitch_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_ai_assistant::srv::ContextSwitch_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__CONTEXT_SWITCH__TRAITS_HPP_
