// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_ai_assistant:msg/SecurityAlert.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__SECURITY_ALERT__STRUCT_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__SECURITY_ALERT__STRUCT_HPP_

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
# define DEPRECATED__ros_ai_assistant__msg__SecurityAlert __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__msg__SecurityAlert __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SecurityAlert_
{
  using Type = SecurityAlert_<ContainerAllocator>;

  explicit SecurityAlert_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alert_id = "";
      this->level = "";
      this->description = "";
      this->source = "";
      this->requires_action = false;
    }
  }

  explicit SecurityAlert_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    alert_id(_alloc),
    level(_alloc),
    description(_alloc),
    source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alert_id = "";
      this->level = "";
      this->description = "";
      this->source = "";
      this->requires_action = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _alert_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _alert_id_type alert_id;
  using _level_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _level_type level;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _requires_action_type =
    bool;
  _requires_action_type requires_action;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__alert_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->alert_id = _arg;
    return *this;
  }
  Type & set__level(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__requires_action(
    const bool & _arg)
  {
    this->requires_action = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ai_assistant::msg::SecurityAlert_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::msg::SecurityAlert_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::msg::SecurityAlert_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::msg::SecurityAlert_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::msg::SecurityAlert_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::msg::SecurityAlert_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::msg::SecurityAlert_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::msg::SecurityAlert_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::msg::SecurityAlert_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::msg::SecurityAlert_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__msg__SecurityAlert
    std::shared_ptr<ros_ai_assistant::msg::SecurityAlert_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__msg__SecurityAlert
    std::shared_ptr<ros_ai_assistant::msg::SecurityAlert_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SecurityAlert_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->alert_id != other.alert_id) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->requires_action != other.requires_action) {
      return false;
    }
    return true;
  }
  bool operator!=(const SecurityAlert_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SecurityAlert_

// alias to use template instance with default allocator
using SecurityAlert =
  ros_ai_assistant::msg::SecurityAlert_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__SECURITY_ALERT__STRUCT_HPP_
