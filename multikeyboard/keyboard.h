#ifndef KEYBOARD_H
#define KEYBOARD_H
#include <Arduino.h>

extern uint8_t keyReport[8];
extern uint16_t caps[104];
void initKeyboard();
void sendKey();
void releaseKey();
void releaseAllKey();
void pressKey(uint8_t k1);
void pressMod(uint8_t mod);
void macroKey(uint8_t mod, uint8_t k1,uint8_t k2=0,uint8_t k3=0,uint8_t k4=0,uint8_t k5=0,uint8_t k6=0);



#endif
