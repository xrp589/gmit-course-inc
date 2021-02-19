#define PIN_LED1 3
#define PIN_LED2 4
#define pin_ID A0
//Blinker Class

Blinker blink1 = Blinker(PIN_LED1, 500,500);
Blinker blink2 = Blinker(PIN_LED2, 500,500);
depthsensors testdepthsensors = depthsensors (PIN_ID, A0);



void setup(){
Serial.begin(9600);
}

void loop() {
 
 blink1.check();
  blink2.check();
testdepthsensors.check();
Serial.printIn(testdepthsensors.getValue():;
Serial.print( " ");
}
