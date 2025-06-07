#!/usr/bin/env python2

import rospy
from sensor_msgs.msg import Imu
from nav_msgs.msg import Odometry
import tf

def imu_callback(msg):
    odom_msg = Odometry()
    odom_msg.header.stamp = rospy.Time.now()
    odom_msg.header.frame_id = "odom"
    odom_msg.child_frame_id = "base_link"

    # Pose (pozisyon sabit, yönelim IMU'dan)
    odom_msg.pose.pose.position.x = 0.0
    odom_msg.pose.pose.position.y = 0.0
    odom_msg.pose.pose.position.z = 0.0
    odom_msg.pose.pose.orientation = msg.orientation

    # Twist (açısal hızlar IMU'dan)
    odom_msg.twist.twist.linear.x = 0.0
    odom_msg.twist.twist.linear.y = 0.0
    odom_msg.twist.twist.linear.z = 0.0
    odom_msg.twist.twist.angular = msg.angular_velocity

    odom_pub.publish(odom_msg)

    # TF yayınla (eğer gerekirse)
    br.sendTransform((0.0, 0.0, 0.0),
                     (msg.orientation.x,
                      msg.orientation.y,
                      msg.orientation.z,
                      msg.orientation.w),
                     rospy.Time.now(),
                     "base_link",
                     "odom")

if __name__ == '__main__':
    rospy.init_node('imu_to_odom')

    odom_pub = rospy.Publisher('/odom', Odometry, queue_size=10)
    rospy.Subscriber('/sbg/imu_data', Imu, imu_callback)

    br = tf.TransformBroadcaster()

    rospy.loginfo("IMU → Odometry dönüştürücü çalışıyor.")
    rospy.spin()

