#!/usr/bin/env python2
# -*- coding: utf-8 -*-
import rospy
from std_msgs.msg import String
import serial

def main():

    rospy.init_node('radius_node', anonymous=True)
    radius_pub = rospy.Publisher('/base_station_radius', String, queue_size=10)
    try:
        ser = serial.Serial(
            port='/dev/esp32',
            baudrate=115200,
            timeout=10
        )
        print "✅ UART bağlanisi kuruldu."
    except serial.SerialException as e:
        print "❌ UART baglanti hatasi:", e
        exit()

    rate = rospy.Rate(10)  # 10 Hz
    rospy.loginfo("Radius basma islemi baslatildi")

    while not rospy.is_shutdown():
        line = ser.readline().decode('utf-8', errors='ignore').strip()
        if not line:
            rate.sleep()
            continue
        msg = String(data=line)
        radius_pub.publish(msg)
        rate.sleep()

if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass
