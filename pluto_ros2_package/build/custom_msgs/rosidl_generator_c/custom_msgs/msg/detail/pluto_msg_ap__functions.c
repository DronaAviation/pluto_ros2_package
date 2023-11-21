// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/PlutoMsgAP.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/pluto_msg_ap__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_msgs__msg__PlutoMsgAP__init(custom_msgs__msg__PlutoMsgAP * msg)
{
  if (!msg) {
    return false;
  }
  // rc_roll
  // rc_pitch
  // rc_yaw
  // rc_throttle
  // pluto_index
  // command_type
  return true;
}

void
custom_msgs__msg__PlutoMsgAP__fini(custom_msgs__msg__PlutoMsgAP * msg)
{
  if (!msg) {
    return;
  }
  // rc_roll
  // rc_pitch
  // rc_yaw
  // rc_throttle
  // pluto_index
  // command_type
}

bool
custom_msgs__msg__PlutoMsgAP__are_equal(const custom_msgs__msg__PlutoMsgAP * lhs, const custom_msgs__msg__PlutoMsgAP * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rc_roll
  if (lhs->rc_roll != rhs->rc_roll) {
    return false;
  }
  // rc_pitch
  if (lhs->rc_pitch != rhs->rc_pitch) {
    return false;
  }
  // rc_yaw
  if (lhs->rc_yaw != rhs->rc_yaw) {
    return false;
  }
  // rc_throttle
  if (lhs->rc_throttle != rhs->rc_throttle) {
    return false;
  }
  // pluto_index
  if (lhs->pluto_index != rhs->pluto_index) {
    return false;
  }
  // command_type
  if (lhs->command_type != rhs->command_type) {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__PlutoMsgAP__copy(
  const custom_msgs__msg__PlutoMsgAP * input,
  custom_msgs__msg__PlutoMsgAP * output)
{
  if (!input || !output) {
    return false;
  }
  // rc_roll
  output->rc_roll = input->rc_roll;
  // rc_pitch
  output->rc_pitch = input->rc_pitch;
  // rc_yaw
  output->rc_yaw = input->rc_yaw;
  // rc_throttle
  output->rc_throttle = input->rc_throttle;
  // pluto_index
  output->pluto_index = input->pluto_index;
  // command_type
  output->command_type = input->command_type;
  return true;
}

custom_msgs__msg__PlutoMsgAP *
custom_msgs__msg__PlutoMsgAP__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__PlutoMsgAP * msg = (custom_msgs__msg__PlutoMsgAP *)allocator.allocate(sizeof(custom_msgs__msg__PlutoMsgAP), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__PlutoMsgAP));
  bool success = custom_msgs__msg__PlutoMsgAP__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__PlutoMsgAP__destroy(custom_msgs__msg__PlutoMsgAP * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__PlutoMsgAP__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__PlutoMsgAP__Sequence__init(custom_msgs__msg__PlutoMsgAP__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__PlutoMsgAP * data = NULL;

  if (size) {
    data = (custom_msgs__msg__PlutoMsgAP *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__PlutoMsgAP), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__PlutoMsgAP__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__PlutoMsgAP__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_msgs__msg__PlutoMsgAP__Sequence__fini(custom_msgs__msg__PlutoMsgAP__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__PlutoMsgAP__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_msgs__msg__PlutoMsgAP__Sequence *
custom_msgs__msg__PlutoMsgAP__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__PlutoMsgAP__Sequence * array = (custom_msgs__msg__PlutoMsgAP__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__PlutoMsgAP__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__PlutoMsgAP__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__PlutoMsgAP__Sequence__destroy(custom_msgs__msg__PlutoMsgAP__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__PlutoMsgAP__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__PlutoMsgAP__Sequence__are_equal(const custom_msgs__msg__PlutoMsgAP__Sequence * lhs, const custom_msgs__msg__PlutoMsgAP__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__PlutoMsgAP__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__PlutoMsgAP__Sequence__copy(
  const custom_msgs__msg__PlutoMsgAP__Sequence * input,
  custom_msgs__msg__PlutoMsgAP__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__PlutoMsgAP);
    custom_msgs__msg__PlutoMsgAP * data =
      (custom_msgs__msg__PlutoMsgAP *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__PlutoMsgAP__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__PlutoMsgAP__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__PlutoMsgAP__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
