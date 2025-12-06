// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ai_assistant:msg/ThreatAssessment.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__THREAT_ASSESSMENT__BUILDER_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__THREAT_ASSESSMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_ai_assistant/msg/detail/threat_assessment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_ai_assistant
{

namespace msg
{

namespace builder
{

class Init_ThreatAssessment_recommended_action
{
public:
  explicit Init_ThreatAssessment_recommended_action(::ros_ai_assistant::msg::ThreatAssessment & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::msg::ThreatAssessment recommended_action(::ros_ai_assistant::msg::ThreatAssessment::_recommended_action_type arg)
  {
    msg_.recommended_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::msg::ThreatAssessment msg_;
};

class Init_ThreatAssessment_description
{
public:
  explicit Init_ThreatAssessment_description(::ros_ai_assistant::msg::ThreatAssessment & msg)
  : msg_(msg)
  {}
  Init_ThreatAssessment_recommended_action description(::ros_ai_assistant::msg::ThreatAssessment::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_ThreatAssessment_recommended_action(msg_);
  }

private:
  ::ros_ai_assistant::msg::ThreatAssessment msg_;
};

class Init_ThreatAssessment_category
{
public:
  explicit Init_ThreatAssessment_category(::ros_ai_assistant::msg::ThreatAssessment & msg)
  : msg_(msg)
  {}
  Init_ThreatAssessment_description category(::ros_ai_assistant::msg::ThreatAssessment::_category_type arg)
  {
    msg_.category = std::move(arg);
    return Init_ThreatAssessment_description(msg_);
  }

private:
  ::ros_ai_assistant::msg::ThreatAssessment msg_;
};

class Init_ThreatAssessment_threat_level
{
public:
  explicit Init_ThreatAssessment_threat_level(::ros_ai_assistant::msg::ThreatAssessment & msg)
  : msg_(msg)
  {}
  Init_ThreatAssessment_category threat_level(::ros_ai_assistant::msg::ThreatAssessment::_threat_level_type arg)
  {
    msg_.threat_level = std::move(arg);
    return Init_ThreatAssessment_category(msg_);
  }

private:
  ::ros_ai_assistant::msg::ThreatAssessment msg_;
};

class Init_ThreatAssessment_threat_id
{
public:
  explicit Init_ThreatAssessment_threat_id(::ros_ai_assistant::msg::ThreatAssessment & msg)
  : msg_(msg)
  {}
  Init_ThreatAssessment_threat_level threat_id(::ros_ai_assistant::msg::ThreatAssessment::_threat_id_type arg)
  {
    msg_.threat_id = std::move(arg);
    return Init_ThreatAssessment_threat_level(msg_);
  }

private:
  ::ros_ai_assistant::msg::ThreatAssessment msg_;
};

class Init_ThreatAssessment_header
{
public:
  Init_ThreatAssessment_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThreatAssessment_threat_id header(::ros_ai_assistant::msg::ThreatAssessment::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ThreatAssessment_threat_id(msg_);
  }

private:
  ::ros_ai_assistant::msg::ThreatAssessment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::msg::ThreatAssessment>()
{
  return ros_ai_assistant::msg::builder::Init_ThreatAssessment_header();
}

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__THREAT_ASSESSMENT__BUILDER_HPP_
