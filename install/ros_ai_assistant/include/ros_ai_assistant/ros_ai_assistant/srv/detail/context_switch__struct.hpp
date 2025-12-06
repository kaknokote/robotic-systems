// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_ai_assistant:srv/ContextSwitch.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__CONTEXT_SWITCH__STRUCT_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__CONTEXT_SWITCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_ai_assistant__srv__ContextSwitch_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__srv__ContextSwitch_Request __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ContextSwitch_Request_
{
  using Type = ContextSwitch_Request_<ContainerAllocator>;

  explicit ContextSwitch_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_context = "";
      this->save_previous = false;
    }
  }

  explicit ContextSwitch_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : new_context(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_context = "";
      this->save_previous = false;
    }
  }

  // field types and members
  using _new_context_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _new_context_type new_context;
  using _save_previous_type =
    bool;
  _save_previous_type save_previous;

  // setters for named parameter idiom
  Type & set__new_context(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->new_context = _arg;
    return *this;
  }
  Type & set__save_previous(
    const bool & _arg)
  {
    this->save_previous = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ai_assistant::srv::ContextSwitch_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::srv::ContextSwitch_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::ContextSwitch_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::ContextSwitch_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::ContextSwitch_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::ContextSwitch_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::ContextSwitch_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::ContextSwitch_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::ContextSwitch_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::ContextSwitch_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__srv__ContextSwitch_Request
    std::shared_ptr<ros_ai_assistant::srv::ContextSwitch_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__srv__ContextSwitch_Request
    std::shared_ptr<ros_ai_assistant::srv::ContextSwitch_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContextSwitch_Request_ & other) const
  {
    if (this->new_context != other.new_context) {
      return false;
    }
    if (this->save_previous != other.save_previous) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContextSwitch_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContextSwitch_Request_

// alias to use template instance with default allocator
using ContextSwitch_Request =
  ros_ai_assistant::srv::ContextSwitch_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_ai_assistant


#ifndef _WIN32
# define DEPRECATED__ros_ai_assistant__srv__ContextSwitch_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__srv__ContextSwitch_Response __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ContextSwitch_Response_
{
  using Type = ContextSwitch_Response_<ContainerAllocator>;

  explicit ContextSwitch_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ContextSwitch_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ai_assistant::srv::ContextSwitch_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::srv::ContextSwitch_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::ContextSwitch_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::ContextSwitch_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::ContextSwitch_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::ContextSwitch_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::ContextSwitch_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::ContextSwitch_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::ContextSwitch_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::ContextSwitch_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__srv__ContextSwitch_Response
    std::shared_ptr<ros_ai_assistant::srv::ContextSwitch_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__srv__ContextSwitch_Response
    std::shared_ptr<ros_ai_assistant::srv::ContextSwitch_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContextSwitch_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContextSwitch_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContextSwitch_Response_

// alias to use template instance with default allocator
using ContextSwitch_Response =
  ros_ai_assistant::srv::ContextSwitch_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_ai_assistant

namespace ros_ai_assistant
{

namespace srv
{

struct ContextSwitch
{
  using Request = ros_ai_assistant::srv::ContextSwitch_Request;
  using Response = ros_ai_assistant::srv::ContextSwitch_Response;
};

}  // namespace srv

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__CONTEXT_SWITCH__STRUCT_HPP_
