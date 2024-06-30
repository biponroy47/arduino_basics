#include <Servo.h>
Servo servo;
int pos;

void setup() {
  Serial.begin(9600);
  servo.attach(9);
}

void loop() {
  for(pos = 0; pos <= 180; pos++){
    servo.write(pos);
    //Serial.println(pos);
    delay(10);
  }
  for(pos = 180; pos >= 0; pos--){
    servo.write(pos);
    //Serial.println(pos);
    delay(10);
  }
}
