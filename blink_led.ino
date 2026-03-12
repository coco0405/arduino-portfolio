void setup() {
  pinMode(13, OUTPUT);//Sets pin 13 to be an output
}

void loop() {
  for (int i = 0; i <5; i++) //Our initalizer, condition, modifer
  {
  digitalWrite(13, HIGH); //Turn the LED ON
  delay(1000); //Wait for 1 second
  digitalWrite(13, LOW); //Turn the LED OFF
  delay(1000); //Wait for 1 second
  }
  while(true){
    //Prevents further blinking after 5 times since loop() runs indefinately
  }
}
