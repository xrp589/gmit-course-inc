#include <Servo.h>
//Ronan O Boyle
//GMIT lab 5
// 05-03-2021
//Servomotor class
class servoActuator {
  private:
    byte pinServo;
    unsigned long timeOn;
      Servo theservo;
  public:
 
    servoActuator(byte pinServo,unsigned long interval) {
      this->pinServo = pinServo;
      this->timeOn = interval;
      pinMode(pinServo, OUTPUT);
    }
 
    void setAngle(int angle){
      theservo.attach(pinServo);
      angle = map (angle, 0, 1023, 0, 180); //value range between 0 & 180 degree
      theservo.write(angle);  //Set values
      delay(timeOn);
     
     
     }
};
