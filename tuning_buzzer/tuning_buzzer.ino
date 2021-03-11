
  // put your setup code here, to run once:
int frequency=1000; //Specified in Hz
int buzzer=2; 
void setup()
{
pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tone(buzzer, frequency);
delay(3000);
noTone(buzzer);
delay(3000); 
}
