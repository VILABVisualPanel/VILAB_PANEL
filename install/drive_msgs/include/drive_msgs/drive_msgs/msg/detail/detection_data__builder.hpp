// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/DetectionData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__DETECTION_DATA__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__DETECTION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/detection_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectionData_laneposition3
{
public:
  explicit Init_DetectionData_laneposition3(::drive_msgs::msg::DetectionData & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::DetectionData laneposition3(::drive_msgs::msg::DetectionData::_laneposition3_type arg)
  {
    msg_.laneposition3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::DetectionData msg_;
};

class Init_DetectionData_laneposition2
{
public:
  explicit Init_DetectionData_laneposition2(::drive_msgs::msg::DetectionData & msg)
  : msg_(msg)
  {}
  Init_DetectionData_laneposition3 laneposition2(::drive_msgs::msg::DetectionData::_laneposition2_type arg)
  {
    msg_.laneposition2 = std::move(arg);
    return Init_DetectionData_laneposition3(msg_);
  }

private:
  ::drive_msgs::msg::DetectionData msg_;
};

class Init_DetectionData_laneposition1
{
public:
  explicit Init_DetectionData_laneposition1(::drive_msgs::msg::DetectionData & msg)
  : msg_(msg)
  {}
  Init_DetectionData_laneposition2 laneposition1(::drive_msgs::msg::DetectionData::_laneposition1_type arg)
  {
    msg_.laneposition1 = std::move(arg);
    return Init_DetectionData_laneposition2(msg_);
  }

private:
  ::drive_msgs::msg::DetectionData msg_;
};

class Init_DetectionData_laneposition0
{
public:
  explicit Init_DetectionData_laneposition0(::drive_msgs::msg::DetectionData & msg)
  : msg_(msg)
  {}
  Init_DetectionData_laneposition1 laneposition0(::drive_msgs::msg::DetectionData::_laneposition0_type arg)
  {
    msg_.laneposition0 = std::move(arg);
    return Init_DetectionData_laneposition1(msg_);
  }

private:
  ::drive_msgs::msg::DetectionData msg_;
};

class Init_DetectionData_objects
{
public:
  Init_DetectionData_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionData_laneposition0 objects(::drive_msgs::msg::DetectionData::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return Init_DetectionData_laneposition0(msg_);
  }

private:
  ::drive_msgs::msg::DetectionData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::DetectionData>()
{
  return drive_msgs::msg::builder::Init_DetectionData_objects();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__DETECTION_DATA__BUILDER_HPP_
