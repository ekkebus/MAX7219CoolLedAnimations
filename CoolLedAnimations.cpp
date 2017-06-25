/*
 * CoolLedAnimations.cpp - Library for displaying cool animations on your 8x8 LED matrix.
 * Created by Swen-Peter Ekkebus, June, 2017.
 * Released into the public domain.
 */
 
#include "Arduino.h"
#include "LedMatrix.h"	
#include "CoolLedAnimations.h"
#include "CoolLedAnimationsData.h"

/**
  * Constructor with default frame delay
  */
CoolLedAnimations::CoolLedAnimations(){
}

/**
  * Constructor with custom frame delay
  */
CoolLedAnimations::CoolLedAnimations(int frameDelayMs){
  _frameDelayMs = frameDelayMs;
}

/**
  * This method implements the displaying using the LedMatrix
  *
  * @byte[][8] 			animationFrames the two dimensional byte array, containing the frames that will be displayed
  * @numberOfFrames 	the length of the first dimensions of the array, the number of frames
  * @rounds				the number of times the animation will be repeated
  */
void CoolLedAnimations::playAnimation(LedMatrix ledMatrix, const byte animationFrames[][8],int numberOfFrames,int rounds){
	for(int round=0;round<rounds;round++){
		for(int i=0;i<numberOfFrames;i++){
			ledMatrix.clear();
			for (byte col = 0; col < 8; col++) {
			  ledMatrix.setColumn(col, animationFrames [i] [col]);
			}
			ledMatrix.commit();
			delay(_frameDelayMs);
		}
	}
}


void CoolLedAnimations::playDemo(LedMatrix ledMatrix){
	playSpinner(ledMatrix, 2);
	playDotSpinner(ledMatrix, 2);
	playGrowingBox(ledMatrix, 2);
}

/**
  ****************************
  * Animation playing methods
  ****************************
  */

void CoolLedAnimations::playSpinner(LedMatrix ledMatrix,int rounds){		
	playAnimation(ledMatrix, spinnerAnimation, 4, rounds);
}

void CoolLedAnimations::playDotSpinner(LedMatrix ledMatrix,int rounds){		
	playAnimation(ledMatrix, dotSpinnerAnimation, 8, rounds);
}

void CoolLedAnimations::playGrowingBox(LedMatrix ledMatrix,int rounds){
	playAnimation(ledMatrix, growingBoxAnimation, 4, rounds);
}