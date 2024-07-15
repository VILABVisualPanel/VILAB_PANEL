// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from drive_msgs:msg/LaneLet.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__LANE_LET__FUNCTIONS_H_
#define DRIVE_MSGS__MSG__DETAIL__LANE_LET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "drive_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "drive_msgs/msg/detail/lane_let__struct.h"

/// Initialize msg/LaneLet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drive_msgs__msg__LaneLet
 * )) before or use
 * drive_msgs__msg__LaneLet__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_msgs
bool
drive_msgs__msg__LaneLet__init(drive_msgs__msg__LaneLet * msg);

/// Finalize msg/LaneLet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_msgs
void
drive_msgs__msg__LaneLet__fini(drive_msgs__msg__LaneLet * msg);

/// Create msg/LaneLet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drive_msgs__msg__LaneLet__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_msgs
drive_msgs__msg__LaneLet *
drive_msgs__msg__LaneLet__create();

/// Destroy msg/LaneLet message.
/**
 * It calls
 * drive_msgs__msg__LaneLet__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_msgs
void
drive_msgs__msg__LaneLet__destroy(drive_msgs__msg__LaneLet * msg);

/// Check for msg/LaneLet message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_msgs
bool
drive_msgs__msg__LaneLet__are_equal(const drive_msgs__msg__LaneLet * lhs, const drive_msgs__msg__LaneLet * rhs);

/// Copy a msg/LaneLet message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_msgs
bool
drive_msgs__msg__LaneLet__copy(
  const drive_msgs__msg__LaneLet * input,
  drive_msgs__msg__LaneLet * output);

/// Initialize array of msg/LaneLet messages.
/**
 * It allocates the memory for the number of elements and calls
 * drive_msgs__msg__LaneLet__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_msgs
bool
drive_msgs__msg__LaneLet__Sequence__init(drive_msgs__msg__LaneLet__Sequence * array, size_t size);

/// Finalize array of msg/LaneLet messages.
/**
 * It calls
 * drive_msgs__msg__LaneLet__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_msgs
void
drive_msgs__msg__LaneLet__Sequence__fini(drive_msgs__msg__LaneLet__Sequence * array);

/// Create array of msg/LaneLet messages.
/**
 * It allocates the memory for the array and calls
 * drive_msgs__msg__LaneLet__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_msgs
drive_msgs__msg__LaneLet__Sequence *
drive_msgs__msg__LaneLet__Sequence__create(size_t size);

/// Destroy array of msg/LaneLet messages.
/**
 * It calls
 * drive_msgs__msg__LaneLet__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_msgs
void
drive_msgs__msg__LaneLet__Sequence__destroy(drive_msgs__msg__LaneLet__Sequence * array);

/// Check for msg/LaneLet message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_msgs
bool
drive_msgs__msg__LaneLet__Sequence__are_equal(const drive_msgs__msg__LaneLet__Sequence * lhs, const drive_msgs__msg__LaneLet__Sequence * rhs);

/// Copy an array of msg/LaneLet messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_msgs
bool
drive_msgs__msg__LaneLet__Sequence__copy(
  const drive_msgs__msg__LaneLet__Sequence * input,
  drive_msgs__msg__LaneLet__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__LANE_LET__FUNCTIONS_H_
