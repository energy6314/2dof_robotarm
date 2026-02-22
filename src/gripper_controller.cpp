// Import necessary libraries
#include <Servo.h>

// Create servo object
Servo gripperServo;

// Define pin for the servo motor
const int servoPin = 9;

void setup() {
  // Attach the servo to the pin
  gripperServo.attach(servoPin);
}

void loop() {
  // Example code to control the gripper
  // Open the gripper
  gripperServo.write(0); // Position 0 for open
  delay(1000); // Wait for 1 second

  // Close the gripper
  gripperServo.write(90); // Position 90 for close
  delay(1000); // Wait for 1 second
}