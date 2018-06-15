/*
 * Buzzer demo
 * Buzzer with blinking light
 */

const int BUZZER = 3; // Assign buzzer to pin 3

void setup() {
  pinMode(BUZZER, OUTPUT); // Set pin 3 to output
}

void loop() {
  digitalWrite(BUZZER, HIGH); // Beep buzzer and switch on LED
  delay(200); // Wait 200 ms (.2 sec)

  digitalWrite(BUZZER, LOW); // Switch off buzzer and LED
  delay(200); // Wait 200 ms (.2 sec)
}
