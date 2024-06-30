int ledPin = 2;
int buttonOn = 7;
int buttonOff = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonOn, INPUT_PULLUP);
  pinMode(buttonOff, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(buttonOn) == LOW) digitalWrite(ledPin, HIGH);
  if(digitalRead(buttonOff) == LOW) digitalWrite(ledPin, LOW);
}
