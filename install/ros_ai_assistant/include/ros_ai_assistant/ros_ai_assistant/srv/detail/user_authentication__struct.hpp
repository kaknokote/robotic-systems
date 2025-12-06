// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_ai_assistant:srv/UserAuthentication.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__USER_AUTHENTICATION__STRUCT_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__USER_AUTHENTICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_ai_assistant__srv__UserAuthentication_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__srv__UserAuthentication_Request __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UserAuthentication_Request_
{
  using Type = UserAuthentication_Request_<ContainerAllocator>;

  explicit UserAuthentication_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->token = "";
    }
  }

  explicit UserAuthentication_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : user_id(_alloc),
    token(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->token = "";
    }
  }

  // field types and members
  using _user_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_id_type user_id;
  using _token_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _token_type token;

  // setters for named parameter idiom
  Type & set__user_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_id = _arg;
    return *this;
  }
  Type & set__token(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->token = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ai_assistant::srv::UserAuthentication_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::srv::UserAuthentication_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::UserAuthentication_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::UserAuthentication_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::UserAuthentication_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::UserAuthentication_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::UserAuthentication_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::UserAuthentication_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::UserAuthentication_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::UserAuthentication_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__srv__UserAuthentication_Request
    std::shared_ptr<ros_ai_assistant::srv::UserAuthentication_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__srv__UserAuthentication_Request
    std::shared_ptr<ros_ai_assistant::srv::UserAuthentication_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserAuthentication_Request_ & other) const
  {
    if (this->user_id != other.user_id) {
      return false;
    }
    if (this->token != other.token) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserAuthentication_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserAuthentication_Request_

// alias to use template instance with default allocator
using UserAuthentication_Request =
  ros_ai_assistant::srv::UserAuthentication_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_ai_assistant


#ifndef _WIN32
# define DEPRECATED__ros_ai_assistant__srv__UserAuthentication_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__srv__UserAuthentication_Response __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UserAuthentication_Response_
{
  using Type = UserAuthentication_Response_<ContainerAllocator>;

  explicit UserAuthentication_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->authorized = false;
      this->role = "";
      this->message = "";
    }
  }

  explicit UserAuthentication_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : role(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->authorized = false;
      this->role = "";
      this->message = "";
    }
  }

  // field types and members
  using _authorized_type =
    bool;
  _authorized_type authorized;
  using _role_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _role_type role;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__authorized(
    const bool & _arg)
  {
    this->authorized = _arg;
    return *this;
  }
  Type & set__role(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->role = _arg;
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
    ros_ai_assistant::srv::UserAuthentication_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::srv::UserAuthentication_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::UserAuthentication_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::UserAuthentication_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::UserAuthentication_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::UserAuthentication_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::UserAuthentication_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::UserAuthentication_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::UserAuthentication_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::UserAuthentication_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__srv__UserAuthentication_Response
    std::shared_ptr<ros_ai_assistant::srv::UserAuthentication_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__srv__UserAuthentication_Response
    std::shared_ptr<ros_ai_assistant::srv::UserAuthentication_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserAuthentication_Response_ & other) const
  {
    if (this->authorized != other.authorized) {
      return false;
    }
    if (this->role != other.role) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserAuthentication_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserAuthentication_Response_

// alias to use template instance with default allocator
using UserAuthentication_Response =
  ros_ai_assistant::srv::UserAuthentication_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_ai_assistant

namespace ros_ai_assistant
{

namespace srv
{

struct UserAuthentication
{
  using Request = ros_ai_assistant::srv::UserAuthentication_Request;
  using Response = ros_ai_assistant::srv::UserAuthentication_Response;
};

}  // namespace srv

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__USER_AUTHENTICATION__STRUCT_HPP_
