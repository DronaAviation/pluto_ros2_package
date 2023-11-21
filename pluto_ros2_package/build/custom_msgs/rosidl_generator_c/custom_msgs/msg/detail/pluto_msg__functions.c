// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/PlutoMsg.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/pluto_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_msgs__msg__PlutoMsg__init(custom_msgs__msg__PlutoMsg * msg)
{
  if (!msg) {
    return false;
  }
  // rc_roll
  // rc_pitch
  // rc_yaw
  // rc_throttle
  // rc_aux1
  // rc_aux2
  // rc_aux3
  // rc_aux4
  // pluto_index
  // command_type
  // trim_roll
  // trim_pitch
  // is_auto_pilot_on
  return true;
}

void
custom_msgs__msg__PlutoMsg__fini(custom_msgs__msg__PlutoMsg * msg)
{
  if (!msg) {
    return;
  }
  // rc_roll
  // rc_pitch
  // rc_yaw
  // rc_throttle
  // rc_aux1
  // rc_aux2
  // rc_aux3
  // rc_aux4
  // pluto_index
  // command_type
  // trim_roll
  // trim_pitch
  // is_auto_pilot_on
}

bool
custom_msgs__msg__PlutoMsg__are_equal(const custom_msgs__msg__PlutoMsg * lhs, const custom_msgs__msg__PlutoMsg * rhs)
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
  // rc_aux1
  if (lhs->rc_aux1 != rhs->rc_aux1) {
    return false;
  }
  // rc_aux2
  if (lhs->rc_aux2 != rhs->rc_aux2) {
    return false;
  }
  // rc_aux3
  if (lhs->rc_aux3 != rhs->rc_aux3) {
    return false;
  }
  // rc_aux4
  if (lhs->rc_aux4 != rhs->rc_aux4) {
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
  // trim_roll
  if (lhs->trim_roll != rhs->trim_roll) {
    return false;
  }
  // trim_pitch
  if (lhs->trim_pitch != rhs->trim_pitch) {
    return false;
  }
  // is_auto_pilot_on
  if (lhs->is_auto_pilot_on != rhs->is_auto_pilot_on) {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__PlutoMsg__copy(
  const custom_msgs__msg__PlutoMsg * input,
  custom_msgs__msg__PlutoMsg * output)
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
  // rc_aux1
  output->rc_aux1 = input->rc_aux1;
  // rc_aux2
  output->rc_aux2 = input->rc_aux2;
  // rc_aux3
  output->rc_aux3 = input->rc_aux3;
  // rc_aux4
  output->rc_aux4 = input->rc_aux4;
  // pluto_index
  output->pluto_index = input->pluto_index;
  // command_type
  output->command_type = input->command_type;
  // trim_roll
  output->trim_roll = input->trim_roll;
  // trim_pitch
  output->trim_pitch = input->trim_pitch;
  // is_auto_pilot_on
  output->is_auto_pilot_on = input->is_auto_pilot_on;
  return true;
}

custom_msgs__msg__PlutoMsg *
custom_msgs__msg__PlutoMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__PlutoMsg * msg = (custom_msgs__msg__PlutoMsg *)allocator.allocate(sizeof(custom_msgs__msg__PlutoMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__PlutoMsg));
  bool success = custom_msgs__msg__PlutoMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__PlutoMsg__destroy(custom_msgs__msg__PlutoMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__PlutoMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__PlutoMsg__Sequence__init(custom_msgs__msg__PlutoMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__PlutoMsg * data = NULL;

  if (size) {
    data = (custom_msgs__msg__PlutoMsg *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__PlutoMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__PlutoMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__PlutoMsg__fini(&data[i - 1]);
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
custom_msgs__msg__PlutoMsg__Sequence__fini(custom_msgs__msg__PlutoMsg__Sequence * array)
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
      custom_msgs__msg__PlutoMsg__fini(&array->data[i]);
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

custom_msgs__msg__PlutoMsg__Sequence *
custom_msgs__msg__PlutoMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__PlutoMsg__Sequence * array = (custom_msgs__msg__PlutoMsg__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__PlutoMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__PlutoMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__PlutoMsg__Sequence__destroy(custom_msgs__msg__PlutoMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__PlutoMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__PlutoMsg__Sequence__are_equal(const custom_msgs__msg__PlutoMsg__Sequence * lhs, const custom_msgs__msg__PlutoMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__PlutoMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__PlutoMsg__Sequence__copy(
  const custom_msgs__msg__PlutoMsg__Sequence * input,
  custom_msgs__msg__PlutoMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__PlutoMsg);
    custom_msgs__msg__PlutoMsg * data =
      (custom_msgs__msg__PlutoMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__PlutoMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__PlutoMsg__fini(&data[i]);
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
    if (!custom_msgs__msg__PlutoMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
