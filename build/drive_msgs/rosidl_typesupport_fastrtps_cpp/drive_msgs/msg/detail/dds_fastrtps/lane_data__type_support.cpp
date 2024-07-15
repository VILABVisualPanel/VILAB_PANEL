// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from drive_msgs:msg/LaneData.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/lane_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "drive_msgs/msg/detail/lane_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace drive_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const drive_msgs::msg::LaneLet &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  drive_msgs::msg::LaneLet &);
size_t get_serialized_size(
  const drive_msgs::msg::LaneLet &,
  size_t current_alignment);
size_t
max_serialized_size_LaneLet(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace drive_msgs

// functions for drive_msgs::msg::LaneLet already declared above


namespace drive_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_msgs
cdr_serialize(
  const drive_msgs::msg::LaneData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: currentlane
  drive_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.currentlane,
    cdr);
  // Member: neighborlane
  drive_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.neighborlane,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  drive_msgs::msg::LaneData & ros_message)
{
  // Member: currentlane
  drive_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.currentlane);

  // Member: neighborlane
  drive_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.neighborlane);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_msgs
get_serialized_size(
  const drive_msgs::msg::LaneData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: currentlane

  current_alignment +=
    drive_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.currentlane, current_alignment);
  // Member: neighborlane

  current_alignment +=
    drive_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.neighborlane, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_msgs
max_serialized_size_LaneData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: currentlane
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        drive_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneLet(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: neighborlane
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        drive_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneLet(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = drive_msgs::msg::LaneData;
    is_plain =
      (
      offsetof(DataType, neighborlane) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LaneData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const drive_msgs::msg::LaneData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<drive_msgs::msg::LaneData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const drive_msgs::msg::LaneData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LaneData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LaneData__callbacks = {
  "drive_msgs::msg",
  "LaneData",
  _LaneData__cdr_serialize,
  _LaneData__cdr_deserialize,
  _LaneData__get_serialized_size,
  _LaneData__max_serialized_size
};

static rosidl_message_type_support_t _LaneData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace drive_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_drive_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<drive_msgs::msg::LaneData>()
{
  return &drive_msgs::msg::typesupport_fastrtps_cpp::_LaneData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drive_msgs, msg, LaneData)() {
  return &drive_msgs::msg::typesupport_fastrtps_cpp::_LaneData__handle;
}

#ifdef __cplusplus
}
#endif
