/* This code is for a circuit that makes LEDs 
change colors depening on the potentiometer value and 
their intensity and rate of blinking also depends on the 
potentiometer value. 
*/

//Defining constants and variables 
#define POTENTIOMETER_PIN A5
#define LED_PIN_R 11
#define LED_PIN_Y 10
#define LED_PIN_G 9

int ledBrightness=0;
int potValue=0;
int timeDelay=100;

//Setting up pin configurations
void setup(){
	Serial.begin(9600);
 	pinMode(LED_PIN_R, OUTPUT);
  	pinMode(LED_PIN_Y, OUTPUT);
  	pinMode(LED_PIN_G, OUTPUT);
}

/*Assigning values to set the LED brightness based on the 
potentiometer values*/
void loop(){
	Serial.println(analogRead(POTENTIOMETER_PIN));
  	potValue=analogRead(POTENTIOMETER_PIN);
  	ledBrightness=0+(potValue-0)/(1023.0-0)*255;
/*Time delay negatively correlated to the 
  potentiometer value, adjusts blinking(red)*/ 
 	if (potValue<=338){
      	timeDelay=1000-(potValue-0)/(338.0-0)*(900);
  		analogWrite(LED_PIN_R, ledBrightness);
      	delay(timeDelay);
        analogWrite(LED_PIN_R, 0);
      	delay(timeDelay);
      	analogWrite(LED_PIN_Y, 0);
      	analogWrite(LED_PIN_G, 0);
      	
  }
 /*Time delay negatively correlated to the 
  potentiometer value, adjusts blinking(yellow)*/
  	else if (potValue<=675){
        timeDelay=1000-(potValue-338)/(675.0-338.0)*(900);
    	analogWrite(LED_PIN_Y, ledBrightness);
      	delay(timeDelay);
        analogWrite(LED_PIN_Y, 0);
        delay(timeDelay);
      	analogWrite(LED_PIN_R, 0);
      	analogWrite(LED_PIN_G, 0);
    	
  }
 /*Time delay negatively correlated to the 
  potentiometer value, adjusts blinking(green)*/
  	else{
    	analogWrite(LED_PIN_G, ledBrightness);
       	timeDelay=1000-(potValue-675)/(1023.0-675.0)*(900);
      	delay(timeDelay);
        analogWrite(LED_PIN_G, 0);
        delay(timeDelay);
      	analogWrite(LED_PIN_Y, 0);

      	analogWrite(LED_PIN_R, 0);
 
  }
    
}