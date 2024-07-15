// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/CANInput.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__CAN_INPUT__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__CAN_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/can_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_CANInput_acc_cmd
{
public:
  explicit Init_CANInput_acc_cmd(::drive_msgs::msg::CANInput & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::CANInput acc_cmd(::drive_msgs::msg::CANInput::_acc_cmd_type arg)
  {
    msg_.acc_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::CANInput msg_;
};

class Init_CANInput_eps_cmd
{
public:
  explicit Init_CANInput_eps_cmd(::drive_msgs::msg::CANInput & msg)
  : msg_(msg)
  {}
  Init_CANInput_acc_cmd eps_cmd(::drive_msgs::msg::CANInput::_eps_cmd_type arg)
  {
    msg_.eps_cmd = std::move(arg);
    return Init_CANInput_acc_cmd(msg_);
  }

private:
  ::drive_msgs::msg::CANInput msg_;
};

class Init_CANInput_aliv_cnt
{
public:
  explicit Init_CANInput_aliv_cnt(::drive_msgs::msg::CANInput & msg)
  : msg_(msg)
  {}
  Init_CANInput_eps_cmd aliv_cnt(::drive_msgs::msg::CANInput::_aliv_cnt_type arg)
  {
    msg_.aliv_cnt = std::move(arg);
    return Init_CANInput_eps_cmd(msg_);
  }

private:
  ::drive_msgs::msg::CANInput msg_;
};

class Init_CANInput_aeb_decel_value
{
public:
  explicit Init_CANInput_aeb_decel_value(::drive_msgs::msg::CANInput & msg)
  : msg_(msg)
  {}
  Init_CANInput_aliv_cnt aeb_decel_value(::drive_msgs::msg::CANInput::_aeb_decel_value_type arg)
  {
    msg_.aeb_decel_value = std::move(arg);
    return Init_CANInput_aliv_cnt(msg_);
  }

private:
  ::drive_msgs::msg::CANInput msg_;
};

class Init_CANInput_turn_signal
{
public:
  explicit Init_CANInput_turn_signal(::drive_msgs::msg::CANInput & msg)
  : msg_(msg)
  {}
  Init_CANInput_aeb_decel_value turn_signal(::drive_msgs::msg::CANInput::_turn_signal_type arg)
  {
    msg_.turn_signal = std::move(arg);
    return Init_CANInput_aeb_decel_value(msg_);
  }

private:
  ::drive_msgs::msg::CANInput msg_;
};

class Init_CANInput_aeb_en
{
public:
  explicit Init_CANInput_aeb_en(::drive_msgs::msg::CANInput & msg)
  : msg_(msg)
  {}
  Init_CANInput_turn_signal aeb_en(::drive_msgs::msg::CANInput::_aeb_en_type arg)
  {
    msg_.aeb_en = std::move(arg);
    return Init_CANInput_turn_signal(msg_);
  }

private:
  ::drive_msgs::msg::CANInput msg_;
};

class Init_CANInput_acc_en
{
public:
  explicit Init_CANInput_acc_en(::drive_msgs::msg::CANInput & msg)
  : msg_(msg)
  {}
  Init_CANInput_aeb_en acc_en(::drive_msgs::msg::CANInput::_acc_en_type arg)
  {
    msg_.acc_en = std::move(arg);
    return Init_CANInput_aeb_en(msg_);
  }

private:
  ::drive_msgs::msg::CANInput msg_;
};

class Init_CANInput_eps_speed
{
public:
  explicit Init_CANInput_eps_speed(::drive_msgs::msg::CANInput & msg)
  : msg_(msg)
  {}
  Init_CANInput_acc_en eps_speed(::drive_msgs::msg::CANInput::_eps_speed_type arg)
  {
    msg_.eps_speed = std::move(arg);
    return Init_CANInput_acc_en(msg_);
  }

private:
  ::drive_msgs::msg::CANInput msg_;
};

class Init_CANInput_eps_override_ignore
{
public:
  explicit Init_CANInput_eps_override_ignore(::drive_msgs::msg::CANInput & msg)
  : msg_(msg)
  {}
  Init_CANInput_eps_speed eps_override_ignore(::drive_msgs::msg::CANInput::_eps_override_ignore_type arg)
  {
    msg_.eps_override_ignore = std::move(arg);
    return Init_CANInput_eps_speed(msg_);
  }

private:
  ::drive_msgs::msg::CANInput msg_;
};

class Init_CANInput_eps_en
{
public:
  Init_CANInput_eps_en()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CANInput_eps_override_ignore eps_en(::drive_msgs::msg::CANInput::_eps_en_type arg)
  {
    msg_.eps_en = std::move(arg);
    return Init_CANInput_eps_override_ignore(msg_);
  }

private:
  ::drive_msgs::msg::CANInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::CANInput>()
{
  return drive_msgs::msg::builder::Init_CANInput_eps_en();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__CAN_INPUT__BUILDER_HPP_
