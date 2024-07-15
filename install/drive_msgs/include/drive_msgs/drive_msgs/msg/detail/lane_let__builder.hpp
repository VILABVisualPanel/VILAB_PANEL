// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/LaneLet.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__LANE_LET__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__LANE_LET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/lane_let__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneLet_currentlane
{
public:
  explicit Init_LaneLet_currentlane(::drive_msgs::msg::LaneLet & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::LaneLet currentlane(::drive_msgs::msg::LaneLet::_currentlane_type arg)
  {
    msg_.currentlane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::LaneLet msg_;
};

class Init_LaneLet_successor
{
public:
  explicit Init_LaneLet_successor(::drive_msgs::msg::LaneLet & msg)
  : msg_(msg)
  {}
  Init_LaneLet_currentlane successor(::drive_msgs::msg::LaneLet::_successor_type arg)
  {
    msg_.successor = std::move(arg);
    return Init_LaneLet_currentlane(msg_);
  }

private:
  ::drive_msgs::msg::LaneLet msg_;
};

class Init_LaneLet_predecessor
{
public:
  explicit Init_LaneLet_predecessor(::drive_msgs::msg::LaneLet & msg)
  : msg_(msg)
  {}
  Init_LaneLet_successor predecessor(::drive_msgs::msg::LaneLet::_predecessor_type arg)
  {
    msg_.predecessor = std::move(arg);
    return Init_LaneLet_successor(msg_);
  }

private:
  ::drive_msgs::msg::LaneLet msg_;
};

class Init_LaneLet_rightneighbor
{
public:
  explicit Init_LaneLet_rightneighbor(::drive_msgs::msg::LaneLet & msg)
  : msg_(msg)
  {}
  Init_LaneLet_predecessor rightneighbor(::drive_msgs::msg::LaneLet::_rightneighbor_type arg)
  {
    msg_.rightneighbor = std::move(arg);
    return Init_LaneLet_predecessor(msg_);
  }

private:
  ::drive_msgs::msg::LaneLet msg_;
};

class Init_LaneLet_leftneighbor
{
public:
  explicit Init_LaneLet_leftneighbor(::drive_msgs::msg::LaneLet & msg)
  : msg_(msg)
  {}
  Init_LaneLet_rightneighbor leftneighbor(::drive_msgs::msg::LaneLet::_leftneighbor_type arg)
  {
    msg_.leftneighbor = std::move(arg);
    return Init_LaneLet_rightneighbor(msg_);
  }

private:
  ::drive_msgs::msg::LaneLet msg_;
};

class Init_LaneLet_id
{
public:
  Init_LaneLet_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneLet_leftneighbor id(::drive_msgs::msg::LaneLet::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LaneLet_leftneighbor(msg_);
  }

private:
  ::drive_msgs::msg::LaneLet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::LaneLet>()
{
  return drive_msgs::msg::builder::Init_LaneLet_id();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__LANE_LET__BUILDER_HPP_
