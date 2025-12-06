// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_ai_assistant:msg/ThreatAssessment.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__THREAT_ASSESSMENT__STRUCT_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__THREAT_ASSESSMENT__STRUCT_HPP_

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
# define DEPRECATED__ros_ai_assistant__msg__ThreatAssessment __attribute__((deprecated))
#else
# define DEPRECATED__ros_ai_assistant__msg__ThreatAssessment __declspec(deprecated)
#endif

namespace ros_ai_assistant
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ThreatAssessment_
{
  using Type = ThreatAssessment_<ContainerAllocator>;

  explicit ThreatAssessment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->threat_id = "";
      this->threat_level = 0.0f;
      this->category = "";
      this->description = "";
      this->recommended_action = "";
    }
  }

  explicit ThreatAssessment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    threat_id(_alloc),
    category(_alloc),
    description(_alloc),
    recommended_action(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->threat_id = "";
      this->threat_level = 0.0f;
      this->category = "";
      this->description = "";
      this->recommended_action = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _threat_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _threat_id_type threat_id;
  using _threat_level_type =
    float;
  _threat_level_type threat_level;
  using _category_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _category_type category;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _recommended_action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _recommended_action_type recommended_action;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__threat_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->threat_id = _arg;
    return *this;
  }
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
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__recommended_action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->recommended_action = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ai_assistant::msg::ThreatAssessment_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ai_assistant::msg::ThreatAssessment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ai_assistant::msg::ThreatAssessment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ai_assistant::msg::ThreatAssessment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::msg::ThreatAssessment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::msg::ThreatAssessment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ai_assistant::msg::ThreatAssessment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ai_assistant::msg::ThreatAssessment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ai_assistant::msg::ThreatAssessment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ai_assistant::msg::ThreatAssessment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ai_assistant__msg__ThreatAssessment
    std::shared_ptr<ros_ai_assistant::msg::ThreatAssessment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ai_assistant__msg__ThreatAssessment
    std::shared_ptr<ros_ai_assistant::msg::ThreatAssessment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThreatAssessment_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->threat_id != other.threat_id) {
      return false;
    }
    if (this->threat_level != other.threat_level) {
      return false;
    }
    if (this->category != other.category) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->recommended_action != other.recommended_action) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThreatAssessment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThreatAssessment_

// alias to use template instance with default allocator
using ThreatAssessment =
  ros_ai_assistant::msg::ThreatAssessment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__THREAT_ASSESSMENT__STRUCT_HPP_
