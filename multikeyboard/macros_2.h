#ifndef MACROS_2_H
#define MACROS_2_H
#include "keyboard.h"
#include "keytab.h"
#include "event_to_hid.h"

void customCode(uint16_t c){
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
		break;
		case 0x161:			//F1 
    wordKey("fmented@gmail.com");
    pressKey(TAB);
    wordKey("SATU081996");
    pressKey(ENTER);
		break;
		case 0x162:			//F2 
		break;
		case 0x163:			//F3 
		break;
		case 0x164:			//F4 
		break;
		case 0x165:			//F5 
		break;
		case 0x166:			//F6 
		break;
		case 0x167:			//F7 
		break;
		case 0x168:			//F8 
		break;
		case 0x169:			//F9 
		break;
		case 0x16A:			//F10 
		break;
		case 0x16B:			//F11 
		break;
		case 0x16C:			//F12
		break;
		case 0x40:			//` 
		break;
		case 0x31:			//1 
		break;
		case 0x32:			//2 
		break;
		case 0x33:			//3 
		break;
		case 0x34:			//4 
		break;
		case 0x35:			//5 
		break;
		case 0x36:			//6 
		break;
		case 0x37:			//7 
		break;
		case 0x38:			//8 
		break;
		case 0x39:			//9 
		break;
		case 0x30:			//0 
		break;
		case 0x3C:			//- 
		break;
		case 0x5F:			//= 
		break;
		case 0x11C:			//BACKSPACE 
    pressKey(BACKSPACE);
		break;
		case 0x11D:			//TAB 
		break;
		case 0x51:			//Q 
		break;
		case 0x57:			//W 
		break;
		case 0x45:			//E 
		break;
		case 0x52:			//R 
		break;
		case 0x54:			//T 
		break;
		case 0x59:			//Y 
		break;
		case 0x55:			//U 
		break;
		case 0x49:			//I 
		break;
		case 0x4F:			//O 
		break;
		case 0x50:			//P 
		break;
		case 0x5D:			//[ 
		break;
		case 0x5E:			//] 
		break;
		case 0x5C:			//(\) 
		break;
		case 0x1103:			//CAPSLOCK
    case 0x8103: 
		break;
		case 0x41:			//A 
    wordKey("Serial.println("");");
		break;
		case 0x53:			//S 
    wordKey("for(int i=0; i<n; i++)");
    wordKey("{");
    pressKey(ENTER);
    wordKey("}");
		break;
		case 0x44:			//D 
    wordKey("if()");
    wordKey("{");
    pressKey(ENTER);
    wordKey("}");
		break;
		case 0x46:			//F 
		break;
		case 0x47:			//G 
    wordKey("what I'm doing here ? ");
		break;
		case 0x48:			//H 
		break;
		case 0x4A:			//J 
		break;
		case 0x4B:			//K 
		break;
		case 0x4C:			//L 
		break;
		case 0x5B:			//;
		break;
		case 0x3A:			//'
		break;
		case 0x11E:			//ENTER
    pressKey(ENTER);
		break;
		case 0x4106:			//L SHIFT
		break;
		case 0x5A:			//Z
		break;
		case 0x58:			//X
		break;
		case 0x43:			//C
		break;
		case 0x56:			//V
		break;
		case 0x42:			//B
		break;
		case 0x4E:			//N
		break;
		case 0x4D:			//M
		break;
		case 0x3B:			//,
		break;
		case 0x3D:			//.
		break;
		case 0x3E:			///
		break;
		case 0x4107:			//R SHIFT
		break;
		case 0x2108:			//L CTRL
		break;
		case 0x30C:			//L GUI
		break;
		case 0x90A:			//L ALT
		break;
		case 0x11F:			//SPACE
		break;
		case 0x50B:			//R ALT
		break;
		case 0x30D:			//R GUI
		break;
		case 0x10E:			//MENU
		break;
		case 0x2109:			//R CTRL
		break;
		case 0x104:			//PRINTSCR
		break;
    case 0x102:      
    case 0x8102:      //SCROLL LOCK
    break;
		case 0x6:			//PAUSE
		break;
		case 0x119:			//INSERT
		break;
		case 0x111:			//HOME
		break;
		case 0x113:			//PAGEUP
		break;
		case 0x11A:			//DELETE
		break;
		case 0x112:			//END
		break;
		case 0x114:			//PAGEDOWN
		break;
		case 0x117:			//UP
		break;
		case 0x115:			//LEFT
		break;
		case 0x118:			//DOWN
		break;
		case 0x116:			//RIGHT
		break;
		case 0x101:			//NUM LOCK
    case 0x8101:
		break;
		case 0x2F:			//KP/
		break;
		case 0x2E:			//KP*
		break;
		case 0x2D:			//KP-
		break;
		case 0x27:			//KP7
		break;
		case 0x28:			//KP8
		break;
		case 0x29:			//KP9
		break;
		case 0x2C:			//KP+
		break;
		case 0x24:			//KP4
		break;
		case 0x25:			//KP5
		break;
		case 0x26:			//KP6
		break;
		case 0x21:			//KP1
		break;
		case 0x22:			//KP2
		break;
		case 0x23:			//KP3
		break;
		case 0x2B:			//KP ENTER
		break;
		case 0x20:			//KP0
		break;
		case 0x2A:			//KP.
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
