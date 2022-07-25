# IOT
https://wokwi.com/projects/333796636268429907 - LED</br>
https://wokwi.com/projects/333802415714206291 - 3 LED</br>
https://wokwi.com/projects/333801005399409236 - RGB Led</br>
https://wokwi.com/projects/322062421191557714 - LIQUID CRYSTAL</br>
https://wokwi.com/projects/334977803083579987 - Servo Motor(Angluar motion)</br>
https://wokwi.com/projects/335699264816546387 - Servo Motor + Pushbutton</br>
https://wokwi.com/projects/334978360097636947 - (Circular Motion)</br>
https://wokwi.com/projects/334981582917993044 - Servo Motor + Sliding Potentiometer</br>
https://wokwi.com/projects/335065356773098066 - Buzzer</br>
https://wokwi.com/projects/335069089200341587 - Buzzer + Pushbutton_</br>
https://wokwi.com/projects/335068760545165907 - Buzzer + Pushbutton_(Long Press)</br>
https://wokwi.com/projects/335616316076458578 - Buzzer + Pushbutton + LED</br>
https://wokwi.com/projects/335071206921208402 - UltraSonic Sensor</br>
https://wokwi.com/projects/335071463215202900 - UltraSonic Sensor(extra)</br>
https://wokwi.com/projects/335073264458007124 - Buzzer + UltraSonic Sensor</br>
https://wokwi.com/projects/335075055329346132 - Buzzer + UltraSonic Sensor(Varying Instensity)</br>
https://wokwi.com/projects/335698029159907924 - Buzzer + Ultrasonic Sensor + LED</br>
https://wokwi.com/projects/335701186493547091 - Potentiometer + LED</br>
https://wokwi.com/projects/337602684471214674 - DHT22(Humidity and Temperature sensor)</br>
https://wokwi.com/projects/337604296859189842 - DHT22 + LCD(Humidity and Temperature sensor)</br>



ESP32</br>
https://wokwi.com/projects/336966830711112275 - LED</br>
https://wokwi.com/projects/336967978479256147 - 3 LED</br>
 
 
//HARDWARE
          ULTRASONIC_SENSOR

const int trigPin = 13; //D7
const int echoPin = 12; //D6

long duration;
float distanceCm;
float distanceInch;

void setup() {
   Serial.begin(9600); // Starting Serial Terminal
}

void loop() {
   long duration, inches, cm;
   pinMode(trigPin, OUTPUT);
   digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(1000);
}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}
