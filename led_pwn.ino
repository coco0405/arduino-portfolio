int val =0;
void setup() {
  pinMode(13, OUTPUT);//Sets pin 13 to be an output
}

void loop() 
{
    val = analogRead(A3); //Read analog input from pin A3 (0–1023)
    analogWrite(13,val/4); //Write PWM output to pin 13 (0–255)
}
