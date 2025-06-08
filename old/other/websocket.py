import serial
import json
import threading
import keyboard  # pip install keyboard
import time

# Başlangıç değerleri
z = 0.0   # angular.z
x = 0.0   # linear.x

# Sınırlar
Z_MIN, Z_MAX = 0, 180
X_MIN, X_MAX = -1.0, 1.0

# Artış miktarı
Z_STEP = 5
X_STEP = 0.1

# UART bağlantısını başlat
try:
    ser = serial.Serial(
        port='/dev/ttyUSB0',  # Jetson’da UART pini
        baudrate=115200,
        timeout=1
    )
    print("✅ UART bağlantısı kuruldu.")
except serial.SerialException as e:
    print(f"❌ UART bağlantı hatası: {e}")
    exit()

# UART üzerinden veri gönder
def send_uart_update():
    msg = f"{x:.2f}"+"/"+f"{z:.2f}"
    print(msg)
    try:
        ser.write((msg + '\n').encode('utf-8'))  # Satır sonu ekle
    except Exception as e:
        print(f"UART gönderim hatası: {e}")

# Tuş dinleyici
def keyboard_control():
    global z, x
    print("🎮 WASD kontrol aktif. Çıkmak için Ctrl+C")
    while True:
        try:
            event = keyboard.read_event()
            if event.event_type == keyboard.KEY_DOWN:
                key = event.name.lower()

                if key == 'a':
                    z = max(Z_MIN, z - Z_STEP)
                    print(f"⬅️ z (angular): {z:.2f}")
                    send_uart_update()

                elif key == 'd':
                    z = min(Z_MAX, z + Z_STEP)
                    print(f"➡️ z (angular): {z:.2f}")
                    send_uart_update()

                elif key == 'w':
                    x = min(X_MAX, x + X_STEP)
                    print(f"⬆️ x (linear): {x:.2f}")
                    send_uart_update()

                elif key == 's':
                    x = max(X_MIN, x - X_STEP)
                    print(f"⬇️ x (linear): {x:.2f}")
                    send_uart_update()
        except:
            break

if __name__ == "__main__":
    keyboard_control()
