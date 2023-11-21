// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:srv/PlutoPilot.idl
// generated code does not contain a copyright notice
#include "custom_msgs/srv/detail/pluto_pilot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
custom_msgs__srv__PlutoPilot_Request__init(custom_msgs__srv__PlutoPilot_Request * msg)
{
  if (!msg) {
    return false;
  }
  // roll
  // pitch
  // yaw
  // acc_x
  // acc_y
  // acc_z
  // gyro_x
  // gyro_y
  // gyro_z
  // mag_x
  // mag_y
  // mag_z
  // alt
  // battery
  // rssi
  return true;
}

void
custom_msgs__srv__PlutoPilot_Request__fini(custom_msgs__srv__PlutoPilot_Request * msg)
{
  if (!msg) {
    return;
  }
  // roll
  // pitch
  // yaw
  // acc_x
  // acc_y
  // acc_z
  // gyro_x
  // gyro_y
  // gyro_z
  // mag_x
  // mag_y
  // mag_z
  // alt
  // battery
  // rssi
}

bool
custom_msgs__srv__PlutoPilot_Request__are_equal(const custom_msgs__srv__PlutoPilot_Request * lhs, const custom_msgs__srv__PlutoPilot_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // acc_x
  if (lhs->acc_x != rhs->acc_x) {
    return false;
  }
  // acc_y
  if (lhs->acc_y != rhs->acc_y) {
    return false;
  }
  // acc_z
  if (lhs->acc_z != rhs->acc_z) {
    return false;
  }
  // gyro_x
  if (lhs->gyro_x != rhs->gyro_x) {
    return false;
  }
  // gyro_y
  if (lhs->gyro_y != rhs->gyro_y) {
    return false;
  }
  // gyro_z
  if (lhs->gyro_z != rhs->gyro_z) {
    return false;
  }
  // mag_x
  if (lhs->mag_x != rhs->mag_x) {
    return false;
  }
  // mag_y
  if (lhs->mag_y != rhs->mag_y) {
    return false;
  }
  // mag_z
  if (lhs->mag_z != rhs->mag_z) {
    return false;
  }
  // alt
  if (lhs->alt != rhs->alt) {
    return false;
  }
  // battery
  if (lhs->battery != rhs->battery) {
    return false;
  }
  // rssi
  if (lhs->rssi != rhs->rssi) {
    return false;
  }
  return true;
}

bool
custom_msgs__srv__PlutoPilot_Request__copy(
  const custom_msgs__srv__PlutoPilot_Request * input,
  custom_msgs__srv__PlutoPilot_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // acc_x
  output->acc_x = input->acc_x;
  // acc_y
  output->acc_y = input->acc_y;
  // acc_z
  output->acc_z = input->acc_z;
  // gyro_x
  output->gyro_x = input->gyro_x;
  // gyro_y
  output->gyro_y = input->gyro_y;
  // gyro_z
  output->gyro_z = input->gyro_z;
  // mag_x
  output->mag_x = input->mag_x;
  // mag_y
  output->mag_y = input->mag_y;
  // mag_z
  output->mag_z = input->mag_z;
  // alt
  output->alt = input->alt;
  // battery
  output->battery = input->battery;
  // rssi
  output->rssi = input->rssi;
  return true;
}

custom_msgs__srv__PlutoPilot_Request *
custom_msgs__srv__PlutoPilot_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__srv__PlutoPilot_Request * msg = (custom_msgs__srv__PlutoPilot_Request *)allocator.allocate(sizeof(custom_msgs__srv__PlutoPilot_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__srv__PlutoPilot_Request));
  bool success = custom_msgs__srv__PlutoPilot_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__srv__PlutoPilot_Request__destroy(custom_msgs__srv__PlutoPilot_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__srv__PlutoPilot_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__srv__PlutoPilot_Request__Sequence__init(custom_msgs__srv__PlutoPilot_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__srv__PlutoPilot_Request * data = NULL;

  if (size) {
    data = (custom_msgs__srv__PlutoPilot_Request *)allocator.zero_allocate(size, sizeof(custom_msgs__srv__PlutoPilot_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__srv__PlutoPilot_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__srv__PlutoPilot_Request__fini(&data[i - 1]);
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
custom_msgs__srv__PlutoPilot_Request__Sequence__fini(custom_msgs__srv__PlutoPilot_Request__Sequence * array)
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
      custom_msgs__srv__PlutoPilot_Request__fini(&array->data[i]);
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

custom_msgs__srv__PlutoPilot_Request__Sequence *
custom_msgs__srv__PlutoPilot_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__srv__PlutoPilot_Request__Sequence * array = (custom_msgs__srv__PlutoPilot_Request__Sequence *)allocator.allocate(sizeof(custom_msgs__srv__PlutoPilot_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__srv__PlutoPilot_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__srv__PlutoPilot_Request__Sequence__destroy(custom_msgs__srv__PlutoPilot_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__srv__PlutoPilot_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__srv__PlutoPilot_Request__Sequence__are_equal(const custom_msgs__srv__PlutoPilot_Request__Sequence * lhs, const custom_msgs__srv__PlutoPilot_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__srv__PlutoPilot_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__srv__PlutoPilot_Request__Sequence__copy(
  const custom_msgs__srv__PlutoPilot_Request__Sequence * input,
  custom_msgs__srv__PlutoPilot_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__srv__PlutoPilot_Request);
    custom_msgs__srv__PlutoPilot_Request * data =
      (custom_msgs__srv__PlutoPilot_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__srv__PlutoPilot_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msgs__srv__PlutoPilot_Request__fini(&data[i]);
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
    if (!custom_msgs__srv__PlutoPilot_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
custom_msgs__srv__PlutoPilot_Response__init(custom_msgs__srv__PlutoPilot_Response * msg)
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
  return true;
}

void
custom_msgs__srv__PlutoPilot_Response__fini(custom_msgs__srv__PlutoPilot_Response * msg)
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
}

bool
custom_msgs__srv__PlutoPilot_Response__are_equal(const custom_msgs__srv__PlutoPilot_Response * lhs, const custom_msgs__srv__PlutoPilot_Response * rhs)
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
  return true;
}

bool
custom_msgs__srv__PlutoPilot_Response__copy(
  const custom_msgs__srv__PlutoPilot_Response * input,
  custom_msgs__srv__PlutoPilot_Response * output)
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
  return true;
}

custom_msgs__srv__PlutoPilot_Response *
custom_msgs__srv__PlutoPilot_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__srv__PlutoPilot_Response * msg = (custom_msgs__srv__PlutoPilot_Response *)allocator.allocate(sizeof(custom_msgs__srv__PlutoPilot_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__srv__PlutoPilot_Response));
  bool success = custom_msgs__srv__PlutoPilot_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__srv__PlutoPilot_Response__destroy(custom_msgs__srv__PlutoPilot_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__srv__PlutoPilot_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__srv__PlutoPilot_Response__Sequence__init(custom_msgs__srv__PlutoPilot_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__srv__PlutoPilot_Response * data = NULL;

  if (size) {
    data = (custom_msgs__srv__PlutoPilot_Response *)allocator.zero_allocate(size, sizeof(custom_msgs__srv__PlutoPilot_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__srv__PlutoPilot_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__srv__PlutoPilot_Response__fini(&data[i - 1]);
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
custom_msgs__srv__PlutoPilot_Response__Sequence__fini(custom_msgs__srv__PlutoPilot_Response__Sequence * array)
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
      custom_msgs__srv__PlutoPilot_Response__fini(&array->data[i]);
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

custom_msgs__srv__PlutoPilot_Response__Sequence *
custom_msgs__srv__PlutoPilot_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__srv__PlutoPilot_Response__Sequence * array = (custom_msgs__srv__PlutoPilot_Response__Sequence *)allocator.allocate(sizeof(custom_msgs__srv__PlutoPilot_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__srv__PlutoPilot_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__srv__PlutoPilot_Response__Sequence__destroy(custom_msgs__srv__PlutoPilot_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__srv__PlutoPilot_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__srv__PlutoPilot_Response__Sequence__are_equal(const custom_msgs__srv__PlutoPilot_Response__Sequence * lhs, const custom_msgs__srv__PlutoPilot_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__srv__PlutoPilot_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__srv__PlutoPilot_Response__Sequence__copy(
  const custom_msgs__srv__PlutoPilot_Response__Sequence * input,
  custom_msgs__srv__PlutoPilot_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__srv__PlutoPilot_Response);
    custom_msgs__srv__PlutoPilot_Response * data =
      (custom_msgs__srv__PlutoPilot_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__srv__PlutoPilot_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msgs__srv__PlutoPilot_Response__fini(&data[i]);
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
    if (!custom_msgs__srv__PlutoPilot_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
