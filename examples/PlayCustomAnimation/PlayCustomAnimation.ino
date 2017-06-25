/*
 * Created by Swen-Peter Ekkebus, June, 2017. (MIT License)
 *
 * CoolLedAnimations library for Arduino (https://github.com/ekkebus/MAX7219CoolLedAnimations)
 */
 
#include <LedMatrix.h>
#include <CoolLedAnimations.h>

LedMatrix ledMatrix = LedMatrix(1, D4);

const byte customAnimation [][8] = {
  {0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x0},
  {0x0,0x0,0x0,0x8,0x18,0x0,0x0,0x0},
  {0x0,0x0,0x18,0x18,0x18,0x0,0x0,0x0},
  {0x0,0x0,0x1C,0x1C,0x1C,0x0,0x0,0x0},
  {0x0,0x0,0x1C,0x1C,0x1C,0x1C,0x0,0x0},
  {0x0,0x0,0x1C,0x34,0x24,0x3C,0x0,0x0},
  {0x0,0x30,0x24,0x24,0x24,0x3C,0x0,0x0},
  {0x0,0x3E,0x20,0x20,0x20,0x3C,0x0,0x0},
  {0x0,0x3E,0x22,0x22,0x22,0x20,0x0,0x0},
  {0x0,0x3E,0x22,0x2,0x2,0x2,0x6,0x0},
  {0x0,0xE,0x2,0x2,0x2,0x2,0x3E,0x0},
  {0x0,0x0,0x2,0x2,0x42,0x42,0x7E,0x0},
  {0x0,0x40,0x40,0x40,0x42,0x42,0x7E,0x0},
  {0x70,0x40,0x40,0x40,0x40,0x40,0x7C,0x0},
  {0x7E,0x40,0x40,0x40,0x40,0x40,0x70,0x0},
  {0x7F,0x41,0x41,0x40,0x40,0x40,0x0,0x0},
  {0x7F,0x41,0x41,0x1,0x1,0x1,0x0,0x0},
  {0x3F,0x1,0x1,0x1,0x1,0x1,0x1,0x3},
  {0x7,0x1,0x1,0x1,0x1,0x1,0x1,0x1F},
  {0x0,0x1,0x1,0x1,0x1,0x1,0x1,0xFF},
  {0x0,0x0,0x0,0x0,0x81,0x81,0x81,0xFF},
  {0x0,0x80,0x80,0x80,0x80,0x80,0x80,0xFF},
  {0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xF8},
  {0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xC0},
  {0x80,0x80,0x80,0x80,0x80,0x80,0x0,0x0},
  {0x80,0x80,0x80,0x0,0x0,0x0,0x0,0x0},
  {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
};

void setup() 
{ 
  //setup ledMatrix
  ledMatrix.init();
  ledMatrix.setIntensity(10);
}
 
void loop() 
{
  CoolLedAnimations ledAnimations = CoolLedAnimations(150);
  //play your custom animation
  ledAnimations.playAnimation(ledMatrix, customAnimation, 11, 1);
}
