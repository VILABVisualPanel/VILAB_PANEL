// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_msgs:msg/NavigationData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__NAVIGATION_DATA__TRAITS_HPP_
#define DRIVE_MSGS__MSG__DETAIL__NAVIGATION_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drive_msgs/msg/detail/navigation_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'currentlocation'
// Member 'plannedroute'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'plannedvelocity'
#include "std_msgs/msg/detail/float32__traits.hpp"

namespace drive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavigationData & msg,
  std::ostream & out)
{
  out << "{";
  // member: currentlocation
  {
    out << "currentlocation: ";
    to_flow_style_yaml(msg.currentlocation, out);
    out << ", ";
  }

  // member: plannedroute
  {
    if (msg.plannedroute.size() == 0) {
      out << "plannedroute: []";
    } else {
      out << "plannedroute: [";
      size_t pending_items = msg.plannedroute.size();
      for (auto item : msg.plannedroute) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: plannedkappa
  {
    if (msg.plannedkappa.size() == 0) {
      out << "plannedkappa: []";
    } else {
      out << "plannedkappa: [";
      size_t pending_items = msg.plannedkappa.size();
      for (auto item : msg.plannedkappa) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: plannedvelocity
  {
    out << "plannedvelocity: ";
    to_flow_style_yaml(msg.plannedvelocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigationData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: currentlocation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "currentlocation:\n";
    to_block_style_yaml(msg.currentlocation, out, indentation + 2);
  }

  // member: plannedroute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.plannedroute.size() == 0) {
      out << "plannedroute: []\n";
    } else {
      out << "plannedroute:\n";
      for (auto item : msg.plannedroute) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: plannedkappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.plannedkappa.size() == 0) {
      out << "plannedkappa: []\n";
    } else {
      out << "plannedkappa:\n";
      for (auto item : msg.plannedkappa) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: plannedvelocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plannedvelocity:\n";
    to_block_style_yaml(msg.plannedvelocity, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigationData & msg, bool use_flow_style = false)
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
  const drive_msgs::msg::NavigationData & msg,
  std::ostream & out, size_t indentation = 0)
{
  drive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drive_msgs::msg::NavigationData & msg)
{
  return drive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drive_msgs::msg::NavigationData>()
{
  return "drive_msgs::msg::NavigationData";
}

template<>
inline const char * name<drive_msgs::msg::NavigationData>()
{
  return "drive_msgs/msg/NavigationData";
}

template<>
struct has_fixed_size<drive_msgs::msg::NavigationData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drive_msgs::msg::NavigationData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drive_msgs::msg::NavigationData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_MSGS__MSG__DETAIL__NAVIGATION_DATA__TRAITS_HPP_
