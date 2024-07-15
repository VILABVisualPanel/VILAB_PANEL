// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorData_heading
{
public:
  explicit Init_SensorData_heading(::drive_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::SensorData heading(::drive_msgs::msg::SensorData::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::SensorData msg_;
};

class Init_SensorData_position
{
public:
  explicit Init_SensorData_position(::drive_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_heading position(::drive_msgs::msg::SensorData::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SensorData_heading(msg_);
  }

private:
  ::drive_msgs::msg::SensorData msg_;
};

class Init_SensorData_image
{
public:
  Init_SensorData_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_position image(::drive_msgs::msg::SensorData::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_SensorData_position(msg_);
  }

private:
  ::drive_msgs::msg::SensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::SensorData>()
{
  return drive_msgs::msg::builder::Init_SensorData_image();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
