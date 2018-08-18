/**
 * 28bjy-48
 */
#include <Stepper.h>

const float  STEPS_PER_REV = 32;
const float  GEAR_RED = 64;
const float STEPS_PER_OUT_REV = STEPS_PER_REV * GEAR_RED;
int stepsRequired;

//SEQUENCIA (1-3-2-4)
Stepper myStepper(STEPS_PER_REV, D8, D6, D7, D5);


void setup() {
}

void loop() {
  stepsRequired = STEPS_PER_REV /2;
  myStepper.setSpeed(700);
  myStepper.step(stepsRequired);
}


