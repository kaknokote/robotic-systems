// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_ai_assistant:srv/UserAuthentication.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__USER_AUTHENTICATION__BUILDER_HPP_
#define ROS_AI_ASSISTANT__SRV__DETAIL__USER_AUTHENTICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_ai_assistant/srv/detail/user_authentication__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_ai_assistant
{

namespace srv
{

namespace builder
{

class Init_UserAuthentication_Request_token
{
public:
  explicit Init_UserAuthentication_Request_token(::ros_ai_assistant::srv::UserAuthentication_Request & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::srv::UserAuthentication_Request token(::ros_ai_assistant::srv::UserAuthentication_Request::_token_type arg)
  {
    msg_.token = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::srv::UserAuthentication_Request msg_;
};

class Init_UserAuthentication_Request_user_id
{
public:
  Init_UserAuthentication_Request_user_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserAuthentication_Request_token user_id(::ros_ai_assistant::srv::UserAuthentication_Request::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return Init_UserAuthentication_Request_token(msg_);
  }

private:
  ::ros_ai_assistant::srv::UserAuthentication_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::srv::UserAuthentication_Request>()
{
  return ros_ai_assistant::srv::builder::Init_UserAuthentication_Request_user_id();
}

}  // namespace ros_ai_assistant


namespace ros_ai_assistant
{

namespace srv
{

namespace builder
{

class Init_UserAuthentication_Response_message
{
public:
  explicit Init_UserAuthentication_Response_message(::ros_ai_assistant::srv::UserAuthentication_Response & msg)
  : msg_(msg)
  {}
  ::ros_ai_assistant::srv::UserAuthentication_Response message(::ros_ai_assistant::srv::UserAuthentication_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_ai_assistant::srv::UserAuthentication_Response msg_;
};

class Init_UserAuthentication_Response_role
{
public:
  explicit Init_UserAuthentication_Response_role(::ros_ai_assistant::srv::UserAuthentication_Response & msg)
  : msg_(msg)
  {}
  Init_UserAuthentication_Response_message role(::ros_ai_assistant::srv::UserAuthentication_Response::_role_type arg)
  {
    msg_.role = std::move(arg);
    return Init_UserAuthentication_Response_message(msg_);
  }

private:
  ::ros_ai_assistant::srv::UserAuthentication_Response msg_;
};

class Init_UserAuthentication_Response_authorized
{
public:
  Init_UserAuthentication_Response_authorized()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserAuthentication_Response_role authorized(::ros_ai_assistant::srv::UserAuthentication_Response::_authorized_type arg)
  {
    msg_.authorized = std::move(arg);
    return Init_UserAuthentication_Response_role(msg_);
  }

private:
  ::ros_ai_assistant::srv::UserAuthentication_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_ai_assistant::srv::UserAuthentication_Response>()
{
  return ros_ai_assistant::srv::builder::Init_UserAuthentication_Response_authorized();
}

}  // namespace ros_ai_assistant

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__USER_AUTHENTICATION__BUILDER_HPP_
