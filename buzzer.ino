void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(13, 10000);  //1000-dB values
  delay(5000);
  noTone(13);
  delay(3000);
}
