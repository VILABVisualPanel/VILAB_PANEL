// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/DetectionData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__DETECTION_DATA__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__DETECTION_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'objects'
#include "drive_msgs/msg/detail/object_info__struct.hpp"
// Member 'laneposition0'
// Member 'laneposition1'
// Member 'laneposition2'
// Member 'laneposition3'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__DetectionData __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__DetectionData __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectionData_
{
  using Type = DetectionData_<ContainerAllocator>;

  explicit DetectionData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DetectionData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _objects_type =
    std::vector<drive_msgs::msg::ObjectInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<drive_msgs::msg::ObjectInfo_<ContainerAllocator>>>;
  _objects_type objects;
  using _laneposition0_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _laneposition0_type laneposition0;
  using _laneposition1_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _laneposition1_type laneposition1;
  using _laneposition2_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _laneposition2_type laneposition2;
  using _laneposition3_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _laneposition3_type laneposition3;

  // setters for named parameter idiom
  Type & set__objects(
    const std::vector<drive_msgs::msg::ObjectInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<drive_msgs::msg::ObjectInfo_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }
  Type & set__laneposition0(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->laneposition0 = _arg;
    return *this;
  }
  Type & set__laneposition1(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->laneposition1 = _arg;
    return *this;
  }
  Type & set__laneposition2(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->laneposition2 = _arg;
    return *this;
  }
  Type & set__laneposition3(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->laneposition3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::DetectionData_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::DetectionData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::DetectionData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::DetectionData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::DetectionData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::DetectionData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::DetectionData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::DetectionData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::DetectionData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::DetectionData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__DetectionData
    std::shared_ptr<drive_msgs::msg::DetectionData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__DetectionData
    std::shared_ptr<drive_msgs::msg::DetectionData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectionData_ & other) const
  {
    if (this->objects != other.objects) {
      return false;
    }
    if (this->laneposition0 != other.laneposition0) {
      return false;
    }
    if (this->laneposition1 != other.laneposition1) {
      return false;
    }
    if (this->laneposition2 != other.laneposition2) {
      return false;
    }
    if (this->laneposition3 != other.laneposition3) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectionData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectionData_

// alias to use template instance with default allocator
using DetectionData =
  drive_msgs::msg::DetectionData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__DETECTION_DATA__STRUCT_HPP_
