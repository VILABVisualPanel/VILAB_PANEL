// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mapname'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'systemmode'
// Member 'systemsignal'
// Member 'systemstate'
// Member 'systemhealth'
// Member 'lapcount'
#include "std_msgs/msg/detail/int8__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__SystemStatus __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__SystemStatus __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemStatus_
{
  using Type = SystemStatus_<ContainerAllocator>;

  explicit SystemStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mapname(_init),
    systemmode(_init),
    systemsignal(_init),
    systemstate(_init),
    systemhealth(_init),
    lapcount(_init)
  {
    (void)_init;
  }

  explicit SystemStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mapname(_alloc, _init),
    systemmode(_alloc, _init),
    systemsignal(_alloc, _init),
    systemstate(_alloc, _init),
    systemhealth(_alloc, _init),
    lapcount(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _mapname_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _mapname_type mapname;
  using _basella_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _basella_type basella;
  using _systemmode_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _systemmode_type systemmode;
  using _systemsignal_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _systemsignal_type systemsignal;
  using _systemstate_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _systemstate_type systemstate;
  using _systemhealth_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _systemhealth_type systemhealth;
  using _lapcount_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _lapcount_type lapcount;

  // setters for named parameter idiom
  Type & set__mapname(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->mapname = _arg;
    return *this;
  }
  Type & set__basella(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->basella = _arg;
    return *this;
  }
  Type & set__systemmode(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->systemmode = _arg;
    return *this;
  }
  Type & set__systemsignal(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->systemsignal = _arg;
    return *this;
  }
  Type & set__systemstate(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->systemstate = _arg;
    return *this;
  }
  Type & set__systemhealth(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->systemhealth = _arg;
    return *this;
  }
  Type & set__lapcount(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->lapcount = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::SystemStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::SystemStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::SystemStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::SystemStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::SystemStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::SystemStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::SystemStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::SystemStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::SystemStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::SystemStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__SystemStatus
    std::shared_ptr<drive_msgs::msg::SystemStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__SystemStatus
    std::shared_ptr<drive_msgs::msg::SystemStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemStatus_ & other) const
  {
    if (this->mapname != other.mapname) {
      return false;
    }
    if (this->basella != other.basella) {
      return false;
    }
    if (this->systemmode != other.systemmode) {
      return false;
    }
    if (this->systemsignal != other.systemsignal) {
      return false;
    }
    if (this->systemstate != other.systemstate) {
      return false;
    }
    if (this->systemhealth != other.systemhealth) {
      return false;
    }
    if (this->lapcount != other.lapcount) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemStatus_

// alias to use template instance with default allocator
using SystemStatus =
  drive_msgs::msg::SystemStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
