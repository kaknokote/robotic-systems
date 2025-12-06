// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_ai_assistant:srv/EmergencyShutdown.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__EMERGENCY_SHUTDOWN__STRUCT_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__EMERGENCY_SHUTDOWN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_ai_assistant__srv__EmergencyShutdown_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__srv__EmergencyShutdown_Request __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EmergencyShutdown_Request_
{
  using Type = EmergencyShutdown_Request_<ContainerAllocator>;

  explicit EmergencyShutdown_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reason = "";
    }
  }

  explicit EmergencyShutdown_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reason = "";
    }
  }

  // field types and members
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ai_assistant::srv::EmergencyShutdown_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::srv::EmergencyShutdown_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::EmergencyShutdown_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::EmergencyShutdown_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::EmergencyShutdown_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::EmergencyShutdown_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::EmergencyShutdown_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::EmergencyShutdown_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::EmergencyShutdown_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::EmergencyShutdown_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__srv__EmergencyShutdown_Request
    std::shared_ptr<ros_ai_assistant::srv::EmergencyShutdown_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__srv__EmergencyShutdown_Request
    std::shared_ptr<ros_ai_assistant::srv::EmergencyShutdown_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyShutdown_Request_ & other) const
  {
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyShutdown_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyShutdown_Request_

// alias to use template instance with default allocator
using EmergencyShutdown_Request =
  ros_ai_assistant::srv::EmergencyShutdown_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_ai_assistant


#ifndef _WIN32
# define DEPRECATED__ros_ai_assistant__srv__EmergencyShutdown_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__srv__EmergencyShutdown_Response __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EmergencyShutdown_Response_
{
  using Type = EmergencyShutdown_Response_<ContainerAllocator>;

  explicit EmergencyShutdown_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->message = "";
    }
  }

  explicit EmergencyShutdown_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->message = "";
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
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
    ros_ai_assistant::srv::EmergencyShutdown_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::srv::EmergencyShutdown_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::EmergencyShutdown_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::EmergencyShutdown_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::EmergencyShutdown_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::EmergencyShutdown_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::EmergencyShutdown_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::EmergencyShutdown_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::EmergencyShutdown_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::EmergencyShutdown_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__srv__EmergencyShutdown_Response
    std::shared_ptr<ros_ai_assistant::srv::EmergencyShutdown_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__srv__EmergencyShutdown_Response
    std::shared_ptr<ros_ai_assistant::srv::EmergencyShutdown_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyShutdown_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyShutdown_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyShutdown_Response_

// alias to use template instance with default allocator
using EmergencyShutdown_Response =
  ros_ai_assistant::srv::EmergencyShutdown_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_ai_assistant

namespace ros_ai_assistant
{

namespace srv
{

struct EmergencyShutdown
{
  using Request = ros_ai_assistant::srv::EmergencyShutdown_Request;
  using Response = ros_ai_assistant::srv::EmergencyShutdown_Response;
};

}  // namespace srv

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__EMERGENCY_SHUTDOWN__STRUCT_HPP_
