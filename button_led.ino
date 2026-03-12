int val =0; //Our global bool variable
void setup() {
  pinMode(13, OUTPUT);//Sets pin 13 to be an output
  pinMode(7,INPUT);//Sets pin 7 to be an input; from the button
}

void loop() //Our while loop
{
    val = digitalRead(7); //digitalRead tells val to be a true or false bool
    digitalWrite(13,val); //digitalWrite tells the LED to be ON or OFF based off of said bool
}
