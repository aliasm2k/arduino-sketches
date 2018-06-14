/*
 * Servo demo
 * Rotate servo motor by 90 and 45 degrees
 */

#include<Servo.h> // Include library

const int SERVO = 3; // Assign pin 3 to servo
Servo s; // Create object (hmm?) s for servo

void setup() {
  s.attach(SERVO); // Attach s to pin 3
}

void loop() {
  s.write(45); // Rotate servo by 45 degrees
  delay(1000); // Wait 1000 ms (1 sec)

  s.write(90); // Rotate servo by 90 degrees
  delay(1000); // Wait 1000 ms (1 sec)
}
