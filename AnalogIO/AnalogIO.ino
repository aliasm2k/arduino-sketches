/*
 * Analog Input / Output demo
 */

const int PRESET = A0; // Assign preset to pin A0
const int LED = 3; // Assign LED to pin 3
int input = 0; // Initialize preset to 0

void setup() {
  pinMode(LED, OUTPUT); // Set LED pin to output
}

void loop() {
  input = analogRead(PRESET); // Read resistor value from preset
  analogWrite(LED, input/4); // Set LED brightness based on input
  delay(500); // Wait 500 ms.
}
