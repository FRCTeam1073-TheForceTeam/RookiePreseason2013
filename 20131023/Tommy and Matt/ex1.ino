#include "led.h"
#define TIME_ON 50 // ms

int delayTime = 1000; // ms
int LED = 3;
int chooseLED = 2;
int isError = 0;

void setup() {
  Serial.begin(9600);
    setupLed(GREEN_LED);
    setupLed(ONBOARD_LED);
}

void loop() {
  if(chooseLED == 1){
    LED = 13;
    }
  if(chooseLED == 2){
    LED = 3;
    }
    
  while(Serial.available() > 0) {
    int input = Serial.parseInt();
    if(input == 1 || input == 2){
      chooseLED = input;
    }
    else{
      delayTime = input;
    }
    if (Serial.read() == '\n') {
      // do nothing, just munch the carriage return
    }
  }
  flashLed(delayTime);
}
