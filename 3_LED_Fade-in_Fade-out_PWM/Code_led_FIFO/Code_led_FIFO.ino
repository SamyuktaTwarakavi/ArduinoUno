//LED fade in-fade out algorithm
//Setup: Gnd connected to LED, LED connected to 220 Ohms resistor and resistor connected to PWM pin(11)
#define LED_PIN 11
void setup() {
	pinMode(LED_PIN, OUTPUT);
  	analogWrite(LED_PIN, 0);
}

void loop(){
//Fade in algorithm using PWM(Pulse Width Modulation) changing from 0 to 255 with a delay of 10 ms
//Total time for 1 loop completion~2560 ms
  	for(int i=0; i<=255; i++){
    	analogWrite(LED_PIN, i);
        delay(10);
    }
//Fade out algorithm using PWM(Pulse Width Modulation) changing from 255 to 0 with a delay of 10 ms
//Total time for 1 loop completion~2560 ms
  	for(int i=255; i>=0; i--){
    	analogWrite(LED_PIN, i);
        delay(10);

    }

  
}