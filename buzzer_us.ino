#define trigPin 13
#define echoPin 12
#define buzzer 5
int sound = 250;
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;


  if (distance <= 30) {
    sound = 250;
}
  if (distance < 25) {
      ;
      sound = 260;
}
  if (distance < 20) {
      
      sound = 270;

  }
  if (distance < 15) {
    
    sound = 280;
}
  if (distance < 10) {
 
    sound = 290;
}
  
  if (distance < 5) {
    
    sound = 300;
}
  

  if (distance < 4 || distance <= 0){
    Serial.println("Out of range");
    noTone(buzzer);
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
    tone(buzzer, sound);

  }
  delay(500);
}
