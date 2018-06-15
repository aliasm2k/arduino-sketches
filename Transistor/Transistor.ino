/*
 * NPN Transistor demo
 */

const int NPN = 2; // Assign transistor to pin 2

void setup() {
  pinMode(NPN, OUTPUT); // Set transistor pin as output
}

void loop() {
  digitalWrite(NPN, HIGH); // Switch on LED
  delay(1000); // Wait 1000 ms (1 sec)

  digitalWrite(NPN, LOW); // Switch off LED
  delay(1000); // Wait 1000 ms (1 sec)
}
