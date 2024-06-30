#define RED 3
#define GREEN 5
#define BLUE 6


void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

int redValue;
int greenValue;
int blueValue;

void loop() {
  #define delayTime 10

  // for(int i = 0; i < 255; i++){
  //   analogWrite(RED, ++redValue);
  //   delay(delayTime);
  // }
  for(int i = 0; i < 255; i++){
    analogWrite(RED, --redValue);
    analogWrite(GREEN, ++greenValue);
    delay(delayTime);
  }
  for(int i = 0; i < 255; i++){
    analogWrite(GREEN, --greenValue);
    analogWrite(BLUE, ++blueValue);
    delay(delayTime);
  }
  for(int i = 0; i < 255; i++){
    analogWrite(BLUE, --blueValue);
    analogWrite(RED, ++redValue);
    delay(delayTime);
  }

}
