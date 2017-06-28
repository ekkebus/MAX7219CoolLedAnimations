/*
 * Created by Swen-Peter Ekkebus, June, 2017. (MIT License)
 *
 * CoolLedAnimations library for Arduino (https://github.com/ekkebus/MAX7219CoolLedAnimations)
 */
 
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
  
  ledAnimations.playWifi(ledMatrix,2);
  ledAnimations.playHeartbeat(ledMatrix,3);
  ledAnimations.playPacmanGhost(ledMatrix,3);
  ledAnimations.playHappyEmoji(ledMatrix,2);
  ledAnimations.playBouncingEmoji(ledMatrix,2);
  ledAnimations.playSpaceInvador(ledMatrix,3);
}

