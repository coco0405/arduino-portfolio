int val=0;
void setup() {
    pinMode (A0, INPUT); //Sets pin A0 (potentometer) to be an input
    pinMode(13, OUTPUT); //Sets pin 13 to be an output
}

void loop()
{
    val = analogRead(A0); //Read analog input from pin A0 (0–1023)
    analogWrite(13,val/4); //Write PWM output to pin 13 (0–255)
}
