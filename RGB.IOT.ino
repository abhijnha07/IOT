int red = D1;
int green = D6;
int blue = D7;
//GROUND IS CONNECTED TO 3V 
void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
}

void loop() {
  displayColor(0b100); //RED
  delay(1000);
  displayColor(0b010); //GREEN
  delay(1000);
  displayColor(0b001); //BLUE
  delay(1000);
  displayColor(0b101); //MAGENTA
  delay(1000);
  displayColor(0b011); //CYAN
  delay(1000);
  displayColor(0b110); //YELLOW
  delay(1000);
  displayColor(0b111); //WHITE
  delay(1000);
}

void displayColor(byte color) {
  digitalWrite(red, !bitRead(color, 2));
  digitalWrite(green, !bitRead(color, 1));
  digitalWrite(blue, !bitRead(color, 0));
}
