// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_msgs:msg/LaneData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__LANE_DATA__TRAITS_HPP_
#define DRIVE_MSGS__MSG__DETAIL__LANE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drive_msgs/msg/detail/lane_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'currentlane'
// Member 'neighborlane'
#include "drive_msgs/msg/detail/lane_let__traits.hpp"

namespace drive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneData & msg,
  std::ostream & out)
{
  out << "{";
  // member: currentlane
  {
    out << "currentlane: ";
    to_flow_style_yaml(msg.currentlane, out);
    out << ", ";
  }

  // member: neighborlane
  {
    out << "neighborlane: ";
    to_flow_style_yaml(msg.neighborlane, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: currentlane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "currentlane:\n";
    to_block_style_yaml(msg.currentlane, out, indentation + 2);
  }

  // member: neighborlane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "neighborlane:\n";
    to_block_style_yaml(msg.neighborlane, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneData & msg, bool use_flow_style = false)
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
  const drive_msgs::msg::LaneData & msg,
  std::ostream & out, size_t indentation = 0)
{
  drive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drive_msgs::msg::LaneData & msg)
{
  return drive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drive_msgs::msg::LaneData>()
{
  return "drive_msgs::msg::LaneData";
}

template<>
inline const char * name<drive_msgs::msg::LaneData>()
{
  return "drive_msgs/msg/LaneData";
}

template<>
struct has_fixed_size<drive_msgs::msg::LaneData>
  : std::integral_constant<bool, has_fixed_size<drive_msgs::msg::LaneLet>::value> {};

template<>
struct has_bounded_size<drive_msgs::msg::LaneData>
  : std::integral_constant<bool, has_bounded_size<drive_msgs::msg::LaneLet>::value> {};

template<>
struct is_message<drive_msgs::msg::LaneData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_MSGS__MSG__DETAIL__LANE_DATA__TRAITS_HPP_
