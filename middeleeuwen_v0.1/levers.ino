//Voor Floris en barry
/**
 * Global vars
 */
 
 //A total of 8 handles
int handlePins[] = {2,3,4,5,6,7};

//These handles need to be pulled down to have a correct code (the numbers point to the handlePorts Array).
bool rightHandles[] = {false,true,false,false,true,true};

//Variable to store wether the handles are completed
bool handlesCompleted = false;

/**
 * Setup for the handles
 */
void setupHandles(){
  int arrayLength = sizeof(handlePins)/sizeof(int);
  for(int i = 0; i < arrayLength; i++){
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
  for(int i = 0; i < arrayLengthHandles; i++){
    if(rightHandles[i]){
      if(digitalRead(handlePins[i]) == HIGH){
        totalCorrect++;
      }
    }else{
      if(digitalRead(handlePins[i]) == LOW){
        totalCorrect++;
      }
    }
  }
  if(totalCorrect == arrayLengthHandles){  
    return true;
  }else{
    return false;
  }
}
