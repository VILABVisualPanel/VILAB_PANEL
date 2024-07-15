// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/Actuator.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__ACTUATOR__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__ACTUATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/actuator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_Actuator_brake
{
public:
  explicit Init_Actuator_brake(::drive_msgs::msg::Actuator & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::Actuator brake(::drive_msgs::msg::Actuator::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::Actuator msg_;
};

class Init_Actuator_accel
{
public:
  explicit Init_Actuator_accel(::drive_msgs::msg::Actuator & msg)
  : msg_(msg)
  {}
  Init_Actuator_brake accel(::drive_msgs::msg::Actuator::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_Actuator_brake(msg_);
  }

private:
  ::drive_msgs::msg::Actuator msg_;
};

class Init_Actuator_steer
{
public:
  Init_Actuator_steer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Actuator_accel steer(::drive_msgs::msg::Actuator::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return Init_Actuator_accel(msg_);
  }

private:
  ::drive_msgs::msg::Actuator msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::Actuator>()
{
  return drive_msgs::msg::builder::Init_Actuator_steer();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__ACTUATOR__BUILDER_HPP_
