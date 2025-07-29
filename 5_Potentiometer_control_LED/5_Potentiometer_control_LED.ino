#define POTENTIOMETER_PIN A5
#define LED_PIN 11
int ledBrightness=0;
int potValue=0;
void setup(){
	Serial.begin(9600);
 	pinMode(LED_PIN, OUTPUT);
  
}

void loop(){
	Serial.println(analogRead(POTENTIOMETER_PIN));
  	potValue=analogRead(POTENTIOMETER_PIN);
  	ledBrightness=0+(potValue-0)/(1023.0-0)*255;
  	Serial.println(0+(potValue-0)/(1023.0-0)*255);
  	analogWrite(LED_PIN, ledBrightness);
      
}
  
