// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/UserInput.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__USER_INPUT__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__USER_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/user_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_UserInput_user_signal
{
public:
  explicit Init_UserInput_user_signal(::drive_msgs::msg::UserInput & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::UserInput user_signal(::drive_msgs::msg::UserInput::_user_signal_type arg)
  {
    msg_.user_signal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::UserInput msg_;
};

class Init_UserInput_user_mode
{
public:
  Init_UserInput_user_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserInput_user_signal user_mode(::drive_msgs::msg::UserInput::_user_mode_type arg)
  {
    msg_.user_mode = std::move(arg);
    return Init_UserInput_user_signal(msg_);
  }

private:
  ::drive_msgs::msg::UserInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::UserInput>()
{
  return drive_msgs::msg::builder::Init_UserInput_user_mode();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__USER_INPUT__BUILDER_HPP_
