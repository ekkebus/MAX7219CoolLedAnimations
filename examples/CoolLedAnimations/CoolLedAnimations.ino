#include <LedMatrix.h>
#include <CoolLedAnimations.h>

LedMatrix ledMatrix = LedMatrix(1, D4);	 //one device, CS_PIN on D4
 
void setup() 
{ 
  //setup ledMatrix
  ledMatrix.init();
  ledMatrix.setIntensity(5);
}
 
void loop() 
{
  CoolLedAnimations ledAnimations = CoolLedAnimations(150);
  //play all available animations of the library
  ledAnimations.playDemo(ledMatrix);
  //play the individual animations
  ledAnimations.playSpinner(ledMatrix,1);
  ledAnimations.playDotSpinner(ledMatrix,2);
  ledAnimations.playGrowingBox(ledMatrix,3);
}
