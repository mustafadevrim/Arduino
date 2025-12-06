## Mesafe Uyarı Sistemi (Ultrasonik Sensör ile)

Bu proje, bir HC-SR04 Ultrasonik Mesafe Sensörü kullanarak çevredeki nesnelerin mesafesini ölçer ve mesafeye göre bir RGB LED ve Buzzer ile görsel/işitsel uyarılar veren bir Arduino uygulamasıdır.

### Özellikler

* **RGB LED Kontrolü:** Ölçülen mesafeye göre renk değiştirir (Mavi, Yeşil, Kırmızı).
* **Buzzer Uyarısı:** Kritik mesafede (20 cm altı) bir basmalı anahtar ile kontrol edilebilen sesli uyarı sağlar.
* **Seri İzleme:** Ölçülen mesafeyi Serial Monitor (Seri Ekran) üzerinden santimetre (cm) cinsinden gösterir.

### Gerekli Bileşenler

| Bileşen | Adet | Açıklama |
| :--- | :--- | :--- |
| **Arduino Uno** (veya benzeri) | 1 | Projenin beyni. |
| **HC-SR04 Ultrasonik Sensör** | 1 | Mesafe ölçümü için. |
| **RGB LED** (Ortak Katot) | 1 | Görsel geri bildirim için. |
| **Buzzer** (Pasif veya Aktif) | 1 | Sesli geri bildirim için. |
| **Basmalı Anahtar** (`switch_pin`) | 1 | Buzzer'ı kontrol etmek için. |
| **220 Ohm Direnç** | 4 | LED pinleri ve Buzzer için (Akım sınırlama amaçlı). |

### Bağlantı Şeması (Wiring)

Projenin doğru çalışması için aşağıdaki bağlantıları yapın.

| Bileşen Pin | Arduino Pin |
| :--- | :--- |
| HC-SR04 **Trig** | D12 |
| HC-SR04 **Echo** | D11 |
| RGB LED **Kırmızı** | D2 |
| RGB LED **Yeşil** | D3 |
| RGB LED **Mavi** | D4 |
| Buzzer **(+)** | D5 |
| Basmalı Anahtar | D6 |

> **UYARI:** LED bacaklarına ve Buzzer'a mutlaka akım sınırlayıcı direnç (220 Ohm önerilir) bağlayın.

### Kodun Çalışma Mantığı

Kod, ölçülen mesafeye göre üç farklı durum tanımlar:

| Mesafe Aralığı | LED Rengi | Buzzer Durumu |
| :--- | :--- | :--- |
| **> 50 cm** (veya sensör menzili dışı / 0) | **MAVİ** (Güvenli Alan) | Kapalı |
| **20 cm - 50 cm** | **YEŞİL** (Yakınlaşma) | Kapalı |
| **< 20 cm** (Kritik Mesafe) | **KIRMIZI** (Çok Yakın) | **D6'daki Anahtar Basılıysa AÇIK** |

### Kullanılan Kütüphane

Bu proje, Ultrasonik sensörün güvenilir çalışması için **NewPing** kütüphanesini kullanır.
#include <NewPing.h>

Arduino IDE'de bu kütüphaneyi Taslak > Kütüphaneleri Dahil Et > Kütüphaneleri Yönet menüsünden aratarak projenize eklemelisiniz.
