// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_msgs:msg/DetectionData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__DETECTION_DATA__TRAITS_HPP_
#define DRIVE_MSGS__MSG__DETAIL__DETECTION_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drive_msgs/msg/detail/detection_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'objects'
#include "drive_msgs/msg/detail/object_info__traits.hpp"
// Member 'laneposition0'
// Member 'laneposition1'
// Member 'laneposition2'
// Member 'laneposition3'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace drive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectionData & msg,
  std::ostream & out)
{
  out << "{";
  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: laneposition0
  {
    if (msg.laneposition0.size() == 0) {
      out << "laneposition0: []";
    } else {
      out << "laneposition0: [";
      size_t pending_items = msg.laneposition0.size();
      for (auto item : msg.laneposition0) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: laneposition1
  {
    if (msg.laneposition1.size() == 0) {
      out << "laneposition1: []";
    } else {
      out << "laneposition1: [";
      size_t pending_items = msg.laneposition1.size();
      for (auto item : msg.laneposition1) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: laneposition2
  {
    if (msg.laneposition2.size() == 0) {
      out << "laneposition2: []";
    } else {
      out << "laneposition2: [";
      size_t pending_items = msg.laneposition2.size();
      for (auto item : msg.laneposition2) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: laneposition3
  {
    if (msg.laneposition3.size() == 0) {
      out << "laneposition3: []";
    } else {
      out << "laneposition3: [";
      size_t pending_items = msg.laneposition3.size();
      for (auto item : msg.laneposition3) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: laneposition0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.laneposition0.size() == 0) {
      out << "laneposition0: []\n";
    } else {
      out << "laneposition0:\n";
      for (auto item : msg.laneposition0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: laneposition1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.laneposition1.size() == 0) {
      out << "laneposition1: []\n";
    } else {
      out << "laneposition1:\n";
      for (auto item : msg.laneposition1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: laneposition2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.laneposition2.size() == 0) {
      out << "laneposition2: []\n";
    } else {
      out << "laneposition2:\n";
      for (auto item : msg.laneposition2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: laneposition3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.laneposition3.size() == 0) {
      out << "laneposition3: []\n";
    } else {
      out << "laneposition3:\n";
      for (auto item : msg.laneposition3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectionData & msg, bool use_flow_style = false)
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
  const drive_msgs::msg::DetectionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  drive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drive_msgs::msg::DetectionData & msg)
{
  return drive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drive_msgs::msg::DetectionData>()
{
  return "drive_msgs::msg::DetectionData";
}

template<>
inline const char * name<drive_msgs::msg::DetectionData>()
{
  return "drive_msgs/msg/DetectionData";
}

template<>
struct has_fixed_size<drive_msgs::msg::DetectionData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drive_msgs::msg::DetectionData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drive_msgs::msg::DetectionData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_MSGS__MSG__DETAIL__DETECTION_DATA__TRAITS_HPP_
