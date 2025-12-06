// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ai_assistant:srv/ThreatAssessment.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__THREAT_ASSESSMENT__BUILDER_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__THREAT_ASSESSMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_ai_assistant/srv/detail/threat_assessment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_ai_assistant
{

namespace srv
{

namespace builder
{

class Init_ThreatAssessment_Request_scenario_description
{
public:
  Init_ThreatAssessment_Request_scenario_description()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_ai_assistant::srv::ThreatAssessment_Request scenario_description(::ros_ai_assistant::srv::ThreatAssessment_Request::_scenario_description_type arg)
  {
    msg_.scenario_description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::srv::ThreatAssessment_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::srv::ThreatAssessment_Request>()
{
  return ros_ai_assistant::srv::builder::Init_ThreatAssessment_Request_scenario_description();
}

}  // namespace ros_ai_assistant


namespace ros_ai_assistant
{

namespace srv
{

namespace builder
{

class Init_ThreatAssessment_Response_recommendation
{
public:
  explicit Init_ThreatAssessment_Response_recommendation(::ros_ai_assistant::srv::ThreatAssessment_Response & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::srv::ThreatAssessment_Response recommendation(::ros_ai_assistant::srv::ThreatAssessment_Response::_recommendation_type arg)
  {
    msg_.recommendation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::srv::ThreatAssessment_Response msg_;
};

class Init_ThreatAssessment_Response_category
{
public:
  explicit Init_ThreatAssessment_Response_category(::ros_ai_assistant::srv::ThreatAssessment_Response & msg)
  : msg_(msg)
  {}
  Init_ThreatAssessment_Response_recommendation category(::ros_ai_assistant::srv::ThreatAssessment_Response::_category_type arg)
  {
    msg_.category = std::move(arg);
    return Init_ThreatAssessment_Response_recommendation(msg_);
  }

private:
  ::ros_ai_assistant::srv::ThreatAssessment_Response msg_;
};

class Init_ThreatAssessment_Response_threat_level
{
public:
  Init_ThreatAssessment_Response_threat_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThreatAssessment_Response_category threat_level(::ros_ai_assistant::srv::ThreatAssessment_Response::_threat_level_type arg)
  {
    msg_.threat_level = std::move(arg);
    return Init_ThreatAssessment_Response_category(msg_);
  }

private:
  ::ros_ai_assistant::srv::ThreatAssessment_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::srv::ThreatAssessment_Response>()
{
  return ros_ai_assistant::srv::builder::Init_ThreatAssessment_Response_threat_level();
}

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__THREAT_ASSESSMENT__BUILDER_HPP_
