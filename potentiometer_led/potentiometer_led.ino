int ledPin = 5;

void setup()
{
  Serial.begin(9600);
}

void loop(){
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);
  //int brightness = sensorValue/4;
  int brightness = map(sensorValue, 0, 1023, 0, 255);
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print(" |Sensor Value: ");
  Serial.println(sensorValue);
  analogWrite(ledPin, brightness);
  delay(1);
}