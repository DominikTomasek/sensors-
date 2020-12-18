int buzzer=13;
int ir =7;
void setup() {
pinMode (buzzer,OUTPUT);
pinMode(7,INPUT);
Serial.begin(9600);

}

void loop() {
ir =digitalRead(7);
if (ir== HIGH ){

noTone(buzzer);
 Serial.println ("CLEAN");
}


else
{
tone(buzzer,1000);
Serial.println ("OBSTACLE");

}
}
