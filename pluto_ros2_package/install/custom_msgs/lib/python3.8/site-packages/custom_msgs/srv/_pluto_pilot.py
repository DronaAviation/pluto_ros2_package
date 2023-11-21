# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:srv/PlutoPilot.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlutoPilot_Request(type):
    """Metaclass of message 'PlutoPilot_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs.srv.PlutoPilot_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pluto_pilot__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pluto_pilot__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pluto_pilot__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pluto_pilot__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pluto_pilot__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlutoPilot_Request(metaclass=Metaclass_PlutoPilot_Request):
    """Message class 'PlutoPilot_Request'."""

    __slots__ = [
        '_roll',
        '_pitch',
        '_yaw',
        '_acc_x',
        '_acc_y',
        '_acc_z',
        '_gyro_x',
        '_gyro_y',
        '_gyro_z',
        '_mag_x',
        '_mag_y',
        '_mag_z',
        '_alt',
        '_battery',
        '_rssi',
    ]

    _fields_and_field_types = {
        'roll': 'int32',
        'pitch': 'int32',
        'yaw': 'int32',
        'acc_x': 'float',
        'acc_y': 'float',
        'acc_z': 'float',
        'gyro_x': 'float',
        'gyro_y': 'float',
        'gyro_z': 'float',
        'mag_x': 'float',
        'mag_y': 'float',
        'mag_z': 'float',
        'alt': 'float',
        'battery': 'float',
        'rssi': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.roll = kwargs.get('roll', int())
        self.pitch = kwargs.get('pitch', int())
        self.yaw = kwargs.get('yaw', int())
        self.acc_x = kwargs.get('acc_x', float())
        self.acc_y = kwargs.get('acc_y', float())
        self.acc_z = kwargs.get('acc_z', float())
        self.gyro_x = kwargs.get('gyro_x', float())
        self.gyro_y = kwargs.get('gyro_y', float())
        self.gyro_z = kwargs.get('gyro_z', float())
        self.mag_x = kwargs.get('mag_x', float())
        self.mag_y = kwargs.get('mag_y', float())
        self.mag_z = kwargs.get('mag_z', float())
        self.alt = kwargs.get('alt', float())
        self.battery = kwargs.get('battery', float())
        self.rssi = kwargs.get('rssi', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.yaw != other.yaw:
            return False
        if self.acc_x != other.acc_x:
            return False
        if self.acc_y != other.acc_y:
            return False
        if self.acc_z != other.acc_z:
            return False
        if self.gyro_x != other.gyro_x:
            return False
        if self.gyro_y != other.gyro_y:
            return False
        if self.gyro_z != other.gyro_z:
            return False
        if self.mag_x != other.mag_x:
            return False
        if self.mag_y != other.mag_y:
            return False
        if self.mag_z != other.mag_z:
            return False
        if self.alt != other.alt:
            return False
        if self.battery != other.battery:
            return False
        if self.rssi != other.rssi:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'roll' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'roll' field must be an integer in [-2147483648, 2147483647]"
        self._roll = value

    @property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pitch' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pitch' field must be an integer in [-2147483648, 2147483647]"
        self._pitch = value

    @property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yaw' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'yaw' field must be an integer in [-2147483648, 2147483647]"
        self._yaw = value

    @property
    def acc_x(self):
        """Message field 'acc_x'."""
        return self._acc_x

    @acc_x.setter
    def acc_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_x' field must be of type 'float'"
        self._acc_x = value

    @property
    def acc_y(self):
        """Message field 'acc_y'."""
        return self._acc_y

    @acc_y.setter
    def acc_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_y' field must be of type 'float'"
        self._acc_y = value

    @property
    def acc_z(self):
        """Message field 'acc_z'."""
        return self._acc_z

    @acc_z.setter
    def acc_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_z' field must be of type 'float'"
        self._acc_z = value

    @property
    def gyro_x(self):
        """Message field 'gyro_x'."""
        return self._gyro_x

    @gyro_x.setter
    def gyro_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_x' field must be of type 'float'"
        self._gyro_x = value

    @property
    def gyro_y(self):
        """Message field 'gyro_y'."""
        return self._gyro_y

    @gyro_y.setter
    def gyro_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_y' field must be of type 'float'"
        self._gyro_y = value

    @property
    def gyro_z(self):
        """Message field 'gyro_z'."""
        return self._gyro_z

    @gyro_z.setter
    def gyro_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_z' field must be of type 'float'"
        self._gyro_z = value

    @property
    def mag_x(self):
        """Message field 'mag_x'."""
        return self._mag_x

    @mag_x.setter
    def mag_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_x' field must be of type 'float'"
        self._mag_x = value

    @property
    def mag_y(self):
        """Message field 'mag_y'."""
        return self._mag_y

    @mag_y.setter
    def mag_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_y' field must be of type 'float'"
        self._mag_y = value

    @property
    def mag_z(self):
        """Message field 'mag_z'."""
        return self._mag_z

    @mag_z.setter
    def mag_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_z' field must be of type 'float'"
        self._mag_z = value

    @property
    def alt(self):
        """Message field 'alt'."""
        return self._alt

    @alt.setter
    def alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alt' field must be of type 'float'"
        self._alt = value

    @property
    def battery(self):
        """Message field 'battery'."""
        return self._battery

    @battery.setter
    def battery(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery' field must be of type 'float'"
        self._battery = value

    @property
    def rssi(self):
        """Message field 'rssi'."""
        return self._rssi

    @rssi.setter
    def rssi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rssi' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rssi' field must be an integer in [-2147483648, 2147483647]"
        self._rssi = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PlutoPilot_Response(type):
    """Metaclass of message 'PlutoPilot_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs.srv.PlutoPilot_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pluto_pilot__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pluto_pilot__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pluto_pilot__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pluto_pilot__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pluto_pilot__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlutoPilot_Response(metaclass=Metaclass_PlutoPilot_Response):
    """Message class 'PlutoPilot_Response'."""

    __slots__ = [
        '_rc_roll',
        '_rc_pitch',
        '_rc_yaw',
        '_rc_throttle',
        '_rc_aux1',
        '_rc_aux2',
        '_rc_aux3',
        '_rc_aux4',
    ]

    _fields_and_field_types = {
        'rc_roll': 'int64',
        'rc_pitch': 'int64',
        'rc_yaw': 'int64',
        'rc_throttle': 'int64',
        'rc_aux1': 'int64',
        'rc_aux2': 'int64',
        'rc_aux3': 'int64',
        'rc_aux4': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rc_roll = kwargs.get('rc_roll', int())
        self.rc_pitch = kwargs.get('rc_pitch', int())
        self.rc_yaw = kwargs.get('rc_yaw', int())
        self.rc_throttle = kwargs.get('rc_throttle', int())
        self.rc_aux1 = kwargs.get('rc_aux1', int())
        self.rc_aux2 = kwargs.get('rc_aux2', int())
        self.rc_aux3 = kwargs.get('rc_aux3', int())
        self.rc_aux4 = kwargs.get('rc_aux4', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.rc_roll != other.rc_roll:
            return False
        if self.rc_pitch != other.rc_pitch:
            return False
        if self.rc_yaw != other.rc_yaw:
            return False
        if self.rc_throttle != other.rc_throttle:
            return False
        if self.rc_aux1 != other.rc_aux1:
            return False
        if self.rc_aux2 != other.rc_aux2:
            return False
        if self.rc_aux3 != other.rc_aux3:
            return False
        if self.rc_aux4 != other.rc_aux4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def rc_roll(self):
        """Message field 'rc_roll'."""
        return self._rc_roll

    @rc_roll.setter
    def rc_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_roll' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rc_roll' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rc_roll = value

    @property
    def rc_pitch(self):
        """Message field 'rc_pitch'."""
        return self._rc_pitch

    @rc_pitch.setter
    def rc_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_pitch' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rc_pitch' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rc_pitch = value

    @property
    def rc_yaw(self):
        """Message field 'rc_yaw'."""
        return self._rc_yaw

    @rc_yaw.setter
    def rc_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_yaw' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rc_yaw' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rc_yaw = value

    @property
    def rc_throttle(self):
        """Message field 'rc_throttle'."""
        return self._rc_throttle

    @rc_throttle.setter
    def rc_throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_throttle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rc_throttle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rc_throttle = value

    @property
    def rc_aux1(self):
        """Message field 'rc_aux1'."""
        return self._rc_aux1

    @rc_aux1.setter
    def rc_aux1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_aux1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rc_aux1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rc_aux1 = value

    @property
    def rc_aux2(self):
        """Message field 'rc_aux2'."""
        return self._rc_aux2

    @rc_aux2.setter
    def rc_aux2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_aux2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rc_aux2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rc_aux2 = value

    @property
    def rc_aux3(self):
        """Message field 'rc_aux3'."""
        return self._rc_aux3

    @rc_aux3.setter
    def rc_aux3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_aux3' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rc_aux3' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rc_aux3 = value

    @property
    def rc_aux4(self):
        """Message field 'rc_aux4'."""
        return self._rc_aux4

    @rc_aux4.setter
    def rc_aux4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_aux4' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rc_aux4' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rc_aux4 = value


class Metaclass_PlutoPilot(type):
    """Metaclass of service 'PlutoPilot'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs.srv.PlutoPilot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__pluto_pilot

            from custom_msgs.srv import _pluto_pilot
            if _pluto_pilot.Metaclass_PlutoPilot_Request._TYPE_SUPPORT is None:
                _pluto_pilot.Metaclass_PlutoPilot_Request.__import_type_support__()
            if _pluto_pilot.Metaclass_PlutoPilot_Response._TYPE_SUPPORT is None:
                _pluto_pilot.Metaclass_PlutoPilot_Response.__import_type_support__()


class PlutoPilot(metaclass=Metaclass_PlutoPilot):
    from custom_msgs.srv._pluto_pilot import PlutoPilot_Request as Request
    from custom_msgs.srv._pluto_pilot import PlutoPilot_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
