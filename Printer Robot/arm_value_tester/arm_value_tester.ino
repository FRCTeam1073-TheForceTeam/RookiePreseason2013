//use this code to determine values for given servos
#define <Servo.h>
Servo mid, bot, turret, claw;
int statusled = 11;
char serialval = 0;
//servo vals
int botval = 100;
int midval = 100;
int turretval = 100;
int clawval = 20;
void setup(){
  mid.attach(2);
  bot.attach(4);
  turret.attach(5);
  claw.attach(7);
  Serial.begin(9600);
  pinMode(statusled, OUTPUT);
  digitalWrite(statusled, HIGH);
}
void loop(){
  if(Serial.available()){
    ;}
  serialval = Serial.read();
  
  if(serialval == 'q'){
    botval++;
  }
  if(serialval == 'w'){
    midval++;
  }
  if(serialval == 'e'){
    turretval++;
  }
  if(serialval == 'r'){
    clawval++;
  }
  if(serialval == 'a'){
    botval - 1;
  }
  if(serialval == 's'){
    midval - 1;
  }
  if(serialval == 'd'){
    turretval - 1;
  }
  if(serialval == 'f'){
    clawval - 1;
  }
  if(serialval == 'z'){
    Serial.print("botval=");
    Serial.println(botval);
    delay(100);
  }
 if(serialval == 'x'){
    Serial.print("midval =");
    Serial.println(midval);
    delay(100);
  }
 if(serialval == 'c'){
    Serial.print("turretval =");
    Serial.println(turretval);
    delay(100);  
  }
 if(serialval == 'v'){
    Serial.print("clawval =");
    Serial.println(clawval);
    delay(100);
  } 
  
  bot.write(botval);
  mid.write(midval);
  turret.write(turretval);
  claw.write(clawval);
}
  
