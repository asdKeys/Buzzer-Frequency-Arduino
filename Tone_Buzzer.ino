//pins
const int potPin = A0;
const int buzzerPin = 9;

void setup() {
  //stes pins to an input or output
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  //reads potentiometer value and changes buzzer frequency 
  int potValue = analogRead(potPin);
  int frequency = map(potValue, 0, 1023, 50, 4000);

  //sets the buzzer to the right frequency
  tone(buzzerPin, frequency);

  //short delay to stop 
}