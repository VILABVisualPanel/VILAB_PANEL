// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/Actuator.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__ACTUATOR__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__ACTUATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'steer'
// Member 'accel'
// Member 'brake'
#include "std_msgs/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__Actuator __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__Actuator __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Actuator_
{
  using Type = Actuator_<ContainerAllocator>;

  explicit Actuator_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : steer(_init),
    accel(_init),
    brake(_init)
  {
    (void)_init;
  }

  explicit Actuator_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : steer(_alloc, _init),
    accel(_alloc, _init),
    brake(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _steer_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _steer_type steer;
  using _accel_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _accel_type accel;
  using _brake_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _brake_type brake;

  // setters for named parameter idiom
  Type & set__steer(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->steer = _arg;
    return *this;
  }
  Type & set__accel(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__brake(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->brake = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::Actuator_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::Actuator_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::Actuator_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::Actuator_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::Actuator_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::Actuator_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::Actuator_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::Actuator_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::Actuator_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::Actuator_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__Actuator
    std::shared_ptr<drive_msgs::msg::Actuator_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__Actuator
    std::shared_ptr<drive_msgs::msg::Actuator_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Actuator_ & other) const
  {
    if (this->steer != other.steer) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    return true;
  }
  bool operator!=(const Actuator_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Actuator_

// alias to use template instance with default allocator
using Actuator =
  drive_msgs::msg::Actuator_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__ACTUATOR__STRUCT_HPP_
