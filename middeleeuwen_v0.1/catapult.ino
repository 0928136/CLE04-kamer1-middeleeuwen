////Voor Micheal en Wesley
///**
// * ~~~~Functions used for the catapult minigame~~~~
// */
//
///**
// * Global Variables
// */
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

bool targetHit;
bool showCode;
int pingPin = 4;
void setup(){
  
  Serial.begin(9600);
  targetHit = false;
  showCode = true;
  
  
}

void loop(){
  if(targetHit == false)
  ping();
  
  if(targetHit == true && showCode == true){
  Serial.println("You Hit The Target!");
  Serial.println("The Next Part Of The Code = 7");
    showCode = false;
  }
}

void ping(){
// establish variables for duration of the ping,
  // and the distance result in inches and centimeters:
  long duration, inches, cm;

  // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

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
  targetHit = catapultIsDone(targetHit);
  }
  delay(10);
  
}

bool catapultIsDone(bool target){
target = true;
  showCode = true;
  return target;
  
}

