Seri Port LED Kontrol Sistemi
Bu proje, Arduino'nun Seri Monitör'ü üzerinden gönderilen rakamlar (1'den 5'e kadar) ile beş ayrı LED'i tek tek açıp kapatmaya yarayan basit bir uygulamadır.

Özellikler
Toggle Fonksiyonu: Her bir rakam tuşuna basıldığında ilgili LED'in durumu tersine döner (Açıksa kapanır, kapalıysa açılır).
Durum Geri Bildirimi: Seri Monitör, her komuttan sonra ilgili LED'in yeni durumunu (AÇIK veya KAPALI) görüntüler.
Gerekli Bileşenler
Bu projenin kurulumu için gereken malzemeler şunlardır:
Arduino Uno (veya benzeri bir Arduino kartı)
5 Adet LED (Farklı renklerde olabilir.)
5 Adet 220 Ohm Direnç (Her LED için akım sınırlayıcı direnç.)
Bağlantı Kabloları
Bağlantı Şeması (Wiring)
Her bir LED, kendi direnci ile birlikte ilgili dijital pine bağlanmalıdır.
LED 1: D2 pinine bağlanır.
LED 2: D3 pinine bağlanır.
LED 3: D4 pinine bağlanır.
LED 4: D5 pinine bağlanır.
LED 5: D6 pinine bağlanır.
Önemli: LED'lerin uzun bacağı (anot) direnç üzerinden Arduino pinine, kısa bacağı (katot) ise doğrudan GND'ye bağlanmalıdır.

Kullanım Talimatı
Kodu Arduino kartınıza yükleyin.
Arduino IDE'de Seri Monitör'ü (Baud hızı 9600 olarak ayarlanmış olmalı) açın.
Seri Monitör'ün üst kısmındaki giriş kutucuğuna 1, 2, 3, 4 veya 5 rakamlarından birini yazın ve Gönder butonuna basın veya Enter tuşuna basın.
İlgili LED'in durumu değişecektir.
