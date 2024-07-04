#define ENABLE 5
#define DIRA 3
#define DIRB 4

void setup() {
  pinMode(ENABLE, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("forward");
  analogWrite(ENABLE, 255);
  digitalWrite(DIRA, HIGH);
  digitalWrite(DIRB, LOW);
  delay(5000);
  //analogWrite(ENABLE, LOW);
  //delay(2000);
  Serial.println("reverse");
  digitalWrite(DIRA, LOW);
  digitalWrite(DIRB, HIGH);
  //analogWrite(ENABLE, 255);
  delay(5000);
  //analogWrite(ENABLE, LOW);
}
