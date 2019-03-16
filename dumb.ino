#include <Servo.h>

#define IN1
#define IN2
#define IN3
#define IN4
#define SP1
#define SP2
String str;

void setup() {
  Serial.begin(9600);
  pinMode(IN1, output);
  pinMode(IN2, output);
  pinMode(IN3, output);
  pinMode(IN4, output);
  pinMode(SP1,output);
  pinMode(SP2,output);
}

void advance(){
  Serial.println("UP");
  analogWrite(SP1,120);
  analogWrite(SP2,120);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN4, LOW);
}
void goLeft(){
  Serial.println("LEFT");
  analogWrite(SP1,20);
  analogWrite(SP2,130);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN4, LOW);
}
void goRight(){
  Serial.println("Right");
  analogWrite(SP1,130);
  analogWrite(SP2,20);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN4, LOW);
}
void goBack(){
  Serial.println("DOWN");
  analogWrite(SP1,120);
  analogWrite(SP2,120);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN3, LOW);
}
void stop(){
  Serial.println("Stop");
  digitalWrite(IN1, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(SP1, 0);
  analogWrite(SP2, 0);
}

void loop() {
  if(Serial.available()){
    str=Serial.readString();
    if(str=="AD") advance();
    else if(str=="GB") goBack();
    else if(str=="GL") goLeft();
    else if(str=="GR") goRight();
    else if(str=="ST") stop();
  }

}
