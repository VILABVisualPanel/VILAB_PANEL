// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemStatus_lapcount
{
public:
  explicit Init_SystemStatus_lapcount(::drive_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::SystemStatus lapcount(::drive_msgs::msg::SystemStatus::_lapcount_type arg)
  {
    msg_.lapcount = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_systemhealth
{
public:
  explicit Init_SystemStatus_systemhealth(::drive_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_lapcount systemhealth(::drive_msgs::msg::SystemStatus::_systemhealth_type arg)
  {
    msg_.systemhealth = std::move(arg);
    return Init_SystemStatus_lapcount(msg_);
  }

private:
  ::drive_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_systemstate
{
public:
  explicit Init_SystemStatus_systemstate(::drive_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_systemhealth systemstate(::drive_msgs::msg::SystemStatus::_systemstate_type arg)
  {
    msg_.systemstate = std::move(arg);
    return Init_SystemStatus_systemhealth(msg_);
  }

private:
  ::drive_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_systemsignal
{
public:
  explicit Init_SystemStatus_systemsignal(::drive_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_systemstate systemsignal(::drive_msgs::msg::SystemStatus::_systemsignal_type arg)
  {
    msg_.systemsignal = std::move(arg);
    return Init_SystemStatus_systemstate(msg_);
  }

private:
  ::drive_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_systemmode
{
public:
  explicit Init_SystemStatus_systemmode(::drive_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_systemsignal systemmode(::drive_msgs::msg::SystemStatus::_systemmode_type arg)
  {
    msg_.systemmode = std::move(arg);
    return Init_SystemStatus_systemsignal(msg_);
  }

private:
  ::drive_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_basella
{
public:
  explicit Init_SystemStatus_basella(::drive_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_systemmode basella(::drive_msgs::msg::SystemStatus::_basella_type arg)
  {
    msg_.basella = std::move(arg);
    return Init_SystemStatus_systemmode(msg_);
  }

private:
  ::drive_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_mapname
{
public:
  Init_SystemStatus_mapname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_basella mapname(::drive_msgs::msg::SystemStatus::_mapname_type arg)
  {
    msg_.mapname = std::move(arg);
    return Init_SystemStatus_basella(msg_);
  }

private:
  ::drive_msgs::msg::SystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::SystemStatus>()
{
  return drive_msgs::msg::builder::Init_SystemStatus_mapname();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
