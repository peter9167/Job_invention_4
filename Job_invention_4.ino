#include <Servo.h>

Servo servo;

int servoPin = 9;
int motorPin = 8;
int btnPin = 2;

void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  pinMode(btnPin, INPUT);
  servo.attach(servoPin);
} 


void loop() 
{ 
  int btn = digitalRead(btnPin);
  if(btn == 1){
    digitalWrite(motorPin, HIGH);
    delay(20);
    digitalWrite(motorPin, LOW);
    servo.write(25);
    delay(1000);
    servo.write(120);
    delay(1000);
  }
}
