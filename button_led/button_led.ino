int led_pin = 12;
int button = 2;
void setup()
{
  pinMode(led_pin, OUTPUT);
  pinMode(button, INPUT);
}

void loop(){
  if(digitalRead(button) == LOW){
  	digitalWrite(led_pin, LOW);
  }
  else {
  	digitalWrite(led_pin, HIGH);
  }
}