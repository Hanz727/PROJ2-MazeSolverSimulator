#include "RangeFinder.h"
#include "MazeSolver.h"

const uint8_t pins[6] = {22, 23, 24, 25, 28, 29};

RangeFinder rangeFinder;

void setup() {
  // put your setup code here, to run once:
  rangeFinder.init(pins, 3, ULTRASONIC_HC_SR04);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  rangeFinder.update();

}
