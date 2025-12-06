// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ai_assistant:srv/UserAuthentication.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__USER_AUTHENTICATION__TRAITS_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__USER_AUTHENTICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_ai_assistant/srv/detail/user_authentication__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_ai_assistant
{

namespace srv
{

inline void to_flow_style_yaml(
  const UserAuthentication_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: user_id
  {
    out << "user_id: ";
    rosidl_generator_traits::value_to_yaml(msg.user_id, out);
    out << ", ";
  }

  // member: token
  {
    out << "token: ";
    rosidl_generator_traits::value_to_yaml(msg.token, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserAuthentication_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: user_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_id: ";
    rosidl_generator_traits::value_to_yaml(msg.user_id, out);
    out << "\n";
  }

  // member: token
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "token: ";
    rosidl_generator_traits::value_to_yaml(msg.token, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserAuthentication_Request & msg, bool use_flow_style = false)
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
  const ros_ai_assistant::srv::UserAuthentication_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::srv::UserAuthentication_Request & msg)
{
  return ros_ai_assistant::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::srv::UserAuthentication_Request>()
{
  return "ros_ai_assistant::srv::UserAuthentication_Request";
}

template<>
inline const char * name<ros_ai_assistant::srv::UserAuthentication_Request>()
{
  return "ros_ai_assistant/srv/UserAuthentication_Request";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::UserAuthentication_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::srv::UserAuthentication_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::srv::UserAuthentication_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_ai_assistant
{

namespace srv
{

inline void to_flow_style_yaml(
  const UserAuthentication_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: authorized
  {
    out << "authorized: ";
    rosidl_generator_traits::value_to_yaml(msg.authorized, out);
    out << ", ";
  }

  // member: role
  {
    out << "role: ";
    rosidl_generator_traits::value_to_yaml(msg.role, out);
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
  const UserAuthentication_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: authorized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "authorized: ";
    rosidl_generator_traits::value_to_yaml(msg.authorized, out);
    out << "\n";
  }

  // member: role
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "role: ";
    rosidl_generator_traits::value_to_yaml(msg.role, out);
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

inline std::string to_yaml(const UserAuthentication_Response & msg, bool use_flow_style = false)
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
  const ros_ai_assistant::srv::UserAuthentication_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::srv::UserAuthentication_Response & msg)
{
  return ros_ai_assistant::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::srv::UserAuthentication_Response>()
{
  return "ros_ai_assistant::srv::UserAuthentication_Response";
}

template<>
inline const char * name<ros_ai_assistant::srv::UserAuthentication_Response>()
{
  return "ros_ai_assistant/srv/UserAuthentication_Response";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::UserAuthentication_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::srv::UserAuthentication_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::srv::UserAuthentication_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_ai_assistant::srv::UserAuthentication>()
{
  return "ros_ai_assistant::srv::UserAuthentication";
}

template<>
inline const char * name<ros_ai_assistant::srv::UserAuthentication>()
{
  return "ros_ai_assistant/srv/UserAuthentication";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::UserAuthentication>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_ai_assistant::srv::UserAuthentication_Request>::value &&
    has_fixed_size<ros_ai_assistant::srv::UserAuthentication_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_ai_assistant::srv::UserAuthentication>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_ai_assistant::srv::UserAuthentication_Request>::value &&
    has_bounded_size<ros_ai_assistant::srv::UserAuthentication_Response>::value
  >
{
};

template<>
struct is_service<ros_ai_assistant::srv::UserAuthentication>
  : std::true_type
{
};

template<>
struct is_service_request<ros_ai_assistant::srv::UserAuthentication_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_ai_assistant::srv::UserAuthentication_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__USER_AUTHENTICATION__TRAITS_HPP_
