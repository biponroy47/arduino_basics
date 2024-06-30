const int ledPin = 7;
const int switchPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int digitalVal = digitalRead(switchPin);
  Serial.println(digitalVal);
  if (digitalVal == LOW) digitalWrite(ledPin, HIGH);
  else digitalWrite(ledPin, LOW);
}
