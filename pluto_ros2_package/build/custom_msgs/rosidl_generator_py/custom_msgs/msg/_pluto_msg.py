# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/PlutoMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlutoMsg(type):
    """Metaclass of message 'PlutoMsg'."""

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
                'custom_msgs.msg.PlutoMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pluto_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pluto_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pluto_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pluto_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pluto_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlutoMsg(metaclass=Metaclass_PlutoMsg):
    """Message class 'PlutoMsg'."""

    __slots__ = [
        '_rc_roll',
        '_rc_pitch',
        '_rc_yaw',
        '_rc_throttle',
        '_rc_aux1',
        '_rc_aux2',
        '_rc_aux3',
        '_rc_aux4',
        '_pluto_index',
        '_command_type',
        '_trim_roll',
        '_trim_pitch',
        '_is_auto_pilot_on',
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
        'pluto_index': 'int64',
        'command_type': 'int8',
        'trim_roll': 'int8',
        'trim_pitch': 'int8',
        'is_auto_pilot_on': 'boolean',
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
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.pluto_index = kwargs.get('pluto_index', int())
        self.command_type = kwargs.get('command_type', int())
        self.trim_roll = kwargs.get('trim_roll', int())
        self.trim_pitch = kwargs.get('trim_pitch', int())
        self.is_auto_pilot_on = kwargs.get('is_auto_pilot_on', bool())

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
        if self.pluto_index != other.pluto_index:
            return False
        if self.command_type != other.command_type:
            return False
        if self.trim_roll != other.trim_roll:
            return False
        if self.trim_pitch != other.trim_pitch:
            return False
        if self.is_auto_pilot_on != other.is_auto_pilot_on:
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

    @property
    def pluto_index(self):
        """Message field 'pluto_index'."""
        return self._pluto_index

    @pluto_index.setter
    def pluto_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pluto_index' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'pluto_index' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._pluto_index = value

    @property
    def command_type(self):
        """Message field 'command_type'."""
        return self._command_type

    @command_type.setter
    def command_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'command_type' field must be an integer in [-128, 127]"
        self._command_type = value

    @property
    def trim_roll(self):
        """Message field 'trim_roll'."""
        return self._trim_roll

    @trim_roll.setter
    def trim_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trim_roll' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'trim_roll' field must be an integer in [-128, 127]"
        self._trim_roll = value

    @property
    def trim_pitch(self):
        """Message field 'trim_pitch'."""
        return self._trim_pitch

    @trim_pitch.setter
    def trim_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trim_pitch' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'trim_pitch' field must be an integer in [-128, 127]"
        self._trim_pitch = value

    @property
    def is_auto_pilot_on(self):
        """Message field 'is_auto_pilot_on'."""
        return self._is_auto_pilot_on

    @is_auto_pilot_on.setter
    def is_auto_pilot_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_auto_pilot_on' field must be of type 'bool'"
        self._is_auto_pilot_on = value
