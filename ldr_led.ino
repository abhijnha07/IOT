int ldr=A0;//Set A0(Analog Input) for LDR.
int value=0;
int led=D1;
void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
value=analogRead(ldr);//Reads the Value of LDR(light).
Serial.println("LDR value is :");//Prints the value of LDR to Serial Monitor.
Serial.println(value);
if(value<50)
  {
    digitalWrite(led,HIGH);//Makes the LED glow in Dark.
  }
  else
  {
    digitalWrite(led,LOW);//Turns the LED OFF in Light.
  }
  delay(1000);
}
