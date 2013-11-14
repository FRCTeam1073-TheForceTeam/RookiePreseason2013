
int theLed = ONBOARD_LED;

void setupLed(int whichLed) {
  pinMode(whichLed, OUTPUT);
}

void flashLed(int dtime) {
  digitalWrite(LED, HIGH);
  delay(TIME_ON);
  digitalWrite(LED, LOW);
  delay(dtime);
}
