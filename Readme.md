# Jetson-ws Branch - README

## İçindekiler

- [Proje Hakkında](#proje-hakkında)
- [Dosya Yapısı](#dosya-yapısı)
- [Klasör Açıklamaları](#klasör-açıklamaları)
- [Kurulum](#kurulum)
- [Katkıda Bulunanlar](#katkıda-bulunanlar)

---

## Proje Hakkında

Bu branch, Jetson Nano içerisinde çalışan LoRa tabanlı RTK uygulamasının ROS ortamı için hazırlanmıştır.

---

## Dosya Yapısı

```plaintext
Jetson-ws/
├── src/
│   └── kuzu_external/           # Harici Cihaz Driverları Bulunur
│   │   └── ...
│   └── kuzu_robot/              # Proje için özel olarak yazılan scriptler
│        └── config/              ## Otonom sürüş içinözelleştirilmişparametreleri
│        └── launch/              ## Slam ve otonom içingerekli launch dosyaları
│        └── map/                 ## Koridorda çıkartılanmap
│        └── rviz/                ## İlgili proje içinkaydedilen rviz uygulaması
│        └── urdf/                ## Aracın Urdf Dosyaları
│        └── cmd_vel.py           ## Cmd_vel topic'ini UART'a basar.
│        └── imu_to_odom.py       ## IMU'dan alınan veriyle odometry işler
│        └── radius_forwarder.py  ## LoRa dan alınan uzaklık verisini işler.
├── devel/                       
├── build/ 
├── frames.pdf                    # node bağlantıları

```

---

## Klasör Açıklamaları

- **src/**: Uygulamanın ana kaynak kodları burada bulunur.
- **config/**: Konfigürasyon dosyalarını içerir.
- **docs/**: Proje dokümantasyonları ve kullanım kılavuzları burada yer alır.
- **scripts/**: Kurulum ve yardımcı betikler bu klasörde bulunur.

---

## Kurulum

```bash
git clone -b jetson-ws https://github.com/kullanici/LoRa-Based-RTK.git
cd LoRa-Based-RTK
```

---

## Katkıda Bulunanlar

- [Muhammed Saidnur Çalışkan]
- [Samet Burhan]
- [Tolga Selimoğlu]

