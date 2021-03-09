
//#include <Servo.h>
#define PIN_LED 2
#define PIN_ID A0
#define PIN_SERVO 9
//Ronan O Boyle
//GMIT lab 5
// 05-03-2021
//Create out object classes
//Blinker blinker(PIN_LED, 1000, 2000);
depthSensor testDepthSensor(PIN_ID, 2);
servoActuator theservo(PIN_SERVO, 2);


//int depthsensor = 0;
//int val;


void setup() {

  Serial.begin (9600);
}
void loop(){
//blinker.check();
testDepthSensor.check();
theservo.setAngle(testDepthSensor.getDepth());

Serial.println(testDepthSensor.getValue());
Serial.print("   ");
//Serial.print(depthSensor.getDepth());
}
