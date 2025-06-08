#include <LoRa_E22.h>

// Raspberry Pi Pico'da donanım seri haberleşme (UART1) kullanılıyor
#define RX_PIN 4  // Pico'daki RX pini
#define TX_PIN 5  // Pico'daki TX pini
#define AUX_PIN 6
#define M0_PIN 7
#define M1_PIN 8


LoRa_E22 E22(&Serial1, AUX_PIN, M0_PIN, M1_PIN); // UART1 kullanarak LoRa modülü

bool led = false;
String data;
ResponseContainer rc;

void setup() {
  Serial.begin(115200);  // USB Seri Monitör için

  Serial.println("LoRa E22 başlatılıyor...");

  if (E22.begin()) {
    Serial.println("LoRa E22 başarıyla başlatıldı");
  } else {
    Serial.println("LoRa E22 başlatılamadı!");
  }

  pinMode(LED_BUILTIN, OUTPUT);
  ResponseStatus rs = E22.sendMessage("Merhaba, dünya?");
  Serial.println(rs.getResponseDescription());
}

void rssi() {
  int rssi = rc.rssi;
  Serial.print("RSSI Değeri: ");
  Serial.println(rssi);
}

void loop() {
  if (Serial.available()) {
    data = Serial.readString();
  }

  if (data.length() > 0) {
    E22.sendFixedMessage(0x00, 0x02, 23, &data[0], data.length());
    Serial.println("Gönderilen Veri: " + data);
    data = "";
  }

  led = !led;
  digitalWrite(LED_BUILTIN, led);
  delay(300);

  String message = "Merhaba alıcı!";
  E22.sendFixedMessage(0x00, 0x02, 23, &message[0], message.length());
}
