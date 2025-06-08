// gönderici wemos d1 r32 RX, TX
#include "LoRa_E22.h"
#define RXD2 16
#define TXD2 17

HardwareSerial mySerial(2);
LoRa_E22 E22(&mySerial, 27, 14, 12); // AUX M0 M1);

bool led = false;
String data;
ResponseContainer rc;

void setup() {
  // Serial Monitor için başlatma
  Serial.begin(115200);
  while (!Serial) {
    ; // Serial port açılana kadar bekle
  }
  //mySerial.begin(9600, SERIAL_8N1, RXD2, TXD2); 
  // UART2'yi başlat
  
  if (E22.begin()) {
    Serial.println("LoRa E22 Initialized successfully");
  } else {
    Serial.println("Failed to initialize LoRa E22");
  }

  pinMode(LED_BUILTIN, OUTPUT);
  ResponseStatus rs = E22.sendMessage("Hello, world?");
  // Check if there is some problem of successfully send
  Serial.println(rs.getResponseDescription());
}

void rssi(){
  int rssi = rc.rssi;
  //Serial.print("RSSI Değeri: ");
  Serial.println(rssi);
}

void loop(){
  if (Serial.available()) {
    data = (Serial.readString());
  }
  if(data.length() > 0){
    E22.sendFixedMessage(0x00, 0x02, 23, &data[0], data.length());
    Serial.println(data);
    data = "";
  }
  led = !led;
  digitalWrite(LED_BUILTIN, led);
  delay(300);
  String messsage = "hello slave!";
  E22.sendFixedMessage(0x00, 0x02, 23, &messsage[0], messsage.length());
  
  /*if (Serial2.available()) {
    Serial.write(Serial2.read());
  }*/
}

//void loop() {
//  /*if (Serial.available()) {
//    mySerial.write(Serial.read());
//  }*/
//  if (E22.available()) {
//    rc = E22.receiveMessage();
//    data = rc.data;
//    if(rc.status.code!=1){
//    Serial.println(rc.status.getResponseDescription());
//    }
//    rssi();
//  }
//  
//  if(data.length() > 0){
//    if (data.indexOf('\0') != -1) {
//    //Serial.println(data);
//    }
//    else {
//    Serial.println("Eksik veri!");
//    }
//    led = !led;
//    data = "";
//    rc.data = "";
//    digitalWrite(LED_BUILTIN, led);  // turn the LED on (HIGH is the voltage level)
//  }
//  
//  delay(100);  // Küçük bir bekleme ekleyi
//}
