// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/NavigationData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__NAVIGATION_DATA__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__NAVIGATION_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'currentlocation'
// Member 'plannedroute'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'plannedvelocity'
#include "std_msgs/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__NavigationData __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__NavigationData __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationData_
{
  using Type = NavigationData_<ContainerAllocator>;

  explicit NavigationData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : currentlocation(_init),
    plannedvelocity(_init)
  {
    (void)_init;
  }

  explicit NavigationData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : currentlocation(_alloc, _init),
    plannedvelocity(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _currentlocation_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _currentlocation_type currentlocation;
  using _plannedroute_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _plannedroute_type plannedroute;
  using _plannedkappa_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _plannedkappa_type plannedkappa;
  using _plannedvelocity_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _plannedvelocity_type plannedvelocity;

  // setters for named parameter idiom
  Type & set__currentlocation(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->currentlocation = _arg;
    return *this;
  }
  Type & set__plannedroute(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->plannedroute = _arg;
    return *this;
  }
  Type & set__plannedkappa(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->plannedkappa = _arg;
    return *this;
  }
  Type & set__plannedvelocity(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->plannedvelocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::NavigationData_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::NavigationData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::NavigationData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::NavigationData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::NavigationData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::NavigationData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::NavigationData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::NavigationData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::NavigationData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::NavigationData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__NavigationData
    std::shared_ptr<drive_msgs::msg::NavigationData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__NavigationData
    std::shared_ptr<drive_msgs::msg::NavigationData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationData_ & other) const
  {
    if (this->currentlocation != other.currentlocation) {
      return false;
    }
    if (this->plannedroute != other.plannedroute) {
      return false;
    }
    if (this->plannedkappa != other.plannedkappa) {
      return false;
    }
    if (this->plannedvelocity != other.plannedvelocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationData_

// alias to use template instance with default allocator
using NavigationData =
  drive_msgs::msg::NavigationData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__NAVIGATION_DATA__STRUCT_HPP_
