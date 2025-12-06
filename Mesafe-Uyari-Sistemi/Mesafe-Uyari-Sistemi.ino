#define led_r 2
#define led_g 3
#define led_b 4
#define buzzer 5
#define switch_pin 6

#include <NewPing.h>

#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void ledsOff() {
  digitalWrite(led_r, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_b, LOW);
  digitalWrite(buzzer, LOW);
}

void setup() {
  Serial.begin(9600);
  
  pinMode(led_r, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(led_b, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  pinMode(switch_pin, INPUT); 
  
  digitalWrite(led_r, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_b, LOW);
  digitalWrite(buzzer, LOW);
}

void loop() {
  int distance = sonar.ping_cm();
  
  Serial.print("Ping: ");
  Serial.print(distance);
  Serial.println("cm");
  
  ledsOff();
  
  if (distance == 0 || distance > 50) {
    digitalWrite(led_b, HIGH);
    
  } else if (distance > 20) {
    digitalWrite(led_g, HIGH);
  } else {
    digitalWrite(led_r, HIGH);

    if (digitalRead(switch_pin) == HIGH) {
      digitalWrite(buzzer, HIGH);
    }
  }
  
  delay(50);
}
