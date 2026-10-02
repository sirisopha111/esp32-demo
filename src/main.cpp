#include <Arduino.h>

#define LED_PIN 2

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  Serial.println("System Initialized!");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED ON");
  delay(200);
  
  digitalWrite(LED_PIN, LOW);
  Serial.println("LED OFF");
  delay(200);
}