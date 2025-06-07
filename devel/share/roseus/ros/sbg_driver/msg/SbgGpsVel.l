;; Auto-generated. Do not edit!


(when (boundp 'sbg_driver::SbgGpsVel)
  (if (not (find-package "SBG_DRIVER"))
    (make-package "SBG_DRIVER"))
  (shadow 'SbgGpsVel (find-package "SBG_DRIVER")))
(unless (find-package "SBG_DRIVER::SBGGPSVEL")
  (make-package "SBG_DRIVER::SBGGPSVEL"))

(in-package "ROS")
;;//! \htmlinclude SbgGpsVel.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass sbg_driver::SbgGpsVel
  :super ros::object
  :slots (_header _time_stamp _status _gps_tow _velocity _velocity_accuracy _course _course_acc ))

(defmethod sbg_driver::SbgGpsVel
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:time_stamp __time_stamp) 0)
    ((:status __status) (instance sbg_driver::SbgGpsVelStatus :init))
    ((:gps_tow __gps_tow) 0)
    ((:velocity __velocity) (instance geometry_msgs::Vector3 :init))
    ((:velocity_accuracy __velocity_accuracy) (instance geometry_msgs::Vector3 :init))
    ((:course __course) 0.0)
    ((:course_acc __course_acc) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _time_stamp (round __time_stamp))
   (setq _status __status)
   (setq _gps_tow (round __gps_tow))
   (setq _velocity __velocity)
   (setq _velocity_accuracy __velocity_accuracy)
   (setq _course (float __course))
   (setq _course_acc (float __course_acc))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:time_stamp
   (&optional __time_stamp)
   (if __time_stamp (setq _time_stamp __time_stamp)) _time_stamp)
  (:status
   (&rest __status)
   (if (keywordp (car __status))
       (send* _status __status)
     (progn
       (if __status (setq _status (car __status)))
       _status)))
  (:gps_tow
   (&optional __gps_tow)
   (if __gps_tow (setq _gps_tow __gps_tow)) _gps_tow)
  (:velocity
   (&rest __velocity)
   (if (keywordp (car __velocity))
       (send* _velocity __velocity)
     (progn
       (if __velocity (setq _velocity (car __velocity)))
       _velocity)))
  (:velocity_accuracy
   (&rest __velocity_accuracy)
   (if (keywordp (car __velocity_accuracy))
       (send* _velocity_accuracy __velocity_accuracy)
     (progn
       (if __velocity_accuracy (setq _velocity_accuracy (car __velocity_accuracy)))
       _velocity_accuracy)))
  (:course
   (&optional __course)
   (if __course (setq _course __course)) _course)
  (:course_acc
   (&optional __course_acc)
   (if __course_acc (setq _course_acc __course_acc)) _course_acc)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint32 _time_stamp
    4
    ;; sbg_driver/SbgGpsVelStatus _status
    (send _status :serialization-length)
    ;; uint32 _gps_tow
    4
    ;; geometry_msgs/Vector3 _velocity
    (send _velocity :serialization-length)
    ;; geometry_msgs/Vector3 _velocity_accuracy
    (send _velocity_accuracy :serialization-length)
    ;; float32 _course
    4
    ;; float32 _course_acc
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint32 _time_stamp
       (write-long _time_stamp s)
     ;; sbg_driver/SbgGpsVelStatus _status
       (send _status :serialize s)
     ;; uint32 _gps_tow
       (write-long _gps_tow s)
     ;; geometry_msgs/Vector3 _velocity
       (send _velocity :serialize s)
     ;; geometry_msgs/Vector3 _velocity_accuracy
       (send _velocity_accuracy :serialize s)
     ;; float32 _course
       (sys::poke _course (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _course_acc
       (sys::poke _course_acc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint32 _time_stamp
     (setq _time_stamp (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; sbg_driver/SbgGpsVelStatus _status
     (send _status :deserialize buf ptr-) (incf ptr- (send _status :serialization-length))
   ;; uint32 _gps_tow
     (setq _gps_tow (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; geometry_msgs/Vector3 _velocity
     (send _velocity :deserialize buf ptr-) (incf ptr- (send _velocity :serialization-length))
   ;; geometry_msgs/Vector3 _velocity_accuracy
     (send _velocity_accuracy :deserialize buf ptr-) (incf ptr- (send _velocity_accuracy :serialization-length))
   ;; float32 _course
     (setq _course (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _course_acc
     (setq _course_acc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get sbg_driver::SbgGpsVel :md5sum-) "dc36a4705c96041ace5f0875af58a725")
(setf (get sbg_driver::SbgGpsVel :datatype-) "sbg_driver/SbgGpsVel")
(setf (get sbg_driver::SbgGpsVel :definition-)
      "# SBG Ellipse Messages
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
")



(provide :sbg_driver/SbgGpsVel "dc36a4705c96041ace5f0875af58a725")


