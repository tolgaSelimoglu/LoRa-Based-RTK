// Auto-generated. Do not edit!

// (in-package sbg_driver.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let SbgEkfStatus = require('./SbgEkfStatus.js');
let geometry_msgs = _finder('geometry_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class SbgEkfNav {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.time_stamp = null;
      this.velocity = null;
      this.velocity_accuracy = null;
      this.latitude = null;
      this.longitude = null;
      this.altitude = null;
      this.undulation = null;
      this.position_accuracy = null;
      this.status = null;
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
      if (initObj.hasOwnProperty('latitude')) {
        this.latitude = initObj.latitude
      }
      else {
        this.latitude = 0.0;
      }
      if (initObj.hasOwnProperty('longitude')) {
        this.longitude = initObj.longitude
      }
      else {
        this.longitude = 0.0;
      }
      if (initObj.hasOwnProperty('altitude')) {
        this.altitude = initObj.altitude
      }
      else {
        this.altitude = 0.0;
      }
      if (initObj.hasOwnProperty('undulation')) {
        this.undulation = initObj.undulation
      }
      else {
        this.undulation = 0.0;
      }
      if (initObj.hasOwnProperty('position_accuracy')) {
        this.position_accuracy = initObj.position_accuracy
      }
      else {
        this.position_accuracy = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('status')) {
        this.status = initObj.status
      }
      else {
        this.status = new SbgEkfStatus();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SbgEkfNav
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [time_stamp]
    bufferOffset = _serializer.uint32(obj.time_stamp, buffer, bufferOffset);
    // Serialize message field [velocity]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.velocity, buffer, bufferOffset);
    // Serialize message field [velocity_accuracy]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.velocity_accuracy, buffer, bufferOffset);
    // Serialize message field [latitude]
    bufferOffset = _serializer.float64(obj.latitude, buffer, bufferOffset);
    // Serialize message field [longitude]
    bufferOffset = _serializer.float64(obj.longitude, buffer, bufferOffset);
    // Serialize message field [altitude]
    bufferOffset = _serializer.float64(obj.altitude, buffer, bufferOffset);
    // Serialize message field [undulation]
    bufferOffset = _serializer.float32(obj.undulation, buffer, bufferOffset);
    // Serialize message field [position_accuracy]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.position_accuracy, buffer, bufferOffset);
    // Serialize message field [status]
    bufferOffset = SbgEkfStatus.serialize(obj.status, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SbgEkfNav
    let len;
    let data = new SbgEkfNav(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [time_stamp]
    data.time_stamp = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [velocity]
    data.velocity = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [velocity_accuracy]
    data.velocity_accuracy = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [latitude]
    data.latitude = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [longitude]
    data.longitude = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [altitude]
    data.altitude = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [undulation]
    data.undulation = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [position_accuracy]
    data.position_accuracy = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [status]
    data.status = SbgEkfStatus.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 120;
  }

  static datatype() {
    // Returns string type for a message object
    return 'sbg_driver/SbgEkfNav';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '16e5ed53c5544dda563fc67fb816d9b9';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # SBG Ellipse Messages
    
    Header header
    
    # Time since sensor is powered up [us]
    uint32 time_stamp
    
    # Velocity [m/s]
    # In NED convention:
    #   x: North
    #   y: East
    #   z: Down
    # In ENU convention:
    #   x: East
    #   y: North
    #   z: Up
    geometry_msgs/Vector3 velocity
    
    # Velocity accuracy (1 sigma) [m/s].
    # In NED convention:
    #   x: North
    #   y: East
    #   z: Vertical
    # In ENU convention:
    #   x: East
    #   y: North
    #   z: Vertical
    geometry_msgs/Vector3 velocity_accuracy
    
    # Latitude [degrees]. Positive is north of equator; negative is south
    float64 latitude
    
    # Longitude [degrees]. Positive is east of prime meridian; negative is west
    float64 longitude
    
    # Altitude [m]. Positive (above Mean Sea Level in meters)
    float64 altitude
    
    # Altitude difference between the geoid and the Ellipsoid (WGS-84 Altitude - MSL Altitude)
    # (Height above Ellipsoid = altitude + undulation) [m]
    float32 undulation
    
    # Position accuracy (1 sigma) [m].
    # In NED convention:
    #   x: North
    #   y: East
    #   z: Vertical
    # In ENU convention:
    #   x: East
    #   y: North
    #   z: Vertical
    geometry_msgs/Vector3 position_accuracy
    
    #  Global solution status
    SbgEkfStatus status
    
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
    ================================================================================
    MSG: sbg_driver/SbgEkfStatus
    # SBG Ellipse Messages
    # Submessage
    
    # Defines the Kalman filter computation mode (see the table 4 below)
    # 0 UNINITIALIZED	The Kalman filter is not initialized and the returned data are all invalid.
    # 1 VERTICAL_GYRO	The Kalman filter only rely on a vertical reference to compute roll and pitch angles. Heading and navigation data drift freely.
    # 2 AHRS			A heading reference is available, the Kalman filter provides full orientation but navigation data drift freely.
    # 3 NAV_VELOCITY	The Kalman filter computes orientation and velocity. Position is freely integrated from velocity estimation.
    # 4 NAV_POSITION	Nominal mode, the Kalman filter computes all parameters (attitude, velocity, position). Absolute position is provided. 
    uint8 solution_mode 
    
    # True if Attitude data is reliable (Roll/Pitch error < 0,5 deg)
    bool attitude_valid
    
    # True if Heading data is reliable (Heading error < 1 deg)
    bool heading_valid
    
    # True if Velocity data is reliable (velocity error < 1.5 m/s)
    bool velocity_valid
    
    # True if Position data is reliable (Position error < 10m)
    bool position_valid
    
    # True if vertical reference is used in solution (data used and valid since 3s)
    bool vert_ref_used
    
    # True if magnetometer is used in solution (data used and valid since 3s)
    bool mag_ref_used
    
    # True if GPS velocity is used in solution (data used and valid since 3s)
    bool gps1_vel_used
    
    # True if GPS Position is used in solution (data used and valid since 3s)
    bool gps1_pos_used
    
    # True if GPS Course is used in solution (data used and valid since 3s)
    bool gps1_course_used
    
    # True if GPS True Heading is used in solution (data used and valid since 3s)
    bool gps1_hdt_used
    
    # True if GPS2 velocity is used in solution (data used and valid since 3s)
    bool gps2_vel_used
    
    # True if GPS2 Position is used in solution (data used and valid since 3s)
    bool gps2_pos_used
    
    # True if GPS2 Course is used in solution (data used and valid since 3s)
    bool gps2_course_used
    
    # True if GPS2 True Heading is used in solution (data used and valid since 3s)
    bool gps2_hdt_used
    
    # True if Odometer is used in solution (data used and valid since 3s)
    bool odo_used
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SbgEkfNav(null);
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

    if (msg.latitude !== undefined) {
      resolved.latitude = msg.latitude;
    }
    else {
      resolved.latitude = 0.0
    }

    if (msg.longitude !== undefined) {
      resolved.longitude = msg.longitude;
    }
    else {
      resolved.longitude = 0.0
    }

    if (msg.altitude !== undefined) {
      resolved.altitude = msg.altitude;
    }
    else {
      resolved.altitude = 0.0
    }

    if (msg.undulation !== undefined) {
      resolved.undulation = msg.undulation;
    }
    else {
      resolved.undulation = 0.0
    }

    if (msg.position_accuracy !== undefined) {
      resolved.position_accuracy = geometry_msgs.msg.Vector3.Resolve(msg.position_accuracy)
    }
    else {
      resolved.position_accuracy = new geometry_msgs.msg.Vector3()
    }

    if (msg.status !== undefined) {
      resolved.status = SbgEkfStatus.Resolve(msg.status)
    }
    else {
      resolved.status = new SbgEkfStatus()
    }

    return resolved;
    }
};

module.exports = SbgEkfNav;
