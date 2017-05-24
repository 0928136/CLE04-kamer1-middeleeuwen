//Het hoofdprogramma
//HIER NIET IN WERKEN
#include <functions.ino> // Include generic functions
#include <sword.ino> //Include sword minigame funcions
#include <levers.ino> //Include lever mingame functions
#include <LiquidCrystal.h>
#include <catapult.ino> //Include catapult minigame functions
/**
 * Global Variables
 */
//Timing stuff
unsigned long _currentTime;




void setup() {
  setupHandles();
  Serial.begin(9600);
}

void loop() {
  //Set the current time
  _currentTime = millis();


  //Check if sword is inserted


  //Check if sword was inserted and handler are completed
  //Open door
}


