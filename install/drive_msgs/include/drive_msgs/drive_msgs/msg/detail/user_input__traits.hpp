// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_msgs:msg/UserInput.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__USER_INPUT__TRAITS_HPP_
#define DRIVE_MSGS__MSG__DETAIL__USER_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drive_msgs/msg/detail/user_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'user_mode'
// Member 'user_signal'
#include "std_msgs/msg/detail/int8__traits.hpp"

namespace drive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UserInput & msg,
  std::ostream & out)
{
  out << "{";
  // member: user_mode
  {
    out << "user_mode: ";
    to_flow_style_yaml(msg.user_mode, out);
    out << ", ";
  }

  // member: user_signal
  {
    out << "user_signal: ";
    to_flow_style_yaml(msg.user_signal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: user_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_mode:\n";
    to_block_style_yaml(msg.user_mode, out, indentation + 2);
  }

  // member: user_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_signal:\n";
    to_block_style_yaml(msg.user_signal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserInput & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace drive_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drive_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drive_msgs::msg::UserInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  drive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drive_msgs::msg::UserInput & msg)
{
  return drive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drive_msgs::msg::UserInput>()
{
  return "drive_msgs::msg::UserInput";
}

template<>
inline const char * name<drive_msgs::msg::UserInput>()
{
  return "drive_msgs/msg/UserInput";
}

template<>
struct has_fixed_size<drive_msgs::msg::UserInput>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Int8>::value> {};

template<>
struct has_bounded_size<drive_msgs::msg::UserInput>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Int8>::value> {};

template<>
struct is_message<drive_msgs::msg::UserInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_MSGS__MSG__DETAIL__USER_INPUT__TRAITS_HPP_
