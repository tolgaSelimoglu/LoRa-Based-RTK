; Auto-generated. Do not edit!


(cl:in-package sbg_driver-msg)


;//! \htmlinclude SbgEkfQuat.msg.html

(cl:defclass <SbgEkfQuat> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (time_stamp
    :reader time_stamp
    :initarg :time_stamp
    :type cl:integer
    :initform 0)
   (quaternion
    :reader quaternion
    :initarg :quaternion
    :type geometry_msgs-msg:Quaternion
    :initform (cl:make-instance 'geometry_msgs-msg:Quaternion))
   (accuracy
    :reader accuracy
    :initarg :accuracy
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (status
    :reader status
    :initarg :status
    :type sbg_driver-msg:SbgEkfStatus
    :initform (cl:make-instance 'sbg_driver-msg:SbgEkfStatus)))
)

(cl:defclass SbgEkfQuat (<SbgEkfQuat>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SbgEkfQuat>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SbgEkfQuat)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name sbg_driver-msg:<SbgEkfQuat> is deprecated: use sbg_driver-msg:SbgEkfQuat instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SbgEkfQuat>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sbg_driver-msg:header-val is deprecated.  Use sbg_driver-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'time_stamp-val :lambda-list '(m))
(cl:defmethod time_stamp-val ((m <SbgEkfQuat>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sbg_driver-msg:time_stamp-val is deprecated.  Use sbg_driver-msg:time_stamp instead.")
  (time_stamp m))

(cl:ensure-generic-function 'quaternion-val :lambda-list '(m))
(cl:defmethod quaternion-val ((m <SbgEkfQuat>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sbg_driver-msg:quaternion-val is deprecated.  Use sbg_driver-msg:quaternion instead.")
  (quaternion m))

(cl:ensure-generic-function 'accuracy-val :lambda-list '(m))
(cl:defmethod accuracy-val ((m <SbgEkfQuat>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sbg_driver-msg:accuracy-val is deprecated.  Use sbg_driver-msg:accuracy instead.")
  (accuracy m))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <SbgEkfQuat>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sbg_driver-msg:status-val is deprecated.  Use sbg_driver-msg:status instead.")
  (status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SbgEkfQuat>) ostream)
  "Serializes a message object of type '<SbgEkfQuat>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'time_stamp)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'time_stamp)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'time_stamp)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'time_stamp)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'quaternion) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'accuracy) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'status) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SbgEkfQuat>) istream)
  "Deserializes a message object of type '<SbgEkfQuat>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'time_stamp)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'time_stamp)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'time_stamp)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'time_stamp)) (cl:read-byte istream))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'quaternion) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'accuracy) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'status) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SbgEkfQuat>)))
  "Returns string type for a message object of type '<SbgEkfQuat>"
  "sbg_driver/SbgEkfQuat")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SbgEkfQuat)))
  "Returns string type for a message object of type 'SbgEkfQuat"
  "sbg_driver/SbgEkfQuat")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SbgEkfQuat>)))
  "Returns md5sum for a message object of type '<SbgEkfQuat>"
  "f1257400ac859ad475d8b651b008ba22")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SbgEkfQuat)))
  "Returns md5sum for a message object of type 'SbgEkfQuat"
  "f1257400ac859ad475d8b651b008ba22")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SbgEkfQuat>)))
  "Returns full string definition for message of type '<SbgEkfQuat>"
  (cl:format cl:nil "# SBG Ellipse Messages~%~%Header header~%~%# Time since sensor is powered up [us]~%uint32 time_stamp~%~%# Quaternion parameter (ROS order X, Y, Z, W)~%# The rotation definition depends on the driver NED/ENU configuration~%# Please read the message SbgEkfEuler for more information~%geometry_msgs/Quaternion quaternion~%~%# Angle accuracy (Roll, Pitch, Yaw (heading)) (1 sigma) [rad]~%geometry_msgs/Vector3 accuracy~%~%#  Global solution status~%SbgEkfStatus status~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: sbg_driver/SbgEkfStatus~%# SBG Ellipse Messages~%# Submessage~%~%# Defines the Kalman filter computation mode (see the table 4 below)~%# 0 UNINITIALIZED	The Kalman filter is not initialized and the returned data are all invalid.~%# 1 VERTICAL_GYRO	The Kalman filter only rely on a vertical reference to compute roll and pitch angles. Heading and navigation data drift freely.~%# 2 AHRS			A heading reference is available, the Kalman filter provides full orientation but navigation data drift freely.~%# 3 NAV_VELOCITY	The Kalman filter computes orientation and velocity. Position is freely integrated from velocity estimation.~%# 4 NAV_POSITION	Nominal mode, the Kalman filter computes all parameters (attitude, velocity, position). Absolute position is provided. ~%uint8 solution_mode ~%~%# True if Attitude data is reliable (Roll/Pitch error < 0,5 deg)~%bool attitude_valid~%~%# True if Heading data is reliable (Heading error < 1 deg)~%bool heading_valid~%~%# True if Velocity data is reliable (velocity error < 1.5 m/s)~%bool velocity_valid~%~%# True if Position data is reliable (Position error < 10m)~%bool position_valid~%~%# True if vertical reference is used in solution (data used and valid since 3s)~%bool vert_ref_used~%~%# True if magnetometer is used in solution (data used and valid since 3s)~%bool mag_ref_used~%~%# True if GPS velocity is used in solution (data used and valid since 3s)~%bool gps1_vel_used~%~%# True if GPS Position is used in solution (data used and valid since 3s)~%bool gps1_pos_used~%~%# True if GPS Course is used in solution (data used and valid since 3s)~%bool gps1_course_used~%~%# True if GPS True Heading is used in solution (data used and valid since 3s)~%bool gps1_hdt_used~%~%# True if GPS2 velocity is used in solution (data used and valid since 3s)~%bool gps2_vel_used~%~%# True if GPS2 Position is used in solution (data used and valid since 3s)~%bool gps2_pos_used~%~%# True if GPS2 Course is used in solution (data used and valid since 3s)~%bool gps2_course_used~%~%# True if GPS2 True Heading is used in solution (data used and valid since 3s)~%bool gps2_hdt_used~%~%# True if Odometer is used in solution (data used and valid since 3s)~%bool odo_used~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SbgEkfQuat)))
  "Returns full string definition for message of type 'SbgEkfQuat"
  (cl:format cl:nil "# SBG Ellipse Messages~%~%Header header~%~%# Time since sensor is powered up [us]~%uint32 time_stamp~%~%# Quaternion parameter (ROS order X, Y, Z, W)~%# The rotation definition depends on the driver NED/ENU configuration~%# Please read the message SbgEkfEuler for more information~%geometry_msgs/Quaternion quaternion~%~%# Angle accuracy (Roll, Pitch, Yaw (heading)) (1 sigma) [rad]~%geometry_msgs/Vector3 accuracy~%~%#  Global solution status~%SbgEkfStatus status~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: sbg_driver/SbgEkfStatus~%# SBG Ellipse Messages~%# Submessage~%~%# Defines the Kalman filter computation mode (see the table 4 below)~%# 0 UNINITIALIZED	The Kalman filter is not initialized and the returned data are all invalid.~%# 1 VERTICAL_GYRO	The Kalman filter only rely on a vertical reference to compute roll and pitch angles. Heading and navigation data drift freely.~%# 2 AHRS			A heading reference is available, the Kalman filter provides full orientation but navigation data drift freely.~%# 3 NAV_VELOCITY	The Kalman filter computes orientation and velocity. Position is freely integrated from velocity estimation.~%# 4 NAV_POSITION	Nominal mode, the Kalman filter computes all parameters (attitude, velocity, position). Absolute position is provided. ~%uint8 solution_mode ~%~%# True if Attitude data is reliable (Roll/Pitch error < 0,5 deg)~%bool attitude_valid~%~%# True if Heading data is reliable (Heading error < 1 deg)~%bool heading_valid~%~%# True if Velocity data is reliable (velocity error < 1.5 m/s)~%bool velocity_valid~%~%# True if Position data is reliable (Position error < 10m)~%bool position_valid~%~%# True if vertical reference is used in solution (data used and valid since 3s)~%bool vert_ref_used~%~%# True if magnetometer is used in solution (data used and valid since 3s)~%bool mag_ref_used~%~%# True if GPS velocity is used in solution (data used and valid since 3s)~%bool gps1_vel_used~%~%# True if GPS Position is used in solution (data used and valid since 3s)~%bool gps1_pos_used~%~%# True if GPS Course is used in solution (data used and valid since 3s)~%bool gps1_course_used~%~%# True if GPS True Heading is used in solution (data used and valid since 3s)~%bool gps1_hdt_used~%~%# True if GPS2 velocity is used in solution (data used and valid since 3s)~%bool gps2_vel_used~%~%# True if GPS2 Position is used in solution (data used and valid since 3s)~%bool gps2_pos_used~%~%# True if GPS2 Course is used in solution (data used and valid since 3s)~%bool gps2_course_used~%~%# True if GPS2 True Heading is used in solution (data used and valid since 3s)~%bool gps2_hdt_used~%~%# True if Odometer is used in solution (data used and valid since 3s)~%bool odo_used~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SbgEkfQuat>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'quaternion))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'accuracy))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'status))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SbgEkfQuat>))
  "Converts a ROS message object to a list"
  (cl:list 'SbgEkfQuat
    (cl:cons ':header (header msg))
    (cl:cons ':time_stamp (time_stamp msg))
    (cl:cons ':quaternion (quaternion msg))
    (cl:cons ':accuracy (accuracy msg))
    (cl:cons ':status (status msg))
))
