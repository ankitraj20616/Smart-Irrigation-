int sensorInputPin = A1;
int Button=8;
int sensorData;
int sensorDigitalData;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(Button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(Button) == HIGH){
    sensorData = analogRead(sensorInputPin);
    sensorDigitalData = map(sensorData, 0, 1023, 255, 0);
    Serial.println(sensorDigitalData);
    delay(200);
  }
  

  // digitalWrite(13, LOW);
  // delay(500);
}
