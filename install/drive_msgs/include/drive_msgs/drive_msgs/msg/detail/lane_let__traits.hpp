// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_msgs:msg/LaneLet.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__LANE_LET__TRAITS_HPP_
#define DRIVE_MSGS__MSG__DETAIL__LANE_LET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drive_msgs/msg/detail/lane_let__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
// Member 'leftneighbor'
// Member 'rightneighbor'
// Member 'predecessor'
// Member 'successor'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace drive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneLet & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: leftneighbor
  {
    out << "leftneighbor: ";
    to_flow_style_yaml(msg.leftneighbor, out);
    out << ", ";
  }

  // member: rightneighbor
  {
    out << "rightneighbor: ";
    to_flow_style_yaml(msg.rightneighbor, out);
    out << ", ";
  }

  // member: predecessor
  {
    out << "predecessor: ";
    to_flow_style_yaml(msg.predecessor, out);
    out << ", ";
  }

  // member: successor
  {
    out << "successor: ";
    to_flow_style_yaml(msg.successor, out);
    out << ", ";
  }

  // member: currentlane
  {
    out << "currentlane: ";
    rosidl_generator_traits::value_to_yaml(msg.currentlane, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneLet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: leftneighbor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leftneighbor:\n";
    to_block_style_yaml(msg.leftneighbor, out, indentation + 2);
  }

  // member: rightneighbor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rightneighbor:\n";
    to_block_style_yaml(msg.rightneighbor, out, indentation + 2);
  }

  // member: predecessor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "predecessor:\n";
    to_block_style_yaml(msg.predecessor, out, indentation + 2);
  }

  // member: successor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "successor:\n";
    to_block_style_yaml(msg.successor, out, indentation + 2);
  }

  // member: currentlane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "currentlane: ";
    rosidl_generator_traits::value_to_yaml(msg.currentlane, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneLet & msg, bool use_flow_style = false)
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
  const drive_msgs::msg::LaneLet & msg,
  std::ostream & out, size_t indentation = 0)
{
  drive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drive_msgs::msg::LaneLet & msg)
{
  return drive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drive_msgs::msg::LaneLet>()
{
  return "drive_msgs::msg::LaneLet";
}

template<>
inline const char * name<drive_msgs::msg::LaneLet>()
{
  return "drive_msgs/msg/LaneLet";
}

template<>
struct has_fixed_size<drive_msgs::msg::LaneLet>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<drive_msgs::msg::LaneLet>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<drive_msgs::msg::LaneLet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_MSGS__MSG__DETAIL__LANE_LET__TRAITS_HPP_
