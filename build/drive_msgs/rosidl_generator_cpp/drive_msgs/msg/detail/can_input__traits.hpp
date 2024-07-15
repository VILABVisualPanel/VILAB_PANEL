// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_msgs:msg/CANInput.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__CAN_INPUT__TRAITS_HPP_
#define DRIVE_MSGS__MSG__DETAIL__CAN_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drive_msgs/msg/detail/can_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'eps_en'
// Member 'eps_override_ignore'
// Member 'acc_en'
// Member 'aeb_en'
// Member 'turn_signal'
// Member 'aliv_cnt'
#include "std_msgs/msg/detail/int8__traits.hpp"
// Member 'eps_speed'
// Member 'aeb_decel_value'
// Member 'eps_cmd'
// Member 'acc_cmd'
#include "std_msgs/msg/detail/float32__traits.hpp"

namespace drive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CANInput & msg,
  std::ostream & out)
{
  out << "{";
  // member: eps_en
  {
    out << "eps_en: ";
    to_flow_style_yaml(msg.eps_en, out);
    out << ", ";
  }

  // member: eps_override_ignore
  {
    out << "eps_override_ignore: ";
    to_flow_style_yaml(msg.eps_override_ignore, out);
    out << ", ";
  }

  // member: eps_speed
  {
    out << "eps_speed: ";
    to_flow_style_yaml(msg.eps_speed, out);
    out << ", ";
  }

  // member: acc_en
  {
    out << "acc_en: ";
    to_flow_style_yaml(msg.acc_en, out);
    out << ", ";
  }

  // member: aeb_en
  {
    out << "aeb_en: ";
    to_flow_style_yaml(msg.aeb_en, out);
    out << ", ";
  }

  // member: turn_signal
  {
    out << "turn_signal: ";
    to_flow_style_yaml(msg.turn_signal, out);
    out << ", ";
  }

  // member: aeb_decel_value
  {
    out << "aeb_decel_value: ";
    to_flow_style_yaml(msg.aeb_decel_value, out);
    out << ", ";
  }

  // member: aliv_cnt
  {
    out << "aliv_cnt: ";
    to_flow_style_yaml(msg.aliv_cnt, out);
    out << ", ";
  }

  // member: eps_cmd
  {
    out << "eps_cmd: ";
    to_flow_style_yaml(msg.eps_cmd, out);
    out << ", ";
  }

  // member: acc_cmd
  {
    out << "acc_cmd: ";
    to_flow_style_yaml(msg.acc_cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CANInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: eps_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_en:\n";
    to_block_style_yaml(msg.eps_en, out, indentation + 2);
  }

  // member: eps_override_ignore
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_override_ignore:\n";
    to_block_style_yaml(msg.eps_override_ignore, out, indentation + 2);
  }

  // member: eps_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_speed:\n";
    to_block_style_yaml(msg.eps_speed, out, indentation + 2);
  }

  // member: acc_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_en:\n";
    to_block_style_yaml(msg.acc_en, out, indentation + 2);
  }

  // member: aeb_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aeb_en:\n";
    to_block_style_yaml(msg.aeb_en, out, indentation + 2);
  }

  // member: turn_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_signal:\n";
    to_block_style_yaml(msg.turn_signal, out, indentation + 2);
  }

  // member: aeb_decel_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aeb_decel_value:\n";
    to_block_style_yaml(msg.aeb_decel_value, out, indentation + 2);
  }

  // member: aliv_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aliv_cnt:\n";
    to_block_style_yaml(msg.aliv_cnt, out, indentation + 2);
  }

  // member: eps_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_cmd:\n";
    to_block_style_yaml(msg.eps_cmd, out, indentation + 2);
  }

  // member: acc_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_cmd:\n";
    to_block_style_yaml(msg.acc_cmd, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CANInput & msg, bool use_flow_style = false)
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
  const drive_msgs::msg::CANInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  drive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drive_msgs::msg::CANInput & msg)
{
  return drive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drive_msgs::msg::CANInput>()
{
  return "drive_msgs::msg::CANInput";
}

template<>
inline const char * name<drive_msgs::msg::CANInput>()
{
  return "drive_msgs/msg/CANInput";
}

template<>
struct has_fixed_size<drive_msgs::msg::CANInput>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32>::value && has_fixed_size<std_msgs::msg::Int8>::value> {};

template<>
struct has_bounded_size<drive_msgs::msg::CANInput>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32>::value && has_bounded_size<std_msgs::msg::Int8>::value> {};

template<>
struct is_message<drive_msgs::msg::CANInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_MSGS__MSG__DETAIL__CAN_INPUT__TRAITS_HPP_
