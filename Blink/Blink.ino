/*
 * The Arduino Hello World! sketch
 * Blink an LED
 */

const int LED=2; // Assign pin 2 to LED

void setup() {
  pinMode(LED, OUTPUT); // Set pin mode to output
}

void loop() {
  digitalWrite(LED, HIGH); // Turn on LED
  delay(1000); // Wait 1000 ms (1 sec)
  digitalWrite(LED, LOW); // Turn off LED
  delay(1000); // Wait 1000 ms (1 sec)
}
