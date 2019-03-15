#include <Servo.h>

#define IN1
#define IN2
#define IN3
#define IN4
#define SP1
#define SP2

void setup() {
  pinMode(IN1, output);
  pinMode(IN2, output);
  pinMode(IN3, output);
  pinMode(IN4, output);
}

void advance(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN4, LOW);
}
void goBack(){
  digitalWrite(IN2, HIGH);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN3, LOW);
}
void stop(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(SP1, 0);
  analogWrite(SP2, 0);
}

void loop() {

}
