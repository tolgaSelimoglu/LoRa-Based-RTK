#!/usr/bin/env python2
# -*- coding: utf-8 -*-

import rospy
from geometry_msgs.msg import Twist
import serial

# Sınırlar
Z_MIN = 0
Z_MAX = 180
X_MIN = -1.0
X_MAX = 1.0

# Başlangıç değerleri
x = 0.0
z = 0.0

# UART bağlantısını başlat
try:
    ser = serial.Serial(
        port='/dev/esp32',
        baudrate=115200,
        timeout=10
    )
    print "✅ UART bağlantısı kuruldu."
except serial.SerialException as e:
    print "❌ UART bağlantı hatası:", e
    exit()


# UART mesaj gönderme fonksiyonu
def send_uart_update():
    global x, z
    msg = "{:.2f}/{:.2f}".format(x, z)
    print "📤 UART mesajı:", msg
    try:
        ser.write(msg + '\n')
    except Exception as e:
        print "⚠️ UART gönderim hatası:", e

def parse_location_data(serial_line):
    """
    Serial'den gelen 'enlem/boylam/uzaklık' formatındaki veriyi parse eder.
    Örnek: " 41.123456/29.987654/12.45 "
    """
    try:
        line = serial_line.decode('utf-8').strip()
        parts = line.split('/')

        if len(parts) != 3:
            raise ValueError("Beklenen format: enlem/boylam/uzaklik")

        enlem = float(parts[0].strip())
        boylam = float(parts[1].strip())
        uzaklik = float(parts[2].strip())

        return {
            'enlem': enlem,
            'boylam': boylam,
            'uzaklik': uzaklik
        }
    except Exception as e:
        print "Parsing hatasi: {e} -> Gelen veri: {serial_line}"
        return None


def cmd_vel_callback(msg):
    global x, z

    # Gelen değerleri sınırla
    
    x_raw =  msg.linear.x 
    z_raw =  msg.angular.z

    if 0.11 <= x_raw <= 0.13:
        x = x_raw
    elif 0.13 <= x_raw:
        x = 0.13
    elif 0.11 >= x_raw >0.01:
        x = 0.11
    else:
        x = 0.0

    z = max(min(z_raw * 90 + 90, Z_MAX), Z_MIN)

    send_uart_update()


def main():
    rospy.init_node('cmd_vel_uart_bridge', anonymous=True)
    rospy.Subscriber('/cmd_vel', Twist, cmd_vel_callback)
    print "📡 /cmd_vel dinleniyor..."
    rospy.spin()

def uart_receive():
    if ser.in_waiting > 0:
        raw_line = ser.readline()
        data = parse_location_data(raw_line)
        if data:
            print "Enlem: {data['enlem']} , Boylam: {data['boylam']}, Uzaklik: {data['uzaklik']} m"

if __name__ == "__main__":
    main()
    uart_receive()
