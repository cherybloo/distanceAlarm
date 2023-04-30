#include <Arduino.h>
#define echoPin 1
#define trigPin 2
#define alarm 3

int distance;

void setup() {
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  distance=(pulseIn(echoPin,HIGH)/58)*10;
  if(distance<=500){
    tone(alarm,distance);
  }
  else{
    noTone(alarm);
  }
  delay(1000);
}