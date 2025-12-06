// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_ai_assistant:msg/UserCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__USER_COMMAND__STRUCT_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__USER_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__ros_ai_assistant__msg__UserCommand __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__msg__UserCommand __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UserCommand_
{
  using Type = UserCommand_<ContainerAllocator>;

  explicit UserCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_id = "";
      this->command_text = "";
      this->command_type = "";
      this->priority = 0l;
      this->context = "";
    }
  }

  explicit UserCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    command_id(_alloc),
    command_text(_alloc),
    command_type(_alloc),
    context(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_id = "";
      this->command_text = "";
      this->command_type = "";
      this->priority = 0l;
      this->context = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _command_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_id_type command_id;
  using _command_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_text_type command_text;
  using _command_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type_type command_type;
  using _priority_type =
    int32_t;
  _priority_type priority;
  using _context_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _context_type context;

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
  Type & set__command_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command_text = _arg;
    return *this;
  }
  Type & set__command_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command_type = _arg;
    return *this;
  }
  Type & set__priority(
    const int32_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__context(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->context = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ai_assistant::msg::UserCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::msg::UserCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::msg::UserCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::msg::UserCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::msg::UserCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::msg::UserCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::msg::UserCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::msg::UserCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::msg::UserCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::msg::UserCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__msg__UserCommand
    std::shared_ptr<ros_ai_assistant::msg::UserCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__msg__UserCommand
    std::shared_ptr<ros_ai_assistant::msg::UserCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->command_id != other.command_id) {
      return false;
    }
    if (this->command_text != other.command_text) {
      return false;
    }
    if (this->command_type != other.command_type) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->context != other.context) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserCommand_

// alias to use template instance with default allocator
using UserCommand =
  ros_ai_assistant::msg::UserCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__USER_COMMAND__STRUCT_HPP_
