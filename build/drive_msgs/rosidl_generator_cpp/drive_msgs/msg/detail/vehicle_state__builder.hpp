// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleState_position
{
public:
  explicit Init_VehicleState_position(::drive_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::VehicleState position(::drive_msgs::msg::VehicleState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_heading
{
public:
  explicit Init_VehicleState_heading(::drive_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_position heading(::drive_msgs::msg::VehicleState::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_VehicleState_position(msg_);
  }

private:
  ::drive_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_velocity
{
public:
  explicit Init_VehicleState_velocity(::drive_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_heading velocity(::drive_msgs::msg::VehicleState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_VehicleState_heading(msg_);
  }

private:
  ::drive_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_signal
{
public:
  explicit Init_VehicleState_signal(::drive_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_velocity signal(::drive_msgs::msg::VehicleState::_signal_type arg)
  {
    msg_.signal = std::move(arg);
    return Init_VehicleState_velocity(msg_);
  }

private:
  ::drive_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_gear
{
public:
  explicit Init_VehicleState_gear(::drive_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_signal gear(::drive_msgs::msg::VehicleState::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_VehicleState_signal(msg_);
  }

private:
  ::drive_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_mode
{
public:
  explicit Init_VehicleState_mode(::drive_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_gear mode(::drive_msgs::msg::VehicleState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_VehicleState_gear(msg_);
  }

private:
  ::drive_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_header
{
public:
  Init_VehicleState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleState_mode header(::drive_msgs::msg::VehicleState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleState_mode(msg_);
  }

private:
  ::drive_msgs::msg::VehicleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::VehicleState>()
{
  return drive_msgs::msg::builder::Init_VehicleState_header();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
