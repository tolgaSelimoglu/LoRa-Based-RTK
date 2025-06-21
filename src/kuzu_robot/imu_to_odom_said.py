#!/usr/bin/env python2
# -*- coding: utf-8 -*-
import rospy
from nav_msgs.msg import Odometry
from sbg_driver.msg import SbgImuData
import tf

def imu_callback(msg):
    # 1. Yeni bir Odometry mesajı oluşturup header zamanını IMU zamanıyla eşitliyoruz
    odom_msg = Odometry()
    odom_msg.header.stamp = msg.header.stamp
    odom_msg.header.frame_id = "odom"
    odom_msg.child_frame_id = "base_link"

    # 2. Pozisyonu sabit tutuyoruz (örnek: aracın yerde sabit konumu)
    odom_msg.pose.pose.position.x = 0.0
    odom_msg.pose.pose.position.y = 0.0
    odom_msg.pose.pose.position.z = 0.0

    # 3. Orientation bilgisi yok → düz kuaterniyon (identity) kullanıyoruz
    odom_msg.pose.pose.orientation.x = 0.0
    odom_msg.pose.pose.orientation.y = 0.0
    odom_msg.pose.pose.orientation.z = 0.0
    odom_msg.pose.pose.orientation.w = 1.0

    # 4. Lineer hız yok (IMU’dan sadece ivme var, ama burada kullanmıyoruz)
    odom_msg.twist.twist.linear.x = 0.0
    odom_msg.twist.twist.linear.y = 0.0
    odom_msg.twist.twist.linear.z = 0.0

    # 5. Açısal hızları direkt msg.gyro’dan alıp yerleştiriyoruz
    #    (rosmsg show çıktılarına göre gyro.x, gyro.y, gyro.z var)
    odom_msg.twist.twist.angular.x = msg.gyro.x
    odom_msg.twist.twist.angular.y = msg.gyro.y
    odom_msg.twist.twist.angular.z = msg.gyro.z

    # 6. /odom topic’ine publish et
    odom_pub.publish(odom_msg)

    # 7. Bir TF yayını yapalım: sabit konum, sabit düz kuaterniyon (burada yönelim değişmiyor)
    br.sendTransform(
        (0.0, 0.0, 0.0),
        (0.0, 0.0, 0.0, 1.0),
        msg.header.stamp,
        "base_link",
        "odom"
    )

if __name__ == '__main__':
    rospy.init_node('imu_to_odom', anonymous=True)

    # /odom için Odometry yayıncı
    odom_pub = rospy.Publisher('/odom', Odometry, queue_size=10)

    # /sbg/imu_data topic’ine SbgImuData tipinde abone oluyoruz
    rospy.Subscriber('/sbg/imu_data', SbgImuData, imu_callback)

    # TF yayıcı
    br = tf.TransformBroadcaster()

    rospy.loginfo("Başlatıldı: SbgImuData → nav_msgs/Odometry dönüştürücü")
    rospy.spin()
