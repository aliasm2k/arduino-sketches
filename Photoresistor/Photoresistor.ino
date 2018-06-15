/*
 * Photoresistor demo
 * Displays resistance of photoresistor
 */
#include <LiquidCrystal.h> // Load the library

const int RS = 12; // Assign RS to pin 12
const int E = 11; // Assign E to pin 11
const int D4 = 5; // Assign D4 to pin 5
const int D5 = 4; // Assign D5 to pin 4
const int D6 = 3; // Assign D6 to pin 3
const int D7 = 2; // Assign D7 to pin 2
const int LDR = A0;
int ldr_reading = 0;

LiquidCrystal LCD(RS, E, D4, D5, D6, D7); // Initiate LCD object (?)

void setup() {
  ldr_reading = analogRead(LDR); // Read from LDR

  LCD.begin(16, 2); // Load LCD
  LCD.home(); // Set cursor to (0, 0)
  LCD.print("LDR Resistance:"); // Write Temprature on screen
  LCD.setCursor(0, 1); // Set cursor to (0, 1)
  LCD.print(String(ldr_reading) + String(" ohms")); // Write temprature value
}

void loop() {} // Nothing special here :)
