/*
 * RGB LED Demonstration
 * Produces different colors
 */

const int RED = 11; // Assign red to pin 11
const int GREEN = 10; // Assign green to pin 10
const int BLUE = 9; // Assign blue to pin 9

void setup() {
  pinMode(RED, OUTPUT); // Set pin red to output
  pinMode(GREEN, OUTPUT); // Set pin green to output
  pinMode(BLUE, OUTPUT); // Set pin blue to output
}

void loop() {
  analogWrite(RED, 50); // Set red 50
  analogWrite(GREEN, 50); // Set green 50
  analogWrite(BLUE, 200); // Set blue 200
  delay(1000); // Wait 1000 ms (1 sec)

  analogWrite(RED, 100); // Set red 100
  analogWrite(GREEN, 100); // Set green 100
  analogWrite(BLUE, 100); // Set blue 100
  delay(1000); // Wait 1000 ms (1 sec)
}
