#include <Arduino.h>
 int off = 0;
 int dull = 50;
 int bright= 125;
 int brighter=200;
 int brightest =255;
 
 int pinred=3;
 int delayTIME=500;



void setup() {
  pinMode(pinred,OUTPUT);
}

void loop() {

analogWrite(pinred,off);
delay(delayTIME);

analogWrite(pinred,dull);
delay(delayTIME);

analogWrite(pinred,bright);
delay(delayTIME);

analogWrite(pinred,brighter);
delay(delayTIME);

analogWrite(pinred,brightest);
delay(delayTIME);



}