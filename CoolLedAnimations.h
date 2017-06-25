/*
 * CoolLedAnimations.h - Library for displaying cool animations on your 8x8 LED matrix.
 * Created by Swen-Peter Ekkebus, June, 2017.
 * Released into the public domain.
 */
 
#ifndef CoolLedAnimations_h
#define CoolLedAnimations_h

#include "Arduino.h"
#include "LedMatrix.h"

class CoolLedAnimations{
  public:
    //constructor with default frame delay
	CoolLedAnimations();
	
	//constructor with custom frame delay
	CoolLedAnimations(int frameDelayMs);
	
	//plays all available animations of this libary
	void playDemo(LedMatrix ledMatrix);
	
	//the method which actually does the real work
	void playAnimation(LedMatrix ledMatrix, const byte animationFrames[][8], int numberOfFrames, int rounds);
	
	//executes the spinner animation once
    void playSpinner(LedMatrix ledMatrix, int rounds);
	
	//executes the spinner animation once
    void playDotSpinner(LedMatrix ledMatrix, int rounds);
	
	//executes the spinner animation once
    void playGrowingBox(LedMatrix ledMatrix, int rounds);
	
  private:
    int _frameDelayMs = 200;	//default delay 200 milliseconds
	
};
#endif