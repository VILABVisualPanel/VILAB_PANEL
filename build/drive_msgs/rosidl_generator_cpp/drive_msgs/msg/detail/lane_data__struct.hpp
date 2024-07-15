// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/LaneData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__LANE_DATA__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__LANE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'currentlane'
// Member 'neighborlane'
#include "drive_msgs/msg/detail/lane_let__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__LaneData __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__LaneData __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneData_
{
  using Type = LaneData_<ContainerAllocator>;

  explicit LaneData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : currentlane(_init),
    neighborlane(_init)
  {
    (void)_init;
  }

  explicit LaneData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : currentlane(_alloc, _init),
    neighborlane(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _currentlane_type =
    drive_msgs::msg::LaneLet_<ContainerAllocator>;
  _currentlane_type currentlane;
  using _neighborlane_type =
    drive_msgs::msg::LaneLet_<ContainerAllocator>;
  _neighborlane_type neighborlane;

  // setters for named parameter idiom
  Type & set__currentlane(
    const drive_msgs::msg::LaneLet_<ContainerAllocator> & _arg)
  {
    this->currentlane = _arg;
    return *this;
  }
  Type & set__neighborlane(
    const drive_msgs::msg::LaneLet_<ContainerAllocator> & _arg)
  {
    this->neighborlane = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::LaneData_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::LaneData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::LaneData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::LaneData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::LaneData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::LaneData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::LaneData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::LaneData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::LaneData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::LaneData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__LaneData
    std::shared_ptr<drive_msgs::msg::LaneData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__LaneData
    std::shared_ptr<drive_msgs::msg::LaneData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneData_ & other) const
  {
    if (this->currentlane != other.currentlane) {
      return false;
    }
    if (this->neighborlane != other.neighborlane) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneData_

// alias to use template instance with default allocator
using LaneData =
  drive_msgs::msg::LaneData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__LANE_DATA__STRUCT_HPP_
