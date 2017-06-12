//Het hoofdprogramma
//HIER NIET IN WERKEN
//#include "sword.ino"
//#include <functions.ino> // Include generic functions
//#include <sword.ino> //Include sword minigame funcions
//#include <levers.ino> //Include lever mingame functions
#include <LiquidCrystal.h>
//#include <catapult.ino> //Include catapult minigame functions
/**
 * Global Variables
 */
//Timing stuff
unsigned long _currentTime = 0;

void setup() {
  catapult_setup();
  levers_setup();
  sword_setup();
  Serial.begin(9600);
}

void loop() {
  //Set the current time
  _currentTime = millis();

  //loop for catapult
  catapult_loop();
  
  //loop for levers
  levers_loop();

  //loop for sword
  sword_loop();

  

  //Check if sword was inserted and handler are completed
  //Open door
}


