// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/NavigationData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__NAVIGATION_DATA__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__NAVIGATION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/navigation_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigationData_plannedvelocity
{
public:
  explicit Init_NavigationData_plannedvelocity(::drive_msgs::msg::NavigationData & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::NavigationData plannedvelocity(::drive_msgs::msg::NavigationData::_plannedvelocity_type arg)
  {
    msg_.plannedvelocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::NavigationData msg_;
};

class Init_NavigationData_plannedkappa
{
public:
  explicit Init_NavigationData_plannedkappa(::drive_msgs::msg::NavigationData & msg)
  : msg_(msg)
  {}
  Init_NavigationData_plannedvelocity plannedkappa(::drive_msgs::msg::NavigationData::_plannedkappa_type arg)
  {
    msg_.plannedkappa = std::move(arg);
    return Init_NavigationData_plannedvelocity(msg_);
  }

private:
  ::drive_msgs::msg::NavigationData msg_;
};

class Init_NavigationData_plannedroute
{
public:
  explicit Init_NavigationData_plannedroute(::drive_msgs::msg::NavigationData & msg)
  : msg_(msg)
  {}
  Init_NavigationData_plannedkappa plannedroute(::drive_msgs::msg::NavigationData::_plannedroute_type arg)
  {
    msg_.plannedroute = std::move(arg);
    return Init_NavigationData_plannedkappa(msg_);
  }

private:
  ::drive_msgs::msg::NavigationData msg_;
};

class Init_NavigationData_currentlocation
{
public:
  Init_NavigationData_currentlocation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationData_plannedroute currentlocation(::drive_msgs::msg::NavigationData::_currentlocation_type arg)
  {
    msg_.currentlocation = std::move(arg);
    return Init_NavigationData_plannedroute(msg_);
  }

private:
  ::drive_msgs::msg::NavigationData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::NavigationData>()
{
  return drive_msgs::msg::builder::Init_NavigationData_currentlocation();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__NAVIGATION_DATA__BUILDER_HPP_
