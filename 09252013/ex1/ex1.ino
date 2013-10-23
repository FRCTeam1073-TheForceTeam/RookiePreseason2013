#include "led.h"

int delayTime = 500; // ms

void setup() {
  Serial.begin(9600);
  ???
}

void loop() {
  while(Serial.available() > 0) {
    delayTime = Serial.parseInt();
    if (Serial.read() == '\n') {
      // do nothing, just munch the carriage return
    }
  }
  ???
}
