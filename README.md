# MAX7219CoolLedAnimations
Library for Arduino IDE displaying cool animations on one MAX7219 8x8 led matrix
This library makes use of the https://github.com/squix78/MAX7219LedMatrix library.

## Example
```
#include <LedMatrix.h>
#include <CoolLedAnimations.h>

LedMatrix ledMatrix = LedMatrix(1, D4);  //one device, CS_PIN on D4
 
void setup(){ 
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
```

## Installing library in Arduino IDE
- open Arduino IDE
- open preferences and take note of the 'Sketchbook location' path
- navigate into the `libraries` sub folder at that path (e.g. with terminal)
- clone this Git repository into that folder
- restart Arduino IDE
- you should now find the MAX7219CoolLedAnimations library in Sketch > Include Library

## Version information
See CHANGELOG.md