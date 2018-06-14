/*
 * LCD display demo
 */
#include <LiquidCrystal.h> // Load the library

const int RS = 12; // Assign RS to pin 12
const int E = 11; // Assign E to pin 11
const int D4 = 5; // Assign D4 to pin 5
const int D5 = 4; // Assign D5 to pin 4
const int D6 = 3; // Assign D6 to pin 3
const int D7 = 2; // Assign D7 to pin 2

LiquidCrystal LCD(RS, E, D4, D5, D6, D7); // Initiate LCD object (?)

void setup() {
  LCD.begin(16, 2); // Load LCD
  LCD.home(); // Set cursor to 0, 0
  LCD.print("Hello World"); // Display "Hello World"
  LCD.setCursor(0, 1); // Set cursor to 0, 1
  LCD.print("16 x 2 LCD"); // Display "16 x 2 LCD"
}

void loop() {} // Nothing interesting here :)
