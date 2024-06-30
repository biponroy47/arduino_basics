int buzzerPin = 11;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int sound_duration = 500;
  for(int i = 0; i < 20; i++){
    if(i < 5) sound_duration = 500;
    else if(i < 10) sound_duration = 300;
    else sound_duration = 100;
    analogWrite(buzzerPin, 1);
    delay(sound_duration);
    analogWrite(buzzerPin, 0);
    delay(sound_duration);
  }
}
