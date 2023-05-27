# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from niryo_one_msgs/ObjDetectionRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ObjDetectionRequest(genpy.Message):
  _md5sum = "7af8c917a587a5527345a87ab0262fe5"
  _type = "niryo_one_msgs/ObjDetectionRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """string obj_type
string obj_color
float32 workspace_ratio
bool ret_image
"""
  __slots__ = ['obj_type','obj_color','workspace_ratio','ret_image']
  _slot_types = ['string','string','float32','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       obj_type,obj_color,workspace_ratio,ret_image

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObjDetectionRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.obj_type is None:
        self.obj_type = ''
      if self.obj_color is None:
        self.obj_color = ''
      if self.workspace_ratio is None:
        self.workspace_ratio = 0.
      if self.ret_image is None:
        self.ret_image = False
    else:
      self.obj_type = ''
      self.obj_color = ''
      self.workspace_ratio = 0.
      self.ret_image = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.obj_type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.obj_color
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_fB().pack(_x.workspace_ratio, _x.ret_image))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.obj_type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.obj_type = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.obj_color = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.obj_color = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.workspace_ratio, _x.ret_image,) = _get_struct_fB().unpack(str[start:end])
      self.ret_image = bool(self.ret_image)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.obj_type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.obj_color
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_fB().pack(_x.workspace_ratio, _x.ret_image))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.obj_type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.obj_type = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.obj_color = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.obj_color = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.workspace_ratio, _x.ret_image,) = _get_struct_fB().unpack(str[start:end])
      self.ret_image = bool(self.ret_image)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_fB = None
def _get_struct_fB():
    global _struct_fB
    if _struct_fB is None:
        _struct_fB = struct.Struct("<fB")
    return _struct_fB
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from niryo_one_msgs/ObjDetectionResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import niryo_one_msgs.msg
import sensor_msgs.msg
import std_msgs.msg

class ObjDetectionResponse(genpy.Message):
  _md5sum = "b91b10d20d54e39c0903545ec757c896"
  _type = "niryo_one_msgs/ObjDetectionResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """int32 status
int32 SUCCESSFUL = 1
int32 VIDEO_STREAM_NOT_RUNNING = -1
int32 OBJECT_NOT_FOUND = -2
int32 MARKERS_NOT_FOUND = -3

niryo_one_msgs/ObjectPose obj_pose

string obj_type
string obj_color

sensor_msgs/CompressedImage img


================================================================================
MSG: niryo_one_msgs/ObjectPose
float64 x
float64 y
float64 z

float64 roll
float64 pitch
float64 yaw

================================================================================
MSG: sensor_msgs/CompressedImage
# This message contains a compressed image

Header header        # Header timestamp should be acquisition time of image
                     # Header frame_id should be optical frame of camera
                     # origin of frame should be optical center of camera
                     # +x should point to the right in the image
                     # +y should point down in the image
                     # +z should point into to plane of the image

string format        # Specifies the format of the data
                     #   Acceptable values:
                     #     jpeg, png
uint8[] data         # Compressed image buffer

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  # Pseudo-constants
  SUCCESSFUL = 1
  VIDEO_STREAM_NOT_RUNNING = -1
  OBJECT_NOT_FOUND = -2
  MARKERS_NOT_FOUND = -3

  __slots__ = ['status','obj_pose','obj_type','obj_color','img']
  _slot_types = ['int32','niryo_one_msgs/ObjectPose','string','string','sensor_msgs/CompressedImage']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       status,obj_pose,obj_type,obj_color,img

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObjDetectionResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.status is None:
        self.status = 0
      if self.obj_pose is None:
        self.obj_pose = niryo_one_msgs.msg.ObjectPose()
      if self.obj_type is None:
        self.obj_type = ''
      if self.obj_color is None:
        self.obj_color = ''
      if self.img is None:
        self.img = sensor_msgs.msg.CompressedImage()
    else:
      self.status = 0
      self.obj_pose = niryo_one_msgs.msg.ObjectPose()
      self.obj_type = ''
      self.obj_color = ''
      self.img = sensor_msgs.msg.CompressedImage()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_i6d().pack(_x.status, _x.obj_pose.x, _x.obj_pose.y, _x.obj_pose.z, _x.obj_pose.roll, _x.obj_pose.pitch, _x.obj_pose.yaw))
      _x = self.obj_type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.obj_color
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3I().pack(_x.img.header.seq, _x.img.header.stamp.secs, _x.img.header.stamp.nsecs))
      _x = self.img.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.img.format
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.img.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.obj_pose is None:
        self.obj_pose = niryo_one_msgs.msg.ObjectPose()
      if self.img is None:
        self.img = sensor_msgs.msg.CompressedImage()
      end = 0
      _x = self
      start = end
      end += 52
      (_x.status, _x.obj_pose.x, _x.obj_pose.y, _x.obj_pose.z, _x.obj_pose.roll, _x.obj_pose.pitch, _x.obj_pose.yaw,) = _get_struct_i6d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.obj_type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.obj_type = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.obj_color = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.obj_color = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.img.header.seq, _x.img.header.stamp.secs, _x.img.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.img.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.img.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.img.format = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.img.format = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.img.data = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_i6d().pack(_x.status, _x.obj_pose.x, _x.obj_pose.y, _x.obj_pose.z, _x.obj_pose.roll, _x.obj_pose.pitch, _x.obj_pose.yaw))
      _x = self.obj_type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.obj_color
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3I().pack(_x.img.header.seq, _x.img.header.stamp.secs, _x.img.header.stamp.nsecs))
      _x = self.img.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.img.format
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.img.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.obj_pose is None:
        self.obj_pose = niryo_one_msgs.msg.ObjectPose()
      if self.img is None:
        self.img = sensor_msgs.msg.CompressedImage()
      end = 0
      _x = self
      start = end
      end += 52
      (_x.status, _x.obj_pose.x, _x.obj_pose.y, _x.obj_pose.z, _x.obj_pose.roll, _x.obj_pose.pitch, _x.obj_pose.yaw,) = _get_struct_i6d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.obj_type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.obj_type = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.obj_color = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.obj_color = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.img.header.seq, _x.img.header.stamp.secs, _x.img.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.img.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.img.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.img.format = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.img.format = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.img.data = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_i6d = None
def _get_struct_i6d():
    global _struct_i6d
    if _struct_i6d is None:
        _struct_i6d = struct.Struct("<i6d")
    return _struct_i6d
class ObjDetection(object):
  _type          = 'niryo_one_msgs/ObjDetection'
  _md5sum = 'a5f6ca6e7d76ce99e6a8b77d055a7a4a'
  _request_class  = ObjDetectionRequest
  _response_class = ObjDetectionResponse
