const int ldrPin=A0;
void setup() {
  Serial.begin(9600);
  pinMode(ldrPin,INPUT);
}
void loop() {
  int rawData = analogRead(ldrPin);   
  Serial.println(rawData);
  delay(1000);
}
  // put your main code here, to run repeatedly:
