// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
#define DRIVE_MSGS__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drive_msgs/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mapname'
#include "std_msgs/msg/detail/string__traits.hpp"
// Member 'systemmode'
// Member 'systemsignal'
// Member 'systemstate'
// Member 'systemhealth'
// Member 'lapcount'
#include "std_msgs/msg/detail/int8__traits.hpp"

namespace drive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: mapname
  {
    out << "mapname: ";
    to_flow_style_yaml(msg.mapname, out);
    out << ", ";
  }

  // member: basella
  {
    if (msg.basella.size() == 0) {
      out << "basella: []";
    } else {
      out << "basella: [";
      size_t pending_items = msg.basella.size();
      for (auto item : msg.basella) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: systemmode
  {
    out << "systemmode: ";
    to_flow_style_yaml(msg.systemmode, out);
    out << ", ";
  }

  // member: systemsignal
  {
    out << "systemsignal: ";
    to_flow_style_yaml(msg.systemsignal, out);
    out << ", ";
  }

  // member: systemstate
  {
    out << "systemstate: ";
    to_flow_style_yaml(msg.systemstate, out);
    out << ", ";
  }

  // member: systemhealth
  {
    out << "systemhealth: ";
    to_flow_style_yaml(msg.systemhealth, out);
    out << ", ";
  }

  // member: lapcount
  {
    out << "lapcount: ";
    to_flow_style_yaml(msg.lapcount, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mapname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mapname:\n";
    to_block_style_yaml(msg.mapname, out, indentation + 2);
  }

  // member: basella
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.basella.size() == 0) {
      out << "basella: []\n";
    } else {
      out << "basella:\n";
      for (auto item : msg.basella) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: systemmode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "systemmode:\n";
    to_block_style_yaml(msg.systemmode, out, indentation + 2);
  }

  // member: systemsignal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "systemsignal:\n";
    to_block_style_yaml(msg.systemsignal, out, indentation + 2);
  }

  // member: systemstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "systemstate:\n";
    to_block_style_yaml(msg.systemstate, out, indentation + 2);
  }

  // member: systemhealth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "systemhealth:\n";
    to_block_style_yaml(msg.systemhealth, out, indentation + 2);
  }

  // member: lapcount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lapcount:\n";
    to_block_style_yaml(msg.lapcount, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemStatus & msg, bool use_flow_style = false)
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
  const drive_msgs::msg::SystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  drive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drive_msgs::msg::SystemStatus & msg)
{
  return drive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drive_msgs::msg::SystemStatus>()
{
  return "drive_msgs::msg::SystemStatus";
}

template<>
inline const char * name<drive_msgs::msg::SystemStatus>()
{
  return "drive_msgs/msg/SystemStatus";
}

template<>
struct has_fixed_size<drive_msgs::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drive_msgs::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drive_msgs::msg::SystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_MSGS__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
