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
  if(totalCorrect == arrayLenghtHandles){  
    return true;
  }else{
    return false;
  }
}
