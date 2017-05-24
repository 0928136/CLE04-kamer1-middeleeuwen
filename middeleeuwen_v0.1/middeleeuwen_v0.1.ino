#include <functions.ino>
#include <levers.ino>
/**
 * Global Variables
 */
//Timing stuff
unsigned long currentTime;


//A total of 8 handles
int handlePins[] = {2,3,4,5,6,7};

//These handles need to be pulled down to have a correct code (the numbers point to the handlePorts Array).
bool rightHandles[] = {false,true,false,false,true,true};

//Variable to store wether the handles are completed
bool handlesCompleted = false;

void setup() {
  setupHandles();
  Serial.begin(9600);
}

void loop() {
  //Set the current time
  currentTime = millis();

  //Check if handles are Completed
  if(!handlesCompleted){
    
    //Check if handles are correct
    if(checkHandles()){
      handlesCompleted = true;
      Serial.println("You did it");
    }else{
      
    }
  }else{
    //Handles are correct.
    
  }

  //Check if sword is inserted


  //Check if sword was inserted and handler are completed
    //Open door

}


