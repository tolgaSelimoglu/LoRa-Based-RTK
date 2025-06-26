#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
from geometry_msgs.msg import Twist
import serial
from sensor_msgs.msg import Joy  # Joy paketini ekledik

# Sınırlar
Z_MIN = 0
Z_MAX = 180
X_MIN = -1.0
X_MAX = 1.0
TURBO_MULTIPLIER = 2.0  # Turbo modda hızı 2 katına çıkar

# Başlangıç değerleri
x = 0.0
z = 0.0
turbo_mode = False  # Turbo mod başta kapalı

# UART bağlantısını başlat
try:
    ser = serial.Serial(
        port='/dev/esp32',
        baudrate=115200,
        timeout=10
    )
    # print(" UART bağlantisi kuruldu.")
except serial.SerialException as e:
    # print(" UART bağlanti hatasi:", e)
    exit()


# UART mesaj gönderme fonksiyonu
def send_uart_update():
    global x, z
    msg = "{:.2f}/{:.2f}".format(x, z)
    try:
        ser.write(msg + '\n')
    except Exception as e:
        print "Parsing hatasi: {e} -> Gelen veri: {serial_line}"


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
        # print(f"Parsing hatasi: {e} -> Gelen veri: {serial_line}")
        return None


def cmd_vel_callback(msg):
    global x, z, turbo_mode

    # Gelen değerleri sınırla
    x_raw =  msg.linear.x
    z_raw =  msg.angular.z

    if turbo_mode:
        # Turbo modda x'in değeri 2 katına çıkacak
        if 0.11 <= x_raw <= 0.13:
            x = x_raw * TURBO_MULTIPLIER
        elif 0.13 <= x_raw:
            x = 0.13 * TURBO_MULTIPLIER
        elif 0.11 >= x_raw > 0.01:
            x = 0.11 * TURBO_MULTIPLIER
        elif x_raw < 0:
            x = x_raw * TURBO_MULTIPLIER  # Negatif x değeri için turbo modda hız artışı
        else:
            x = 0.0
    else:
        # Normal modda x değerini ayarla
        if 0.11 <= x_raw <= 0.13:
            x = x_raw
        elif 0.13 <= x_raw:
            x = 0.13
        elif 0.11 >= x_raw > 0.01:
            x = 0.11
        elif x_raw < 0:  # Geri gitme (negatif x)
            x = x_raw  # Negatif x alabilir
        else:
            x = 0.0

    # Z'nin değerini sınırla
    z = max(min(z_raw * 90 + 90, Z_MAX), Z_MIN)

    send_uart_update()


def joy_callback(data):
    """
    joy topic'inden gelen veriye göre turbo modunu kontrol eder.
    """
    global turbo_mode

    # R2 tuşu genellikle buttons[5] veya buttons[7] üzerinde olur.
    # Eğer joystick'in R2 tuşu basılıysa, turbo mode'u açıyoruz.
    if data.buttons[5] == 1:  # R2 tuşunun basılı olduğu durum
        turbo_mode = True
        print "Turbo mod aktif."
    else:
        turbo_mode = False
        print "Turbo mod devre dışı."


def main():
    rospy.init_node('cmd_vel_joy', anonymous=True)

    # /cmd_vel'e abone ol
    rospy.Subscriber('/cmd_vel', Twist, cmd_vel_callback)

    # /joy topic'ine abone ol, joystick verilerini al
    rospy.Subscriber('/joy', Joy, joy_callback)

    rospy.spin()

def uart_receive():
    if ser.in_waiting > 0:
        raw_line = ser.readline()
        data = parse_location_data(raw_line)


if __name__ == "__main__":
    main()
    uart_receive()
