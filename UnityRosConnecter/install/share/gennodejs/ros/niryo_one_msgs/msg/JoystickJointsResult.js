// Auto-generated. Do not edit!

// (in-package niryo_one_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class JoystickJointsResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.has_succeeded = null;
    }
    else {
      if (initObj.hasOwnProperty('has_succeeded')) {
        this.has_succeeded = initObj.has_succeeded
      }
      else {
        this.has_succeeded = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type JoystickJointsResult
    // Serialize message field [has_succeeded]
    bufferOffset = _serializer.int32(obj.has_succeeded, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type JoystickJointsResult
    let len;
    let data = new JoystickJointsResult(null);
    // Deserialize message field [has_succeeded]
    data.has_succeeded = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'niryo_one_msgs/JoystickJointsResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c46039d3cf9aba9e4c57d528de8250ae';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # result
    int32 has_succeeded
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new JoystickJointsResult(null);
    if (msg.has_succeeded !== undefined) {
      resolved.has_succeeded = msg.has_succeeded;
    }
    else {
      resolved.has_succeeded = 0
    }

    return resolved;
    }
};

module.exports = JoystickJointsResult;