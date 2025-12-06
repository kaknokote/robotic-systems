// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ai_assistant:srv/WeaponControl.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__WEAPON_CONTROL__BUILDER_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__WEAPON_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_ai_assistant/srv/detail/weapon_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_ai_assistant
{

namespace srv
{

namespace builder
{

class Init_WeaponControl_Request_force_level
{
public:
  explicit Init_WeaponControl_Request_force_level(::ros_ai_assistant::srv::WeaponControl_Request & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::srv::WeaponControl_Request force_level(::ros_ai_assistant::srv::WeaponControl_Request::_force_level_type arg)
  {
    msg_.force_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::srv::WeaponControl_Request msg_;
};

class Init_WeaponControl_Request_target_id
{
public:
  explicit Init_WeaponControl_Request_target_id(::ros_ai_assistant::srv::WeaponControl_Request & msg)
  : msg_(msg)
  {}
  Init_WeaponControl_Request_force_level target_id(::ros_ai_assistant::srv::WeaponControl_Request::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_WeaponControl_Request_force_level(msg_);
  }

private:
  ::ros_ai_assistant::srv::WeaponControl_Request msg_;
};

class Init_WeaponControl_Request_command
{
public:
  Init_WeaponControl_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WeaponControl_Request_target_id command(::ros_ai_assistant::srv::WeaponControl_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_WeaponControl_Request_target_id(msg_);
  }

private:
  ::ros_ai_assistant::srv::WeaponControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::srv::WeaponControl_Request>()
{
  return ros_ai_assistant::srv::builder::Init_WeaponControl_Request_command();
}

}  // namespace ros_ai_assistant


namespace ros_ai_assistant
{

namespace srv
{

namespace builder
{

class Init_WeaponControl_Response_message
{
public:
  explicit Init_WeaponControl_Response_message(::ros_ai_assistant::srv::WeaponControl_Response & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::srv::WeaponControl_Response message(::ros_ai_assistant::srv::WeaponControl_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::srv::WeaponControl_Response msg_;
};

class Init_WeaponControl_Response_success
{
public:
  Init_WeaponControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WeaponControl_Response_message success(::ros_ai_assistant::srv::WeaponControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_WeaponControl_Response_message(msg_);
  }

private:
  ::ros_ai_assistant::srv::WeaponControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::srv::WeaponControl_Response>()
{
  return ros_ai_assistant::srv::builder::Init_WeaponControl_Response_success();
}

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__WEAPON_CONTROL__BUILDER_HPP_
