


// the setup routine runs once when you press reset:
//class depthsensors{
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}
void loop (){
int sensorValue = analogRead(A0);
 float voltage = sensorValue * (5.0 / 1023.0);
 float distance  =-22.262*voltage + 60.65;  // formula that calulates voltage to distance on a graph 
 Serial.print("X,"); Serial.print(voltage); Serial.print(" ");
 Serial.println(" ");
 delay (400);

};



#define PIN_ID A0

/*
 * depthsensors CLASS DEFINITION
 */
class depthsensors{
  private:
    byte pinID;
    byte pinVal;
    

    unsigned long timeOn;
    unsigned long nextChangeTime = 0;
    int Val = 0; // variable to store the value read
    float voltage =10;
  public:
    depthsensors(byte pinval, unsigned long interval) {
      this->pinID = pinVal;
      this->timeOn = interval;
      

      pinMode(pinID, OUTPUT);
    }

    // Checks whether it is time to turn on or off the LED.
    void check() {
      unsigned long currentTime = millis();

      if(currentTime >= nextChangeTime) {

       


          
          nextChangeTime = currentTime + timeOn;
        }
        
        }

        float getValue(){
      }
    
};


 
