// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/CANInput.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__CAN_INPUT__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__CAN_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'eps_en'
// Member 'eps_override_ignore'
// Member 'acc_en'
// Member 'aeb_en'
// Member 'turn_signal'
// Member 'aliv_cnt'
#include "std_msgs/msg/detail/int8__struct.hpp"
// Member 'eps_speed'
// Member 'aeb_decel_value'
// Member 'eps_cmd'
// Member 'acc_cmd'
#include "std_msgs/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__CANInput __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__CANInput __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CANInput_
{
  using Type = CANInput_<ContainerAllocator>;

  explicit CANInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : eps_en(_init),
    eps_override_ignore(_init),
    eps_speed(_init),
    acc_en(_init),
    aeb_en(_init),
    turn_signal(_init),
    aeb_decel_value(_init),
    aliv_cnt(_init),
    eps_cmd(_init),
    acc_cmd(_init)
  {
    (void)_init;
  }

  explicit CANInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : eps_en(_alloc, _init),
    eps_override_ignore(_alloc, _init),
    eps_speed(_alloc, _init),
    acc_en(_alloc, _init),
    aeb_en(_alloc, _init),
    turn_signal(_alloc, _init),
    aeb_decel_value(_alloc, _init),
    aliv_cnt(_alloc, _init),
    eps_cmd(_alloc, _init),
    acc_cmd(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _eps_en_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _eps_en_type eps_en;
  using _eps_override_ignore_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _eps_override_ignore_type eps_override_ignore;
  using _eps_speed_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _eps_speed_type eps_speed;
  using _acc_en_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _acc_en_type acc_en;
  using _aeb_en_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _aeb_en_type aeb_en;
  using _turn_signal_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _turn_signal_type turn_signal;
  using _aeb_decel_value_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _aeb_decel_value_type aeb_decel_value;
  using _aliv_cnt_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _aliv_cnt_type aliv_cnt;
  using _eps_cmd_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _eps_cmd_type eps_cmd;
  using _acc_cmd_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _acc_cmd_type acc_cmd;

  // setters for named parameter idiom
  Type & set__eps_en(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->eps_en = _arg;
    return *this;
  }
  Type & set__eps_override_ignore(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->eps_override_ignore = _arg;
    return *this;
  }
  Type & set__eps_speed(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->eps_speed = _arg;
    return *this;
  }
  Type & set__acc_en(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->acc_en = _arg;
    return *this;
  }
  Type & set__aeb_en(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->aeb_en = _arg;
    return *this;
  }
  Type & set__turn_signal(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->turn_signal = _arg;
    return *this;
  }
  Type & set__aeb_decel_value(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->aeb_decel_value = _arg;
    return *this;
  }
  Type & set__aliv_cnt(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->aliv_cnt = _arg;
    return *this;
  }
  Type & set__eps_cmd(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->eps_cmd = _arg;
    return *this;
  }
  Type & set__acc_cmd(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->acc_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::CANInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::CANInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::CANInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::CANInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::CANInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::CANInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::CANInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::CANInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::CANInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::CANInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__CANInput
    std::shared_ptr<drive_msgs::msg::CANInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__CANInput
    std::shared_ptr<drive_msgs::msg::CANInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CANInput_ & other) const
  {
    if (this->eps_en != other.eps_en) {
      return false;
    }
    if (this->eps_override_ignore != other.eps_override_ignore) {
      return false;
    }
    if (this->eps_speed != other.eps_speed) {
      return false;
    }
    if (this->acc_en != other.acc_en) {
      return false;
    }
    if (this->aeb_en != other.aeb_en) {
      return false;
    }
    if (this->turn_signal != other.turn_signal) {
      return false;
    }
    if (this->aeb_decel_value != other.aeb_decel_value) {
      return false;
    }
    if (this->aliv_cnt != other.aliv_cnt) {
      return false;
    }
    if (this->eps_cmd != other.eps_cmd) {
      return false;
    }
    if (this->acc_cmd != other.acc_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const CANInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CANInput_

// alias to use template instance with default allocator
using CANInput =
  drive_msgs::msg::CANInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__CAN_INPUT__STRUCT_HPP_
