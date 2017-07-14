#include <Servo.h>                           // Include servo library

Servo servoLeft;                             // Declare left servo signal
Servo servoRight;                            // Declare right servo signal

void setup()                                 // Built in initialization block
{
 servoLeft.attach(13);                      // Attach left signal to pin 13
 servoRight.attach(12);                     // Attach right signal to pin 12
}

void loop()                                  // Main loop auto-repeats
{
 servoLeft.writeMicroseconds(1700);         // 1.7 ms -> counterclockwise
 servoRight.writeMicroseconds(1300);        // 1.3 ms -> clockwise
 delay(500);
 servoLeft.writeMicroseconds(1300);         // 1.7 ms -> counterclockwise
 servoRight.writeMicroseconds(1700);        // 1.3 ms -> clockwise
 delay(500);
 servoLeft.writeMicroseconds(1300);         // 1.7 ms -> counterclockwise
 servoRight.writeMicroseconds(1300);        // 1.3 ms -> clockwise
 delay(2000);
}
