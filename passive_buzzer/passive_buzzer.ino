#include "pitches.h"
int buzzerPin = 8;
int melody[] = { NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6 };
int duration = 50;

void setup() {
}

void loop() {
  for (int i = 0; i < 8; i++) {
    tone(buzzerPin, melody[i], duration);
    delay(duration);
  }
}
