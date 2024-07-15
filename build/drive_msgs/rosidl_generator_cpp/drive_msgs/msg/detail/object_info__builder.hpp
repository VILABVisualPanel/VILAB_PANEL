// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/ObjectInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__OBJECT_INFO__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__OBJECT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/object_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectInfo_velocity
{
public:
  explicit Init_ObjectInfo_velocity(::drive_msgs::msg::ObjectInfo & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::ObjectInfo velocity(::drive_msgs::msg::ObjectInfo::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::ObjectInfo msg_;
};

class Init_ObjectInfo_heading
{
public:
  explicit Init_ObjectInfo_heading(::drive_msgs::msg::ObjectInfo & msg)
  : msg_(msg)
  {}
  Init_ObjectInfo_velocity heading(::drive_msgs::msg::ObjectInfo::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_ObjectInfo_velocity(msg_);
  }

private:
  ::drive_msgs::msg::ObjectInfo msg_;
};

class Init_ObjectInfo_position
{
public:
  explicit Init_ObjectInfo_position(::drive_msgs::msg::ObjectInfo & msg)
  : msg_(msg)
  {}
  Init_ObjectInfo_heading position(::drive_msgs::msg::ObjectInfo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ObjectInfo_heading(msg_);
  }

private:
  ::drive_msgs::msg::ObjectInfo msg_;
};

class Init_ObjectInfo_type
{
public:
  Init_ObjectInfo_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectInfo_position type(::drive_msgs::msg::ObjectInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ObjectInfo_position(msg_);
  }

private:
  ::drive_msgs::msg::ObjectInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::ObjectInfo>()
{
  return drive_msgs::msg::builder::Init_ObjectInfo_type();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__OBJECT_INFO__BUILDER_HPP_
