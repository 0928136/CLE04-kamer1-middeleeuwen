/**
 * Global Variables
 */
 
//A total of 8 handles
int handlePins = [1,2,3,4,5,6,7,8];

//These handles need to be pulled down to have a correct code (the numbers point to the handlePorts Array).
bool rightHandles = [false,true,false,true,false,true,false,true];

void setup() {
  setupHandles();
}

void loop() {
  

}

/**
 * Setup for the handles
 */
void setupHandles(){
  int arrayLength = sizeof(handlePins)/sizeof(int);
  for(int i = 0; i < arraylength; i++){
    pinMode(handlePins[i], INPUT);
  }
}

/**
 * Checks if the correct handles are activated. 
 * Return true when it is.
 */
bool checkHandles(){
  int arrayLengthHandles = sizeof(handlePins)/sizeof(int);
  int totalCorrect = 0;
  for(int i = 0; i < arrayLenghtHandles; i++){
    if(rightHandles[i]){
      if(digitalRead(handlePins[i]) == HIGH){
        totalCorrect++;
      }
    }else{
      if(digitalRead(handlePins[i]) == LOW){
        totalCorrect++
      }
    }
  }
  if(totalCorrect == 8){
    return true;
  }else{
    return false;
  }
}

