// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'mode'
// Member 'signal'
#include "std_msgs/msg/detail/int8__struct.hpp"
// Member 'gear'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'velocity'
// Member 'heading'
#include "std_msgs/msg/detail/float32__struct.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__VehicleState __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__VehicleState __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleState_
{
  using Type = VehicleState_<ContainerAllocator>;

  explicit VehicleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    mode(_init),
    gear(_init),
    signal(_init),
    velocity(_init),
    heading(_init),
    position(_init)
  {
    (void)_init;
  }

  explicit VehicleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    mode(_alloc, _init),
    gear(_alloc, _init),
    signal(_alloc, _init),
    velocity(_alloc, _init),
    heading(_alloc, _init),
    position(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mode_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _mode_type mode;
  using _gear_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _gear_type gear;
  using _signal_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _signal_type signal;
  using _velocity_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _velocity_type velocity;
  using _heading_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _heading_type heading;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mode(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__gear(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__signal(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->signal = _arg;
    return *this;
  }
  Type & set__velocity(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__heading(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::VehicleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::VehicleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::VehicleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::VehicleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::VehicleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::VehicleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::VehicleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::VehicleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__VehicleState
    std::shared_ptr<drive_msgs::msg::VehicleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__VehicleState
    std::shared_ptr<drive_msgs::msg::VehicleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->signal != other.signal) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleState_

// alias to use template instance with default allocator
using VehicleState =
  drive_msgs::msg::VehicleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
