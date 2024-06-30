const int SW_PIN = 2;
const int X_PIN = A1;
const int Y_PIN = A2;

void setup() {
  pinMode(SW_PIN, INPUT);
  digitalWrite(SW_PIN, HIGH);
  Serial.begin(9600);
}

void loop() {
  Serial.print("Switch: ");
  Serial.print(digitalRead(SW_PIN));
  Serial.print(", X axis: ");
  Serial.print(analogRead(X_PIN));
  Serial.print(", Y axis: ");
  Serial.println(analogRead(Y_PIN));
  delay(100);
}
