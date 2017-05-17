/**
 * Global Variables
 */
 
//A total of 8 handles
int handlePins[] = {2,3,4,5,6,7,8,9};

//These handles need to be pulled down to have a correct code (the numbers point to the handlePorts Array).
bool rightHandles[] = {false,true,false,true,false,true,false,true};

//Variable to store wether the handles are completed
bool handlesCompleted = false;

void setup() {
  setupHandles();
  Serial.begin(9600);
}

void loop() {
  if(!handlesCompleted){
    if(checkHandles()){
      handlesCompleted = true;
      Serial.println("You did it");
    }
  }

}

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
        String correct = "Pin: " + i;;
        Serial.println(correct);
        totalCorrect++;
      }
    }else{
      if(digitalRead(handlePins[i]) == LOW){
        String correct = "Pin: " + i;;
        Serial.println(correct);
        totalCorrect++;
      }
    }
  }
  if(totalCorrect == 8){  
    return true;
  }else{
    return false;
  }
}

