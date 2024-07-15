// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/UserInput.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__USER_INPUT__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__USER_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'user_mode'
// Member 'user_signal'
#include "std_msgs/msg/detail/int8__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__UserInput __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__UserInput __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UserInput_
{
  using Type = UserInput_<ContainerAllocator>;

  explicit UserInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : user_mode(_init),
    user_signal(_init)
  {
    (void)_init;
  }

  explicit UserInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : user_mode(_alloc, _init),
    user_signal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _user_mode_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _user_mode_type user_mode;
  using _user_signal_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _user_signal_type user_signal;

  // setters for named parameter idiom
  Type & set__user_mode(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->user_mode = _arg;
    return *this;
  }
  Type & set__user_signal(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->user_signal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::UserInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::UserInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::UserInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::UserInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::UserInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::UserInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::UserInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::UserInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::UserInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::UserInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__UserInput
    std::shared_ptr<drive_msgs::msg::UserInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__UserInput
    std::shared_ptr<drive_msgs::msg::UserInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInput_ & other) const
  {
    if (this->user_mode != other.user_mode) {
      return false;
    }
    if (this->user_signal != other.user_signal) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInput_

// alias to use template instance with default allocator
using UserInput =
  drive_msgs::msg::UserInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__USER_INPUT__STRUCT_HPP_
