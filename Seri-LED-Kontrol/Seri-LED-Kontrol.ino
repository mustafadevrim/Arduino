const int led1Pin = 2;
const int led2Pin = 3;
const int led3Pin = 4;
const int led4Pin = 5;
const int led5Pin = 6;

bool led1Durumu = false;
bool led2Durumu = false;
bool led3Durumu = false;
bool led4Durumu = false;
bool led5Durumu = false;

void setup() {

  Serial.begin(9600);

  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(led4Pin, OUTPUT);
  pinMode(led5Pin, OUTPUT);

  Serial.println("LED Kontrol Sistemi Başladı.");
  Serial.println("1, 2, 3, 4, 5 tuşlarına basarak LED'leri açıp kapatabilirsiniz.");
}

void loop() {

  if (Serial.available() > 0) {
    
    char gelenVeri = Serial.read();

    switch (gelenVeri) {

      case '1':
        
        led1Durumu = !led1Durumu;
        digitalWrite(led1Pin, led1Durumu);
        
        Serial.print("LED 1 Durumu: ");
        Serial.println(led1Durumu ? "AÇIK" : "KAPALI"); 
        break;

      case '2':
        led2Durumu = !led2Durumu;
        digitalWrite(led2Pin, led2Durumu);
        Serial.print("LED 2 Durumu: ");
        Serial.println(led2Durumu ? "AÇIK" : "KAPALI");
        break;

      case '3':
        led3Durumu = !led3Durumu;
        digitalWrite(led3Pin, led3Durumu);
        Serial.print("LED 3 Durumu: ");
        Serial.println(led3Durumu ? "AÇIK" : "KAPALI");
        break;

      case '4':
        led4Durumu = !led4Durumu;
        digitalWrite(led4Pin, led4Durumu);
        Serial.print("LED 4 Durumu: ");
        Serial.println(led4Durumu ? "AÇIK" : "KAPALI");
        break;

      case '5':
        led5Durumu = !led5Durumu;
        digitalWrite(led5Pin, led5Durumu);
        Serial.print("LED 5 Durumu: ");
        Serial.println(led5Durumu ? "AÇIK" : "KAPALI");
        break;

      default:
        
        Serial.println("Geçersiz tuş. Lütfen 1-5 arası bir rakam girin.");
        break;
    }
  }
}
