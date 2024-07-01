int tDelay = 50;
int latchPin = 11;  //output register clock
int clockPin = 9;   // shift register clock
int dataPin = 12;   //input

byte leds = 0;

void updateShiftRegister() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, leds);
  digitalWrite(latchPin, HIGH);
}

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  leds = 0;
  updateShiftRegister();
  delay(tDelay);
  for(int i = 0; i < 8; i++){
    bitSet(leds, i);
    updateShiftRegister();
    delay(tDelay);
    bitClear(leds, i);
    delay(tDelay);
  }
}
