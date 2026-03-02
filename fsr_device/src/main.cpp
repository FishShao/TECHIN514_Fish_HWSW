#include <Arduino.h>

const int FSR_PIN = A0;  // XIAO ESP32C3 的 A0 = GPIO2
const int MAX_ADC = 4095;

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);
  Serial.println("FSR402 test start...");
}

void loop() {
  int fsrValue = analogRead(FSR_PIN);
  float pressure_pct = (float)fsrValue / MAX_ADC * 100.0;
