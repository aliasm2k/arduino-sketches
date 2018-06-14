/*
 * Digital Input / Output
 * Switch an LED on or off
 */

const int BUTTON = 2; // Assign button to pin 2
const int LED = 3; // Assign LED to pin 3
int state = LOW; // Initialize button state as LOW

void setup() {
  pinMode(LED, OUTPUT); // Set LED as output
  pinMode(BUTTON, INPUT); // Set button as input
}

void loop() {
  state = digitalRead(BUTTON);

  if (state == HIGH) {
    digitalWrite(LED, HIGH); // Swicth on LED on button press
  } else {
    digitalWrite(LED, LOW); // Switch off LED on button release
  }
}
