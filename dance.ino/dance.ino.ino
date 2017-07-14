#include <Servo.h>

Servo servoLeft; 
Servo servoRight;


void setup() 
{
  // put your setup code here, to run once:
  servoLeft.attach(13);
  servoRight.attach(12); 
}

void loop(){
  forward(2150);
  backward(2150);
  turnLeft(500);
  stopnow();
  forward(1500);
  backward(1500);
  stopnow();
  turnRight(500);
  forward(1500);
  backward(1500);
  stopnow();
  turnLeft(2000);
  stopnow();
  stoptime(750);
  turnLeft(500);
  turnRight(1000);
  turnLeft(500);
  turnRight(500);
  turnLeft(1000);
  turnRight(500);
  
}

void stopnow(){
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  
}

void stoptime(int time){
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  delay(time);
  
}

void turnLeft(int time)                      // Left turn function
{
  servoLeft.writeMicroseconds(1300);         // Left wheel clockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(time);                               // Maneuver for time ms
}


void turnRight(int time)                     // Right turn function
{
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(time);                               // Maneuver for time ms
}

void backward(int time)                      // Backward function
{
  servoLeft.writeMicroseconds(1300);         // Left wheel clockwise
  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(time);                               // Maneuver for time ms
}

void forward(int time)                     // Forward function
{
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(time);                               // Maneuver for time ms
}



/*
void loop() 
{
  servoLeft.writeMicroseconds(1690);         //forward
  servoRight.writeMicroseconds(1300); 
  delay(2000);
  
  servoLeft.writeMicroseconds(1290);         //backward
  servoRight.writeMicroseconds(1700);
  delay(2000);
  
  
  servoLeft.writeMicroseconds(1690);        //forward
  servoRight.writeMicroseconds(1300); 
  delay(2000);

  
  servoLeft.writeMicroseconds(1290);        //backward
  servoRight.writeMicroseconds(1700);
  delay(2000);       // 1.3 ms -> clockwise
  //1.7 ms

  servoLeft.writeMicroseconds(1490);
  delay(1000);
  servoLeft.writeMicroseconds(1690);
  delay(2500);
  servoRight.writeMicroseconds(1300);
  delay(2500);
 // 1.7 ms -> counterclockwise       // 1.3 ms -> clockwise
 
}

  */
  

  
  
