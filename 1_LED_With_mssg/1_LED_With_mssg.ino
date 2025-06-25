void setup(){
  Serial.begin(9600);
  Serial.println("hello");
  pinMode(13,OUTPUT);
  
}

void loop(){
  Serial.println("in the loop");
  delay(200);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(100);
  
}