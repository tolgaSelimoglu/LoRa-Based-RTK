// Auto-generated. Do not edit!

// (in-package sbg_driver.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let SbgGpsVelStatus = require('./SbgGpsVelStatus.js');
let geometry_msgs = _finder('geometry_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class SbgGpsVel {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.time_stamp = null;
      this.status = null;
      this.gps_tow = null;
      this.velocity = null;
      this.velocity_accuracy = null;
      this.course = null;
      this.course_acc = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('time_stamp')) {
        this.time_stamp = initObj.time_stamp
      }
      else {
        this.time_stamp = 0;
      }
      if (initObj.hasOwnProperty('status')) {
        this.status = initObj.status
      }
      else {
        this.status = new SbgGpsVelStatus();
      }
      if (initObj.hasOwnProperty('gps_tow')) {
        this.gps_tow = initObj.gps_tow
      }
      else {
        this.gps_tow = 0;
      }
      if (initObj.hasOwnProperty('velocity')) {
        this.velocity = initObj.velocity
      }
      else {
        this.velocity = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('velocity_accuracy')) {
        this.velocity_accuracy = initObj.velocity_accuracy
      }
      else {
        this.velocity_accuracy = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('course')) {
        this.course = initObj.course
      }
      else {
        this.course = 0.0;
      }
      if (initObj.hasOwnProperty('course_acc')) {
        this.course_acc = initObj.course_acc
      }
      else {
        this.course_acc = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SbgGpsVel
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [time_stamp]
    bufferOffset = _serializer.uint32(obj.time_stamp, buffer, bufferOffset);
    // Serialize message field [status]
    bufferOffset = SbgGpsVelStatus.serialize(obj.status, buffer, bufferOffset);
    // Serialize message field [gps_tow]
    bufferOffset = _serializer.uint32(obj.gps_tow, buffer, bufferOffset);
    // Serialize message field [velocity]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.velocity, buffer, bufferOffset);
    // Serialize message field [velocity_accuracy]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.velocity_accuracy, buffer, bufferOffset);
    // Serialize message field [course]
    bufferOffset = _serializer.float32(obj.course, buffer, bufferOffset);
    // Serialize message field [course_acc]
    bufferOffset = _serializer.float32(obj.course_acc, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SbgGpsVel
    let len;
    let data = new SbgGpsVel(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [time_stamp]
    data.time_stamp = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [status]
    data.status = SbgGpsVelStatus.deserialize(buffer, bufferOffset);
    // Deserialize message field [gps_tow]
    data.gps_tow = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [velocity]
    data.velocity = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [velocity_accuracy]
    data.velocity_accuracy = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [course]
    data.course = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [course_acc]
    data.course_acc = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 66;
  }

  static datatype() {
    // Returns string type for a message object
    return 'sbg_driver/SbgGpsVel';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'dc36a4705c96041ace5f0875af58a725';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # SBG Ellipse Messages
    Header header
    
    #  Time since sensor is powered up [us]
    uint32 time_stamp
    
    # GPS velocity fix and status bitmask
    SbgGpsVelStatus status
    
    # GPS Time of Week [ms]
    uint32 gps_tow
    
    # Velocity [m/s]
    # In NED convention:
    #   X: North
    #   Y: East
    #   Z: Down
    # In ENU convention:
    #   X: East
    #   Y: North
    #   Z: Up
    geometry_msgs/Vector3 velocity
    
    # Velocity accuracy (1 sigma) [m/s]
    # In NED convention:
    #   X: North
    #   Y: East
    #   Z: Vertical
    # In ENU convention:
    #   X: East
    #   Y: North
    #   Z: Vertical
    geometry_msgs/Vector3 velocity_accuracy
    
    # True direction of motion over ground (0 to 360 deg)
    # NED convention: Zero when the X axis is pointing North.
    # ENU convention: Zero when the X axis is pointing East. (opposite sign compared to NED)
    float32 course
    
    # 1 sigma course accuracy
    float32 course_acc
    
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
    
    ================================================================================
    MSG: sbg_driver/SbgGpsVelStatus
    # SBG Ellipse Messages
    # Submessage
    
    # The raw GPS velocity status
    # 0 SOL_COMPUTED		A valid solution has been computed.
    # 1 INSUFFICIENT_OBS	Not enough valid SV to compute a solution.
    # 2 INTERNAL_ERROR		An internal error has occurred.
    # 3 LIMIT				Velocity limit exceeded.
    uint8 vel_status
    
    # The raw GPS velocity type
    # 0 VEL_NO_SOLUTION		No valid velocity solution available.
    # 1 VEL_UNKNOWN_TYPE	An unknown solution type has been computed.
    # 2 VEL_DOPPLER			A Doppler velocity has been computed.
    # 3 VEL_DIFFERENTIAL	A velocity has been computed between two positions.
    uint8 vel_type
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SbgGpsVel(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.time_stamp !== undefined) {
      resolved.time_stamp = msg.time_stamp;
    }
    else {
      resolved.time_stamp = 0
    }

    if (msg.status !== undefined) {
      resolved.status = SbgGpsVelStatus.Resolve(msg.status)
    }
    else {
      resolved.status = new SbgGpsVelStatus()
    }

    if (msg.gps_tow !== undefined) {
      resolved.gps_tow = msg.gps_tow;
    }
    else {
      resolved.gps_tow = 0
    }

    if (msg.velocity !== undefined) {
      resolved.velocity = geometry_msgs.msg.Vector3.Resolve(msg.velocity)
    }
    else {
      resolved.velocity = new geometry_msgs.msg.Vector3()
    }

    if (msg.velocity_accuracy !== undefined) {
      resolved.velocity_accuracy = geometry_msgs.msg.Vector3.Resolve(msg.velocity_accuracy)
    }
    else {
      resolved.velocity_accuracy = new geometry_msgs.msg.Vector3()
    }

    if (msg.course !== undefined) {
      resolved.course = msg.course;
    }
    else {
      resolved.course = 0.0
    }

    if (msg.course_acc !== undefined) {
      resolved.course_acc = msg.course_acc;
    }
    else {
      resolved.course_acc = 0.0
    }

    return resolved;
    }
};

module.exports = SbgGpsVel;
