#ifndef MACROS_H
#define MACROS_H
#include "keyboard.h"
#include "keytab.h"
#include "event_to_hid.h"

void customKey(uint16_t c){
  for(int i =0;i<sizeof(caps)/sizeof(int);i++){
      if ((caps[i]+0x1000) == c){
        c = c - 0x1000;
        //caps
        break;
      }
      if ((caps[i]+0x200) == c){
        c = c - 0x200;
        //gui
        break;
      }
      if ((caps[i]+0x1200) == c){
        c = c - 0x1200;
        //gui+caps
        break;
      }
      if ((caps[i]+0x400) == c){
        c = c - 0x400;
        //r alt
        break;
      }
      if ((caps[i]+0x1400) == c){
        c = c - 0x1400;
        //r alt+caps
        break;
      }
      if ((caps[i]+0x800) == c){
        c = c - 0x800;
        //alt
        break;
      }
      if ((caps[i]+0x1800) == c){
        c = c - 0x1800;
        //alt+caps
        break;
      }
       if ((caps[i]+0x2000) == c){
        c = c - 0x2000;
        //ctrl
        break;
      }
      if ((caps[i]+0x3000) == c){
        c = c - 0x3000;
        //ctrl+caps
        break;
      }
      if ((caps[i]+0x4000) == c){
        c = c - 0x4000;
        //shift+caps
        break;
      }
      if ((caps[i]+0x5000) == c){
        c = c - 0x5000;
        //shift+caps
        break;
      }
       if ((caps[i]+0x6000) == c){
        c = c - 0x6000;
        //shift+ctrl
        break;
      }
      if ((caps[i]+0x7000) == c){
        c = c - 0x7000;
        //shift+ctrl+caps
        break;
      }
      if ((caps[i]+0x4800) == c){
        c = c - 0x4800;
        //shift+alt
        break;
      }
      if ((caps[i]+0x5800) == c){
        c = c - 0x5800;
        //shift+alt+caps
        break;
      }
      if ((caps[i]+0x4400) == c){
        c = c - 0x4400;
        //shift+ralt
        break;
      }
      if ((caps[i]+0x5400) == c){
        c = c - 0x5400;
        //shift+ralt+caps
        break;
      }
      if ((caps[i]+0x2800) == c){
        c = c - 0x2800;
        //ctrl+alt
        break;
      }
      if ((caps[i]+0x3800) == c){
        c = c - 0x3800;
        //ctrl+caps+alt
        break;
      }
      if ((caps[i]+0x2400) == c){
        c = c - 0x2400;
        //ctrl+ralt
        break;
      }
      if ((caps[i]+0x3400) == c){
        c = c - 0x3400;
        //ctrl+caps+ralt
        break;
      }
      if ((caps[i]+0x6800) == c){
        c = c - 0x6800;
        //ctrl+alt+shift
        break;
      }
      if ((caps[i]+0x7800) == c){
        c = c - 0x7800;
        //ctrl+caps+alt+shift
        break;
      }
      if ((caps[i]+0x6400) == c){
        c = c - 0x6400;
        //ctrl+ralt+shift
        break;
      }
      if ((caps[i]+0x7400) == c){
        c = c - 0x7400;
        //ctrl+caps+ralt+shift
        break;
      }
      if ((caps[i]+0x2200) == c){
        c = c - 0x2200;
        //gui+ctrl
        break;
      }
      if ((caps[i]+0x3200) == c){
        c = c - 0x3200;
        //gui+ctrl+caps
        break;
      }
      if ((caps[i]+0x4200) == c){
        c = c - 0x4200;
        //gui+shift
        break;
      }
      if ((caps[i]+0x5200) == c){
        c = c - 0x5200;
        //gui+shift+caps
        break;
      }
      if ((caps[i]+0xA00) == c){
        c = c - 0xA00;
        //gui+alt
        break;
      }
      if ((caps[i]+0x1A00) == c){
        c = c - 0x1A00;
        //gui+alt+caps
        break;
      }
      if ((caps[i]+0x600) == c){
        c = c - 0x600;
        //gui+ralt
        break;
      }
      if ((caps[i]+0x1600) == c){
        c = c - 0x1600;
        //gui+ralt+caps
        break;
      }
      if ((caps[i]+0x6200) == c){
        c = c - 0x6200;
        //gui+ctrl+shift
        break;
      }
      if ((caps[i]+0x7200) == c){
        c = c - 0x7200;
        //gui+ctrl+shift+caps
        break;
      }
      if ((caps[i]+0x4A00) == c){
        c = c - 0x4A00;
        //gui+alt+shift
        break;
      }
      if ((caps[i]+0x5A00) == c){
        c = c - 0x5A00;
        //gui+alt+shift+caps
        break;
      }
      if ((caps[i]+0x4600) == c){
        c = c - 0x4600;
        //gui+ralt+shift
        break;
      }
      if ((caps[i]+0x5600) == c){
        c = c - 0x5600;
        //gui+ralt+shift+caps
        break;
      }
       if ((caps[i]+0x2A00) == c){
        c = c - 0x2A00;
        //gui+ctrl+alt
        break;
      }
      if ((caps[i]+0x3A00) == c){
        c = c - 0x3A00;
        //gui+ctrl+alt+caps
        break;
      }
      if ((caps[i]+0x2600) == c){
        c = c - 0x2600;
        //gui+ctrl+ralt
        break;
      }
      if ((caps[i]+0x3600) == c){
        c = c - 0x3600;
        //gui+ctrl+ralt+caps
        break;
      }
      if ((caps[i]+0xE00) == c){
        c = c - 0xE00;
        //gui+alt+alt
        break;
      }
      if ((caps[i]+0x1E00) == c){
        c = c - 0x1E00;
        //gui+alt+ralt+caps
        break;
      }
      
      else{
        c=c;
      }
     }
	switch (c){
		//press keys
		case 0x11B:			//esc
		macroKey(CTRL+SHIFT,ESCAPE);
		break;
		case 0x161:			//F1
		macroKey(CTRL+SHIFT+ALT,c);
		break;
		case 0x162:			//F2
		macroKey(CTRL+SHIFT+ALT,c);
		break;
		case 0x163:			//F3
		macroKey(CTRL+SHIFT+ALT,c);
		break;
		case 0x164:			//F4
		macroKey(CTRL+SHIFT+ALT,c);
		break;
		case 0x165:			//F5
		macroKey(CTRL+SHIFT+ALT,c);
		break;
		case 0x166:			//F6
		macroKey(CTRL+SHIFT+ALT,c);
		break;
		case 0x167:			//F7
		macroKey(CTRL+SHIFT+ALT,c);
		break;
		case 0x168:			//F8
		macroKey(CTRL+SHIFT+ALT,c);
		break;
		case 0x169:			//F9
		macroKey(CTRL+SHIFT+ALT,c);
		break;
		case 0x16A:			//F10
		macroKey(CTRL+SHIFT+ALT,c);
		break;
		case 0x16B:			//F11
		macroKey(CTRL+SHIFT+ALT,c);
		break;
		case 0x16C:			//F12
		macroKey(CTRL+SHIFT+ALT,c);
		break;
		case 0x40:			//`
		macroKey(CTRL+SHIFT+ALT,F);
		break;
		case 0x31:			//1
		macroKey(CTRL+SHIFT,K1);
		break;
		case 0x32:			//2
		macroKey(CTRL+SHIFT,K2);
		break;
		case 0x33:			//3
		macroKey(CTRL+SHIFT,K4);
		break;
		case 0x34:			//4
		macroKey(CTRL+SHIFT,K8);
		break;
		case 0x35:			//5
		macroKey(CTRL+SHIFT,K6);
		break;
		case 0x36:			//6
		macroKey(CTRL+SHIFT,K3);
		break;
		case 0x37:			//7
		//pressKey(K7);
		break;
		case 0x38:			//8
		//pressKey(K8);
		break;
		case 0x39:			//9
		//pressKey(K9);
		break;
		case 0x30:			//0
		//pressKey(K0);
		break;
		case 0x3C:			//-
		//pressKey(SUBTRACT);
		break;
		case 0x5F:			//=
		//pressKey(EQUAL);
		break;
		case 0x11C:			//BACKSPACE
		macroKey(SHIFT,D);
		break;
		case 0x11D:			//TAB
		macroKey(CTRL,A);
		break;
		case 0x51:			//Q
		macroKey(0,F5);
		break;
		case 0x57:			//W
		macroKey(ALT,M);
		break;
		case 0x45:			//E
		macroKey(ALT,S);
		break;
		case 0x52:			//R
		//pressKey(R);
		break;
		case 0x54:			//T
		//pressKey(T);
		break;
		case 0x59:			//Y
		 macroKey(SHIFT,H);
		break;
		case 0x55:			//U
		macroKey(CTRL+SHIFT,H);
		break;
		case 0x49:			//I
		macroKey(CTRL,H);
		break;
		case 0x4F:			//O
		macroKey(0,H);
		break;
		case 0x50:			//P
		macroKey(CTRL+SHIFT,PAGEUP);
		break;
		case 0x5D:			//[
		macroKey(0,M);
		break;
		case 0x5E:			//]
		macroKey(CTRL+SHIFT,PAGEDOWN);
		break;
		case 0x5C:			//(\)
		macroKey(SHIFT,I);
		break;
		case 0x1103:			//CAPSLOCK
    case 0x8103:
		macroKey(CTRL+SHIFT,A);
		break;
		case 0x41:			//A
		macroKey(0,F6);
		break;
		case 0x53:			//S
		macroKey(CTRL+ALT,X);
		break;
		case 0x44:			//D
		macroKey(CTRL+ALT,C);
		break;
		case 0x46:			//F
		macroKey(CTRL+ALT,V);
		break;
		case 0x47:			//G
		macroKey(CTRL,F12);
		break;
		case 0x48:			//H
		macroKey(0,F);
		break;
		case 0x4A:			//J
		macroKey(SHIFT,F);
		break;
		case 0x4B:			//K
		macroKey(CTRL+ALT,H);
		break;
		case 0x4C:			//L
		macroKey(CTRL,F);
		break;
		case 0x5B:			//;
		macroKey(SHIFT,G);
		break;
		case 0x3A:			//'
		macroKey(0,G);
		break;
		case 0x11E:			//ENTER
		macroKey(CTRL+SHIFT,I);
		break;
		case 0x4106:			//L SHIFT
		macroKey(CTRL+SHIFT,Z);
		break;
		case 0x5A:			//Z
		macroKey(0,F7);
		break;
		case 0x58:			//X
		macroKey(CTRL,X);
		break;
		case 0x43:			//C
		macroKey(CTRL,C);
		break;
		case 0x56:			//V
		macroKey(CTRL,V);
		break;
		case 0x42:			//B
		macroKey(0,F12);
		break;
		case 0x4E:			//N
		macroKey(0,L);
		break;
		case 0x4D:			//M
		macroKey(SHIFT,L);
		break;
		case 0x3B:			//,
		macroKey(CTRL,L);
		break;
		case 0x3D:			//.
		macroKey(CTRL+SHIFT,PAGEUP);
		break;
		case 0x3E:			///
		macroKey(CTRL+SHIFT,PAGEDOWN);
		break;
		case 0x4107:			//R SHIFT
		macroKey(ALT,Z);
		break;
		case 0x2108:			//L CTRL
		macroKey(CTRL,Z);
		break;
		case 0x30C:			//L GUI
		macroKey(0,F3);
		break;
		case 0x90A:			//L ALT
		macroKey(0,R);
		break;
		case 0x11F:			//SPACE
		macroKey(0,SPACE);
		break;
		case 0x50B:			//R ALT
    macroKey(CTRL,SPACE);
		break;
		case 0x30D:			//R GUI
		macroKey(CTRL,F3);
		break;
		case 0x10E:			//MENU
		macroKey(SHIFT,F3);
		break;
		case 0x2109:			//R CTRL
		macroKey(ALT+SHIFT,Z);
		break;
		case 0x104:			//PRINTSCR
		macroKey(CTRL,S);
		break;
    case 0x102:      
    case 0x8102:      //SCROLL LOCK
    macroKey(CTRL,N);
    break;
		case 0x6:			//PAUSE
		macroKey(CTRL,O);
		break;
		case 0x119:			//INSERT
		macroKey(ALT,K1);
		break;
		case 0x111:			//HOME
		macroKey(ALT,K3);
		break;
		case 0x113:			//PAGEUP
		macroKey(ALT,K2);
		break;
		case 0x11A:			//DELETE
		macroKey(ALT+SHIFT,K6);
		break;
		case 0x112:			//END
		macroKey(ALT+SHIFT,K5);
		break;
		case 0x114:			//PAGEDOWN
		macroKey(ALT+SHIFT,K4);
		break;
		case 0x117:			//UP
		macroKey(CTRL,UP);
		break;
		case 0x115:			//LEFT
		macroKey(CTRL,LEFT);
		break;
		case 0x118:			//DOWN
		macroKey(CTRL,DOWN);
		break;
		case 0x116:			//RIGHT
		macroKey(CTRL,RIGHT);
		break;
		case 0x101:			//NUM LOCK
    case 0x8101:
		macroKey(ALT,K4);
		break;
		case 0x2F:			//KP/
		macroKey(ALT,K5);
		break;
		case 0x2E:			//KP*
		macroKey(ALT,K6);
		break;
		case 0x2D:			//KP-
		macroKey(ALT+SHIFT,K1);
		break;
		case 0x27:			//KP7
		macroKey(ALT,K6);
		break;
		case 0x28:			//KP8
		macroKey(ALT,K8);
		break;
		case 0x29:			//KP9
		macroKey(ALT,K9);
		break;
		case 0x2C:			//KP+
		macroKey(ALT+SHIFT,K0);
		break;
		case 0x24:			//KP4
		macroKey(CTRL+SHIFT,K3);
		break;
		case 0x25:			//KP5
		macroKey(CTRL+SHIFT,K8);
		break;
		case 0x26:			//KP6
		macroKey(CTRL+SHIFT,K2);
		break;
		case 0x21:			//KP1
		macroKey(0,C);
		break;
		case 0x22:			//KP2
		macroKey(0,I);
		break;
		case 0x23:			//KP3
		macroKey(0,B);
		break;
		case 0x2B:			//KP ENTER
		macroKey(ALT,K0);
		break;
		case 0x20:			//KP0
		macroKey(CTRL,HOME);
		break;
		case 0x2A:			//KP.
		macroKey(0,HOME);
		break;
    
//release modifier
    case 0x8106:      //L SHIFT
    releaseAllKey();
    break;
    case 0x8107:      //R SHIFT
    releaseAllKey();
    break;
    case 0x8108:      //L CTRL
    releaseAllKey();
    break;
    case 0x810C:      //L GUI
    releaseAllKey();
    break;
    case 0x810A:      //L ALT
    releaseAllKey();
    break;
    case 0x810B:      //R ALT
    releaseAllKey();
    break;
    case 0x810D:      //R GUI
    releaseAllKey();
    break;
    case 0x8109:      //R CTRL
    releaseAllKey();
    break;
	}
	
}

#endif
