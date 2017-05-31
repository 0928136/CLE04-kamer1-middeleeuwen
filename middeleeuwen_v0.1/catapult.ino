//Voor Micheal en Wesley
/**
 * ~~~~Functions used for the catapult minigame~~~~
 */

/*!!!!!!!!!!!!!!!!!!!!!!!!!!!GEBRUIK GEEN LOOP() OF SETUP() HIERIN. DOE DAT IN SETUPCATAPULT() EN LOOPCATAPULT().!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

/**
 * Global Variables
 */
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

bool catapult_targetHit;
bool catapult_showCode;
int catapult_pingPin = 4;
unsigned long catapult_lastPing = 0;
unsigned long catapult_pingInterval = 2000;

void setupCatapult(){
  catapult_targetHit = false;
  catapult_showCode = true;
}

void loopCatapult(){
  if(catapult_targetHit == false){
    if(lastPing < _currentTime - catapult_pingInterval) {
      ping();
    }
  }
  
  if(catapult_targetHit == true && catapult_showCode == true){
    Serial.println("You Hit The Target!");
    Serial.println("The Next Part Of The Code = 7");
    showCode = false;
  }
}

void ping(){
// establish variables for duration of the ping,
  // and the distance result in inches and centimeters:
  long duration, cm;

  
  // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(catapult_pingPin, OUTPUT);
  digitalWrite(catapult_pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(catapult_pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(catapult_pingPin, LOW);

  // The same pin is used to read the signal from the PING))): a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);
  cm = duration/29/2;

  // convert the time into a distance
  //inches = microsecondsToInches(duration);
  //cm = microsecondsToCentimeters(duration);

  //Serial.print(inches);
  //Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  if(cm < 30 && cm > 0){
    catapult_targetHit = catapultIsDone(targetHit);
  }
}

bool catapultIsDone(bool target){
  catapult_target = true;
  catapult_showCode = true;
  return catapult_target;
}

