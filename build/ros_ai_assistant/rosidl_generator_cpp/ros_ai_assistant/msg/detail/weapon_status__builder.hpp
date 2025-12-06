// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ai_assistant:msg/WeaponStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__WEAPON_STATUS__BUILDER_HPP_
#define ROS_AI_ASSISTANT__MSG__DETAIL__WEAPON_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_ai_assistant/msg/detail/weapon_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_ai_assistant
{

namespace msg
{

namespace builder
{

class Init_WeaponStatus_status_message
{
public:
  explicit Init_WeaponStatus_status_message(::ros_ai_assistant::msg::WeaponStatus & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::msg::WeaponStatus status_message(::ros_ai_assistant::msg::WeaponStatus::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::msg::WeaponStatus msg_;
};

class Init_WeaponStatus_ammo_level
{
public:
  explicit Init_WeaponStatus_ammo_level(::ros_ai_assistant::msg::WeaponStatus & msg)
  : msg_(msg)
  {}
  Init_WeaponStatus_status_message ammo_level(::ros_ai_assistant::msg::WeaponStatus::_ammo_level_type arg)
  {
    msg_.ammo_level = std::move(arg);
    return Init_WeaponStatus_status_message(msg_);
  }

private:
  ::ros_ai_assistant::msg::WeaponStatus msg_;
};

class Init_WeaponStatus_mode
{
public:
  explicit Init_WeaponStatus_mode(::ros_ai_assistant::msg::WeaponStatus & msg)
  : msg_(msg)
  {}
  Init_WeaponStatus_ammo_level mode(::ros_ai_assistant::msg::WeaponStatus::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_WeaponStatus_ammo_level(msg_);
  }

private:
  ::ros_ai_assistant::msg::WeaponStatus msg_;
};

class Init_WeaponStatus_armed
{
public:
  explicit Init_WeaponStatus_armed(::ros_ai_assistant::msg::WeaponStatus & msg)
  : msg_(msg)
  {}
  Init_WeaponStatus_mode armed(::ros_ai_assistant::msg::WeaponStatus::_armed_type arg)
  {
    msg_.armed = std::move(arg);
    return Init_WeaponStatus_mode(msg_);
  }

private:
  ::ros_ai_assistant::msg::WeaponStatus msg_;
};

class Init_WeaponStatus_header
{
public:
  Init_WeaponStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WeaponStatus_armed header(::ros_ai_assistant::msg::WeaponStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WeaponStatus_armed(msg_);
  }

private:
  ::ros_ai_assistant::msg::WeaponStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::msg::WeaponStatus>()
{
  return ros_ai_assistant::msg::builder::Init_WeaponStatus_header();
}

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__WEAPON_STATUS__BUILDER_HPP_
