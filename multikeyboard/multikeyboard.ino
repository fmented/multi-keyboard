#include <PS2KeyAdvanced.h>
#include "nMidi.h"
#include "keyboard.h"
#include "normal.h"
#include "macros.h"
#include "macros_2.h"

/* Keyboard const staticants  Change to suit your Arduino
   define pins used for data and clock from keyboard */
#define DATAPIN 2
#define IRQPIN  3
PS2KeyAdvanced keyboard;
uint16_t c;


void setup()
{
// Configure the keyboard library
keyboard.begin( DATAPIN, IRQPIN );
Serial.begin(9600);
initKeyboard();
}


void loop()
{
  c = keyboard.read();
  if( c > 0 ){
    if(digitalRead(10)==HIGH and digitalRead(9)!=HIGH){
       customKey(c);
      }
    if(digitalRead(9)==HIGH and digitalRead(10)!=HIGH){
       playNote(c);
      }
    if(digitalRead(10)!=HIGH and digitalRead(9)!=HIGH){
        normalKey(c);
      }
    if(digitalRead(10)==HIGH and digitalRead(9)==HIGH){
        customCode(c);
      }
  }
}
