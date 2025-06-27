void setup(){
  //Set the LED to output
  pinMode(12,OUTPUT);
  
}

void loop(){
  //make the LED blink
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
  
}