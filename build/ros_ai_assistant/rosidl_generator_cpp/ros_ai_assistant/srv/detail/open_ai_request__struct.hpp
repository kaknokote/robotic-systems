// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_ai_assistant:srv/OpenAIRequest.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__OPEN_AI_REQUEST__STRUCT_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__OPEN_AI_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_ai_assistant__srv__OpenAIRequest_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__srv__OpenAIRequest_Request __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OpenAIRequest_Request_
{
  using Type = OpenAIRequest_Request_<ContainerAllocator>;

  explicit OpenAIRequest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
      this->context = "";
      this->model = "";
    }
  }

  explicit OpenAIRequest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prompt(_alloc),
    context(_alloc),
    model(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
      this->context = "";
      this->model = "";
    }
  }

  // field types and members
  using _prompt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _prompt_type prompt;
  using _context_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _context_type context;
  using _model_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_type model;

  // setters for named parameter idiom
  Type & set__prompt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->prompt = _arg;
    return *this;
  }
  Type & set__context(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->context = _arg;
    return *this;
  }
  Type & set__model(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ai_assistant::srv::OpenAIRequest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::srv::OpenAIRequest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::OpenAIRequest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::OpenAIRequest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::OpenAIRequest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::OpenAIRequest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::OpenAIRequest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::OpenAIRequest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::OpenAIRequest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::OpenAIRequest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__srv__OpenAIRequest_Request
    std::shared_ptr<ros_ai_assistant::srv::OpenAIRequest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__srv__OpenAIRequest_Request
    std::shared_ptr<ros_ai_assistant::srv::OpenAIRequest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenAIRequest_Request_ & other) const
  {
    if (this->prompt != other.prompt) {
      return false;
    }
    if (this->context != other.context) {
      return false;
    }
    if (this->model != other.model) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenAIRequest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenAIRequest_Request_

// alias to use template instance with default allocator
using OpenAIRequest_Request =
  ros_ai_assistant::srv::OpenAIRequest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_ai_assistant


#ifndef _WIN32
# define DEPRECATED__ros_ai_assistant__srv__OpenAIRequest_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__srv__OpenAIRequest_Response __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OpenAIRequest_Response_
{
  using Type = OpenAIRequest_Response_<ContainerAllocator>;

  explicit OpenAIRequest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
      this->success = false;
      this->confidence = 0.0f;
    }
  }

  explicit OpenAIRequest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
      this->success = false;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;
  using _success_type =
    bool;
  _success_type success;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ai_assistant::srv::OpenAIRequest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::srv::OpenAIRequest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::OpenAIRequest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::OpenAIRequest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::OpenAIRequest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::OpenAIRequest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::OpenAIRequest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::OpenAIRequest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::OpenAIRequest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::OpenAIRequest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__srv__OpenAIRequest_Response
    std::shared_ptr<ros_ai_assistant::srv::OpenAIRequest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__srv__OpenAIRequest_Response
    std::shared_ptr<ros_ai_assistant::srv::OpenAIRequest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenAIRequest_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenAIRequest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenAIRequest_Response_

// alias to use template instance with default allocator
using OpenAIRequest_Response =
  ros_ai_assistant::srv::OpenAIRequest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_ai_assistant

namespace ros_ai_assistant
{

namespace srv
{

struct OpenAIRequest
{
  using Request = ros_ai_assistant::srv::OpenAIRequest_Request;
  using Response = ros_ai_assistant::srv::OpenAIRequest_Response;
};

}  // namespace srv

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__OPEN_AI_REQUEST__STRUCT_HPP_
