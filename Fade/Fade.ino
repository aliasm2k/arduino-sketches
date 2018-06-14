/*
 * Analog output demo
 * Fade LED
 */

const int LED = 3; // Assign LED to pin 3

void setup() {
  pinMode(LED, OUTPUT); // Set pin mode as output
}

void loop() {
  // Only for loop works; tried while loop failed.

  // Fade in
  for (int brightness = 0; brightness < 255; brightness++) {
    analogWrite(LED, brightness); // Write current value of brightness
    delay(10); // Wait 10 ms (.1 sec)
  }

  // Fade out
  for (int brightness = 255; brightness > -1; brightness--) {
    analogWrite(LED, brightness); // Write current value of brightness
    delay(10); // Wait 10 ms (.1 sec)
  }
}
