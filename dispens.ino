#include <Servo.h>
Servo myservo;
int val =0; //Our global bool variable
void setup() {
  myservo.attach(9); //pinMode but for servos, assigning 9 to be our servo output
  myservo.write(0); //Initalizing our current servo position to be at 0deg
  pinMode(7,INPUT);//Sets pin 7 to be an input, from the button
}

void loop() //Our while loop
{
    val = digitalRead(7); //digitalRead tells val to be a true or false bool
    if (val == true)// If and only if button is pressed, we turn the servo
    {
    myservo.write(90); //digitalWrite tells the servo to turn 90deg to open the hole
    delay(1000); //Wait for 1 second to dispense the rice
    myservo.write(0); //Return back to starting position to close the hole
    }
}

// Problem: Manually scooping rice multiple times is repetitive and inefficient.
// Solution: Open/close a servo-controlled container to let gravity dispense rice automatically.
// Note: Physical assembly wasn’t done due to mechanical constraints (container support + slider).
