#!/usr/bin/env python2
# -*- coding: utf-8 -*-

import rospy
from std_msgs.msg import Float32
import serial

# Seri verideki tanýtýcý önek
PREFIX = "Distance:"

def main():
    rospy.init_node('radius_node', anonymous=True)
    radius_pub = rospy.Publisher('/base_station/radius', Float32, queue_size=10)

    try:
        ser = serial.Serial('/dev/esp32', 115200, timeout=10)
        rospy.loginfo("UART baglantisi kuruldu.")
    except serial.SerialException as e:
        rospy.logerr("UART baglanti hatasi: %s", str(e))
        return

    rate = rospy.Rate(10)  # 10 Hz

    rospy.loginfo("Radius veri yayini baslatildi.")

    while not rospy.is_shutdown():
        try:
            # Seri veriyi ASCII karakterlerle sýnýrla, sorunlu karakterleri at
            raw = ser.readline().decode('ascii', errors='ignore').strip()
        except Exception as e:
            rospy.logwarn("Seri okuma hatasi: %s", str(e))
            continue

        if raw.startswith(PREFIX):
            # Sadece sayýya çevrilebilecek karakterleri al (rakam, ., -)
            payload_raw = raw[len(PREFIX):]
            payload = ''.join(c for c in payload_raw if c.isdigit() or c == '.' or c == '-')

            try:
                value = float(payload) * 0.01  # cm  m dönüþümü varsa burada
                radius_pub.publish(Float32(data=value))
            except ValueError:
                rospy.logwarn("Gecersiz sayi alindi: %s", repr(payload))

        rate.sleep()

if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass

