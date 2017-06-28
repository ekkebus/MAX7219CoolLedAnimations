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
	
	//sets the frame delay in ms
	void setFrameDelay(int frameDelayMs);
	
	//the method which actually does the real work
	void playAnimation(LedMatrix ledMatrix, const byte animationFrames[][8], int numberOfFrames, int rounds);
	
	//displays the spinner animation 
    void playSpinner(LedMatrix ledMatrix, int rounds);
	
	//displays the spinning dot animation 
    void playDotSpinner(LedMatrix ledMatrix, int rounds);
	
	//displays the growing box animation
    void playGrowingBox(LedMatrix ledMatrix, int rounds);
	
	//displays the connect wifi animation
    void playWifi(LedMatrix ledMatrix, int rounds);
	
	//displays the heartbeat animation
    void playHeartbeat(LedMatrix ledMatrix, int rounds);
	
	//displays the pacman Ghost animation
    void playPacmanGhost(LedMatrix ledMatrix, int rounds);
	
	//displays the happy emoji animation
    void playHappyEmoji(LedMatrix ledMatrix, int rounds);
	
	//displays the space invador animation
    void playBouncingEmoji(LedMatrix ledMatrix, int rounds);
	
	//displays the space invador animation
    void playSpaceInvador(LedMatrix ledMatrix, int rounds);
	
	
  private:
    int _frameDelayMs = 200;	//default delay 200 milliseconds
	
};
#endif