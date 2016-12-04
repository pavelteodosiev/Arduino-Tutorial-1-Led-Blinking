int led = 12;

void setup(){
  pinMode(led, OUTPUT);
 
}

void loop(){
  digitalWrite(led, HIGH); //turn the led on
  delay(1000); //wait 1 second
  digitalWrite(led, LOW); //turn the led off
  delay(1000); //wait 1 second
}

