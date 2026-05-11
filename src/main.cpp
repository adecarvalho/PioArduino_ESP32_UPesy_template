#include <Arduino.h>
#include <Wire.h>
#include <Ticker.h>

// const
const uint32_t PERIOD = 2000;
const uint8_t LED_INTERNAL_PIN = 13;

// prototypes
void action();

// obj
Ticker myTicker;

// var gloables

//************ */
void action()
{
  Serial.println("ESP32 action");
}
//************ */
void setup()
{
  Serial.begin(1152000);
  Wire.begin();
  //
  pinMode(LED_INTERNAL_PIN, OUTPUT);
  digitalWrite(LED_INTERNAL_PIN, 1);
  delay(500);
  digitalWrite(LED_INTERNAL_PIN, 0);
  //
  myTicker.attach_ms(PERIOD, action);
}
//************* */
void loop()
{
  // todo
}
