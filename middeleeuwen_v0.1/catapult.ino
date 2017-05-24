//Voor Micheal en Wesley
/**
 * ~~~~Functions used for the catapult minigame~~~~
 */

/**
 * Global Variables
 */
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

bool targetHit = false;
int pingPin = 4;


/**
 * Caluclates Distance with proximity sensor
 */
long distance(){
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

  return cm;
}

bool catapultIsDone(){
  //Code to check if catapult is done
}

