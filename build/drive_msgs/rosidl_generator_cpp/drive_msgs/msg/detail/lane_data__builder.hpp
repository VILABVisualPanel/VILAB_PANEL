// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/LaneData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__LANE_DATA__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__LANE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/lane_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneData_neighborlane
{
public:
  explicit Init_LaneData_neighborlane(::drive_msgs::msg::LaneData & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::LaneData neighborlane(::drive_msgs::msg::LaneData::_neighborlane_type arg)
  {
    msg_.neighborlane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::LaneData msg_;
};

class Init_LaneData_currentlane
{
public:
  Init_LaneData_currentlane()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneData_neighborlane currentlane(::drive_msgs::msg::LaneData::_currentlane_type arg)
  {
    msg_.currentlane = std::move(arg);
    return Init_LaneData_neighborlane(msg_);
  }

private:
  ::drive_msgs::msg::LaneData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::LaneData>()
{
  return drive_msgs::msg::builder::Init_LaneData_currentlane();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__LANE_DATA__BUILDER_HPP_
