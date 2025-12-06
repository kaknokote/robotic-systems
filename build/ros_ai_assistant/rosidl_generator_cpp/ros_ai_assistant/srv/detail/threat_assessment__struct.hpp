// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_ai_assistant:srv/ThreatAssessment.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__THREAT_ASSESSMENT__STRUCT_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__THREAT_ASSESSMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_ai_assistant__srv__ThreatAssessment_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__srv__ThreatAssessment_Request __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ThreatAssessment_Request_
{
  using Type = ThreatAssessment_Request_<ContainerAllocator>;

  explicit ThreatAssessment_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scenario_description = "";
    }
  }

  explicit ThreatAssessment_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scenario_description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scenario_description = "";
    }
  }

  // field types and members
  using _scenario_description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _scenario_description_type scenario_description;

  // setters for named parameter idiom
  Type & set__scenario_description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->scenario_description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ai_assistant::srv::ThreatAssessment_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::srv::ThreatAssessment_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::ThreatAssessment_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::ThreatAssessment_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::ThreatAssessment_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::ThreatAssessment_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::ThreatAssessment_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::ThreatAssessment_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::ThreatAssessment_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::ThreatAssessment_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__srv__ThreatAssessment_Request
    std::shared_ptr<ros_ai_assistant::srv::ThreatAssessment_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__srv__ThreatAssessment_Request
    std::shared_ptr<ros_ai_assistant::srv::ThreatAssessment_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThreatAssessment_Request_ & other) const
  {
    if (this->scenario_description != other.scenario_description) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThreatAssessment_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThreatAssessment_Request_

// alias to use template instance with default allocator
using ThreatAssessment_Request =
  ros_ai_assistant::srv::ThreatAssessment_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_ai_assistant


#ifndef _WIN32
# define DEPRECATED__ros_ai_assistant__srv__ThreatAssessment_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__srv__ThreatAssessment_Response __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ThreatAssessment_Response_
{
  using Type = ThreatAssessment_Response_<ContainerAllocator>;

  explicit ThreatAssessment_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->threat_level = 0.0f;
      this->category = "";
      this->recommendation = "";
    }
  }

  explicit ThreatAssessment_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : category(_alloc),
    recommendation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->threat_level = 0.0f;
      this->category = "";
      this->recommendation = "";
    }
  }

  // field types and members
  using _threat_level_type =
    float;
  _threat_level_type threat_level;
  using _category_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _category_type category;
  using _recommendation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _recommendation_type recommendation;

  // setters for named parameter idiom
  Type & set__threat_level(
    const float & _arg)
  {
    this->threat_level = _arg;
    return *this;
  }
  Type & set__category(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->category = _arg;
    return *this;
  }
  Type & set__recommendation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->recommendation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ai_assistant::srv::ThreatAssessment_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::srv::ThreatAssessment_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::ThreatAssessment_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::srv::ThreatAssessment_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::ThreatAssessment_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::ThreatAssessment_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::srv::ThreatAssessment_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::srv::ThreatAssessment_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::ThreatAssessment_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::srv::ThreatAssessment_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__srv__ThreatAssessment_Response
    std::shared_ptr<ros_ai_assistant::srv::ThreatAssessment_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__srv__ThreatAssessment_Response
    std::shared_ptr<ros_ai_assistant::srv::ThreatAssessment_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThreatAssessment_Response_ & other) const
  {
    if (this->threat_level != other.threat_level) {
      return false;
    }
    if (this->category != other.category) {
      return false;
    }
    if (this->recommendation != other.recommendation) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThreatAssessment_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThreatAssessment_Response_

// alias to use template instance with default allocator
using ThreatAssessment_Response =
  ros_ai_assistant::srv::ThreatAssessment_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_ai_assistant

namespace ros_ai_assistant
{

namespace srv
{

struct ThreatAssessment
{
  using Request = ros_ai_assistant::srv::ThreatAssessment_Request;
  using Response = ros_ai_assistant::srv::ThreatAssessment_Response;
};

}  // namespace srv

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__THREAT_ASSESSMENT__STRUCT_HPP_
