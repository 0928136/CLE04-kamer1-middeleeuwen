//Voor Floris en barry
/**
 * Global vars
 */

 
 //A total of 6 handles
int levers_pins[] = {2,3,4,5,6,7};

//These handles need to be pulled down to have a correct code (the numbers point to the handlePorts Array).
bool levers_correct[] = {LOW,HIGH,LOW,LOW,HIGH,HIGH};

//Variable to store wether the handles are completed
bool levers_completed = false;

/**
 * Setup for the handles
 */
void levers_setup(){
  int arrayLength = sizeof(levers_pins)/sizeof(int);
  for(int i = 0; i < arrayLength; i++){
    pinMode(levers_pins[i], INPUT);
  }
}

/**
 * Loop for handles
 */

void levers_loop(){
  
}

/**
 * Checks if the correct handles are activated. 
 * Return true when it is.
 */
bool checkHandles(){
  int arrayLengthHandles = sizeof(levers_pins)/sizeof(int);
  int totalCorrect = 0;
  for(int i = 0; i < arrayLengthHandles; i++){
    if(digitalRead(levers_pins[i]) == levers_correct[i]){
      totalCorrect++;
    }
  }
  return (totalCorrect == arrayLengthHandles)
//  {  
//    return true;
//  }else{
//    return false;
//  }
//}
