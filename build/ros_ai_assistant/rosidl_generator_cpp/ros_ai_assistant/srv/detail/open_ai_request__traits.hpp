// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_ai_assistant:srv/OpenAIRequest.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__OPEN_AI_REQUEST__TRAITS_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__OPEN_AI_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_ai_assistant/srv/detail/open_ai_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_ai_assistant
{

namespace srv
{

inline void to_flow_style_yaml(
  const OpenAIRequest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: prompt
  {
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
    out << ", ";
  }

  // member: context
  {
    out << "context: ";
    rosidl_generator_traits::value_to_yaml(msg.context, out);
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenAIRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prompt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
    out << "\n";
  }

  // member: context
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "context: ";
    rosidl_generator_traits::value_to_yaml(msg.context, out);
    out << "\n";
  }

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenAIRequest_Request & msg, bool use_flow_style = false)
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
  const ros_ai_assistant::srv::OpenAIRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::srv::OpenAIRequest_Request & msg)
{
  return ros_ai_assistant::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::srv::OpenAIRequest_Request>()
{
  return "ros_ai_assistant::srv::OpenAIRequest_Request";
}

template<>
inline const char * name<ros_ai_assistant::srv::OpenAIRequest_Request>()
{
  return "ros_ai_assistant/srv/OpenAIRequest_Request";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::OpenAIRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::srv::OpenAIRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::srv::OpenAIRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_ai_assistant
{

namespace srv
{

inline void to_flow_style_yaml(
  const OpenAIRequest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenAIRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenAIRequest_Response & msg, bool use_flow_style = false)
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
  const ros_ai_assistant::srv::OpenAIRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_ai_assistant::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_ai_assistant::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_ai_assistant::srv::OpenAIRequest_Response & msg)
{
  return ros_ai_assistant::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_ai_assistant::srv::OpenAIRequest_Response>()
{
  return "ros_ai_assistant::srv::OpenAIRequest_Response";
}

template<>
inline const char * name<ros_ai_assistant::srv::OpenAIRequest_Response>()
{
  return "ros_ai_assistant/srv/OpenAIRequest_Response";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::OpenAIRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_ai_assistant::srv::OpenAIRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_ai_assistant::srv::OpenAIRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_ai_assistant::srv::OpenAIRequest>()
{
  return "ros_ai_assistant::srv::OpenAIRequest";
}

template<>
inline const char * name<ros_ai_assistant::srv::OpenAIRequest>()
{
  return "ros_ai_assistant/srv/OpenAIRequest";
}

template<>
struct has_fixed_size<ros_ai_assistant::srv::OpenAIRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_ai_assistant::srv::OpenAIRequest_Request>::value &&
    has_fixed_size<ros_ai_assistant::srv::OpenAIRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_ai_assistant::srv::OpenAIRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_ai_assistant::srv::OpenAIRequest_Request>::value &&
    has_bounded_size<ros_ai_assistant::srv::OpenAIRequest_Response>::value
  >
{
};

template<>
struct is_service<ros_ai_assistant::srv::OpenAIRequest>
  : std::true_type
{
};

template<>
struct is_service_request<ros_ai_assistant::srv::OpenAIRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_ai_assistant::srv::OpenAIRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__OPEN_AI_REQUEST__TRAITS_HPP_
