int ir=D7;
int led=D5;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir,INPUT);
    pinMode(led,OUTPUT);
    Serial.begin(9600);
    
}

void loop() {
  // put your main code here, to run repeatedly:
  int irvalue=digitalRead(ir);
  if(irvalue==LOW)
  {
    Serial.println("LOW");
    digitalWrite(led,HIGH);
  }
  else
  {
    Serial.println("HIGH");
    digitalWrite(led,LOW);
  }
delay(100);
}
