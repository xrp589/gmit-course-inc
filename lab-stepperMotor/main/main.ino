

  #define PinA 8
  #define PinB 9
  #define PinC 10
  #define PinD 11
  #define AnlogRead Pin A0
  #define ForwardButton 2
  #define ReverseButton 3
  #define NUMBER_OF_STEPS_PER_REV 512

     int pinA;
     int pinB;
     int pinC;
     int pinD;


        int MotorSpeed = 0;
        int ClockWiseButtonState = 0;
        int CC_wiseButtonState = 0;


        



  void Forward(int a,int b,int c,int d){
    
          digitalWrite(pinA,a);
          digitalWrite(pinB,b);
          digitalWrite(pinC,c);
          digitalWrite(pinD,d);
  }
  
 void Reverse(int d,int c,int b,int a){
  

          digitalWrite(pinA,a);
          digitalWrite(pinB,b);
          digitalWrite(pinC,c);
          digitalWrite(pinD,d);
  }



    
  

  void StepForward(int delayValue){  
          Forward(1,0,0,0);
          delay(delayValue);
          Forward(1,1,0,0);
          delay(delayValue);
          Forward(0,1,0,0);
          delay(delayValue);
          Forward(0,1,1,0);
          delay(delayValue);
          Forward(0,0,1,0);
          delay(delayValue);
          Forward(0,0,1,1);
          delay(delayValue);
          Forward(0,0,0,1);
          delay(delayValue);
          Forward(1,0,0,1);
          delay(delayValue);
  }

     void StepReverse(int delayValue){  
          Reverse(1,0,0,0);
          delay(delayValue);
          Reverse(1,1,0,0);
          delay(delayValue);
          Reverse(0,1,0,0);
          delay(delayValue);
          Reverse(0,1,1,0);
          delay(delayValue);
          Reverse(0,0,1,0);
          delay(delayValue);
          Reverse(0,0,1,1);
          delay(delayValue);
          Reverse(0,0,0,1);
          delay(delayValue);
          Reverse(1,0,0,1);
          delay(delayValue);
  }
  void loop(){
    int rawValue = analogRead (A0);
      //map ADC (0-1023) to 5milliseconds to 100 milliseconds

      int delayValue = map (rawValue, 0, 1023, 5, 100);

      StepForward(delayValue);
  }
