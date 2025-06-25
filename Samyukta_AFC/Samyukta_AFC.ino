void setup() {
  //Set LED on board to OUTPUT
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, Low);
  delay(1000);
}