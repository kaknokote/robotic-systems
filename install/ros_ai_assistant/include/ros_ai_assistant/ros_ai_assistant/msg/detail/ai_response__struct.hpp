// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_ai_assistant:msg/AIResponse.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__AI_RESPONSE__STRUCT_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__AI_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_ai_assistant__msg__AIResponse __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__msg__AIResponse __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AIResponse_
{
  using Type = AIResponse_<ContainerAllocator>;

  explicit AIResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_id = "";
      this->response_text = "";
      this->confidence = 0.0f;
      this->tokens_used = 0l;
      this->finish_reason = "";
    }
  }

  explicit AIResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    command_id(_alloc),
    response_text(_alloc),
    finish_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_id = "";
      this->response_text = "";
      this->confidence = 0.0f;
      this->tokens_used = 0l;
      this->finish_reason = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _command_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_id_type command_id;
  using _response_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_text_type response_text;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _tokens_used_type =
    int32_t;
  _tokens_used_type tokens_used;
  using _finish_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _finish_reason_type finish_reason;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__command_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command_id = _arg;
    return *this;
  }
  Type & set__response_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response_text = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__tokens_used(
    const int32_t & _arg)
  {
    this->tokens_used = _arg;
    return *this;
  }
  Type & set__finish_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->finish_reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ai_assistant::msg::AIResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::msg::AIResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::msg::AIResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::msg::AIResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::msg::AIResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::msg::AIResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::msg::AIResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::msg::AIResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::msg::AIResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::msg::AIResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__msg__AIResponse
    std::shared_ptr<ros_ai_assistant::msg::AIResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__msg__AIResponse
    std::shared_ptr<ros_ai_assistant::msg::AIResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AIResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->command_id != other.command_id) {
      return false;
    }
    if (this->response_text != other.response_text) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->tokens_used != other.tokens_used) {
      return false;
    }
    if (this->finish_reason != other.finish_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const AIResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AIResponse_

// alias to use template instance with default allocator
using AIResponse =
  ros_ai_assistant::msg::AIResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__AI_RESPONSE__STRUCT_HPP_
