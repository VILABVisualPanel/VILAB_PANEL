// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/LaneLet.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__LANE_LET__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__LANE_LET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
// Member 'leftneighbor'
// Member 'rightneighbor'
// Member 'predecessor'
// Member 'successor'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__LaneLet __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__LaneLet __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneLet_
{
  using Type = LaneLet_<ContainerAllocator>;

  explicit LaneLet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    leftneighbor(_init),
    rightneighbor(_init),
    predecessor(_init),
    successor(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->currentlane = 0;
    }
  }

  explicit LaneLet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    leftneighbor(_alloc, _init),
    rightneighbor(_alloc, _init),
    predecessor(_alloc, _init),
    successor(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->currentlane = 0;
    }
  }

  // field types and members
  using _id_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _id_type id;
  using _leftneighbor_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _leftneighbor_type leftneighbor;
  using _rightneighbor_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _rightneighbor_type rightneighbor;
  using _predecessor_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _predecessor_type predecessor;
  using _successor_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _successor_type successor;
  using _currentlane_type =
    int8_t;
  _currentlane_type currentlane;

  // setters for named parameter idiom
  Type & set__id(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__leftneighbor(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->leftneighbor = _arg;
    return *this;
  }
  Type & set__rightneighbor(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->rightneighbor = _arg;
    return *this;
  }
  Type & set__predecessor(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->predecessor = _arg;
    return *this;
  }
  Type & set__successor(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->successor = _arg;
    return *this;
  }
  Type & set__currentlane(
    const int8_t & _arg)
  {
    this->currentlane = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::LaneLet_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::LaneLet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::LaneLet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::LaneLet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::LaneLet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::LaneLet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::LaneLet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::LaneLet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::LaneLet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::LaneLet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__LaneLet
    std::shared_ptr<drive_msgs::msg::LaneLet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__LaneLet
    std::shared_ptr<drive_msgs::msg::LaneLet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneLet_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->leftneighbor != other.leftneighbor) {
      return false;
    }
    if (this->rightneighbor != other.rightneighbor) {
      return false;
    }
    if (this->predecessor != other.predecessor) {
      return false;
    }
    if (this->successor != other.successor) {
      return false;
    }
    if (this->currentlane != other.currentlane) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneLet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneLet_

// alias to use template instance with default allocator
using LaneLet =
  drive_msgs::msg::LaneLet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__LANE_LET__STRUCT_HPP_
