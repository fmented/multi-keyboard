#ifndef NORMAL_H
#define NORMAL_H
#include "keyboard.h"
#include "keytab.h"
void normalKey(uint16_t c){
  for(int i =0;i<sizeof(caps)/sizeof(int);i++){
      if ((caps[i]+0x1000) == c){
        c = c - 0x1000;
        //caps
        break;
      }
      if ((caps[i]+0x200) == c){
        c = c - 0x200;
        //gui
        pressMod(GUI);
        break;
      }
      if ((caps[i]+0x1200) == c){
        c = c - 0x1200;
        //gui+caps
        pressMod(GUI);
        break;
      }
      if ((caps[i]+0x400) == c){
        c = c - 0x400;
        //r alt
        pressMod(RALT);
        break;
      }
      if ((caps[i]+0x1400) == c){
        c = c - 0x1400;
        //r alt+caps
        pressMod(RALT);
        break;
      }
      if ((caps[i]+0x800) == c){
        c = c - 0x800;
        //alt
        pressMod(ALT);
        break;
      }
      if ((caps[i]+0x1800) == c){
        c = c - 0x1800;
        //alt+caps
        pressMod(ALT);
        break;
      }
       if ((caps[i]+0x2000) == c){
        c = c - 0x2000;
        //ctrl
        pressMod(CTRL);
        break;
      }
      if ((caps[i]+0x3000) == c){
        c = c - 0x3000;
        //ctrl+caps
        pressMod(CTRL);
        break;
      }
      if ((caps[i]+0x4000) == c){
        c = c - 0x4000;
        //shift+caps
        pressMod(SHIFT);
        break;
      }
      if ((caps[i]+0x5000) == c){
        c = c - 0x5000;
        //shift+caps
        pressMod(SHIFT);
        break;
      }
       if ((caps[i]+0x6000) == c){
        c = c - 0x6000;
        //shift+ctrl
        pressMod(SHIFT+CTRL);
        break;
      }
      if ((caps[i]+0x7000) == c){
        c = c - 0x7000;
        //shift+ctrl+caps
        pressMod(SHIFT+CTRL);
        break;
      }
      if ((caps[i]+0x4800) == c){
        c = c - 0x4800;
        //shift+alt
        pressMod(SHIFT+ALT);
        break;
      }
      if ((caps[i]+0x5800) == c){
        c = c - 0x5800;
        //shift+alt+caps
        pressMod(SHIFT+ALT);
        break;
      }
      if ((caps[i]+0x4400) == c){
        c = c - 0x4400;
        //shift+ralt
        pressMod(SHIFT+RALT);
        break;
      }
      if ((caps[i]+0x5400) == c){
        c = c - 0x5400;
        //shift+ralt+caps
        pressMod(SHIFT+RALT);
        break;
      }
      if ((caps[i]+0x2800) == c){
        c = c - 0x2800;
        //ctrl+alt
        pressMod(CTRL+ALT);
        break;
      }
      if ((caps[i]+0x3800) == c){
        c = c - 0x3800;
        //ctrl+caps+alt
        pressMod(CTRL+ALT);
        break;
      }
      if ((caps[i]+0x2400) == c){
        c = c - 0x2400;
        //ctrl+ralt
        pressMod(CTRL+RALT);
        break;
      }
      if ((caps[i]+0x3400) == c){
        c = c - 0x3400;
        //ctrl+caps+ralt
        pressMod(CTRL+RALT);
        break;
      }
      if ((caps[i]+0x6800) == c){
        c = c - 0x6800;
        //ctrl+alt+shift
        pressMod(CTRL+ALT+SHIFT);
        break;
      }
      if ((caps[i]+0x7800) == c){
        c = c - 0x7800;
        //ctrl+caps+alt+shift
        pressMod(CTRL+ALT+SHIFT);
        break;
      }
      if ((caps[i]+0x6400) == c){
        c = c - 0x6400;
        //ctrl+ralt+shift
        pressMod(CTRL+RALT+SHIFT);
        break;
      }
      if ((caps[i]+0x7400) == c){
        c = c - 0x7400;
        //ctrl+caps+ralt+shift
        pressMod(CTRL+RALT+SHIFT);
        break;
      }
      if ((caps[i]+0x2200) == c){
        c = c - 0x2200;
        //gui+ctrl
        pressMod(GUI+CTRL);
        break;
      }
      if ((caps[i]+0x3200) == c){
        c = c - 0x3200;
        //gui+ctrl+caps
        pressMod(GUI+CTRL);
        break;
      }
      if ((caps[i]+0x4200) == c){
        c = c - 0x4200;
        //gui+shift
        pressMod(GUI+SHIFT);
        break;
      }
      if ((caps[i]+0x5200) == c){
        c = c - 0x5200;
        //gui+shift+caps
        pressMod(GUI+SHIFT);
        break;
      }
      if ((caps[i]+0xA00) == c){
        c = c - 0xA00;
        //gui+alt
        pressMod(GUI+ALT);
        break;
      }
      if ((caps[i]+0x1A00) == c){
        c = c - 0x1A00;
        //gui+alt+caps
        pressMod(GUI+ALT);
        break;
      }
      if ((caps[i]+0x600) == c){
        c = c - 0x600;
        //gui+ralt
        pressMod(GUI+RALT);
        break;
      }
      if ((caps[i]+0x1600) == c){
        c = c - 0x1600;
        //gui+ralt+caps
        pressMod(GUI+RALT);
        break;
      }
      if ((caps[i]+0x6200) == c){
        c = c - 0x6200;
        //gui+ctrl+shift
        pressMod(GUI+CTRL+SHIFT);
        break;
      }
      if ((caps[i]+0x7200) == c){
        c = c - 0x7200;
        //gui+ctrl+shift+caps
        pressMod(GUI+CTRL+SHIFT);
        break;
      }
      if ((caps[i]+0x4A00) == c){
        c = c - 0x4A00;
        //gui+alt+shift
        pressMod(GUI+ALT+SHIFT);
        break;
      }
      if ((caps[i]+0x5A00) == c){
        c = c - 0x5A00;
        //gui+alt+shift+caps
        pressMod(GUI+ALT+SHIFT);
        break;
      }
      if ((caps[i]+0x4600) == c){
        c = c - 0x4600;
        //gui+ralt+shift
        pressMod(GUI+RALT+SHIFT);
        break;
      }
      if ((caps[i]+0x5600) == c){
        c = c - 0x5600;
        //gui+ralt+shift+caps
        pressMod(GUI+RALT+SHIFT);
        break;
      }
       if ((caps[i]+0x2A00) == c){
        c = c - 0x2A00;
        //gui+ctrl+alt
        pressMod(GUI+CTRL+ALT);
        break;
      }
      if ((caps[i]+0x3A00) == c){
        c = c - 0x3A00;
        //gui+ctrl+alt+caps
        pressMod(GUI+CTRL+ALT);
        break;
      }
      if ((caps[i]+0x2600) == c){
        c = c - 0x2600;
        //gui+ctrl+ralt
        pressMod(GUI+CTRL+RALT);
        break;
      }
      if ((caps[i]+0x3600) == c){
        c = c - 0x3600;
        //gui+ctrl+ralt+caps
        pressMod(GUI+CTRL+RALT);
        break;
      }
      if ((caps[i]+0xE00) == c){
        c = c - 0xE00;
        //gui+alt+alt
        pressMod(GUI+ALT+RALT);
        break;
      }
      if ((caps[i]+0x1E00) == c){
        c = c - 0x1E00;
        //gui+alt+ralt+caps
        pressMod(GUI+ALT+RALT);
        break;
      }
      
      else{
        c=c;
      }
     }
	switch (c){
		//press keys
		case 0x11B:			//esc
		pressKey(ESCAPE);
		break;
		case 0x161:			//F1
		pressKey(F1);
		break;
		case 0x162:			//F2
		pressKey(F2);
		break;
		case 0x163:			//F3
		pressKey(F3);
		break;
		case 0x164:			//F4
		pressKey(F4);
		break;
		case 0x165:			//F5
		pressKey(F5);
		break;
		case 0x166:			//F6
		pressKey(F6);
		break;
		case 0x167:			//F7
		pressKey(F7);
		break;
		case 0x168:			//F8
		pressKey(F8);
		break;
		case 0x169:			//F9
		pressKey(F9);
		break;
		case 0x16A:			//F10
		pressKey(F10);
		break;
		case 0x16B:			//F11
		pressKey(F11);
		break;
		case 0x16C:			//F12
		pressKey(F12);
		break;
		case 0x40:			//`
		pressKey(GRAVE);
		break;
		case 0x31:			//1
		pressKey(K1);
		break;
		case 0x32:			//2
		pressKey(K2);
		break;
		case 0x33:			//3
		pressKey(K3);
		break;
		case 0x34:			//4
		pressKey(K4);
		break;
		case 0x35:			//5
		pressKey(K5);
		break;
		case 0x36:			//6
		pressKey(K6);
		break;
		case 0x37:			//7
		pressKey(K7);
		break;
		case 0x38:			//8
		pressKey(K8);
		break;
		case 0x39:			//9
		pressKey(K9);
		break;
		case 0x30:			//0
		pressKey(K0);
		break;
		case 0x3C:			//-
		pressKey(SUBTRACT);
		break;
		case 0x5F:			//=
		pressKey(EQUAL);
		break;
		case 0x11C:			//BACKSPACE
		pressKey(BACKSPACE);
		break;
		case 0x11D:			//TAB
		pressKey(TAB);
		break;
		case 0x51:			//Q
		pressKey(Q);
		break;
		case 0x57:			//W
		pressKey(W);
		break;
		case 0x45:			//E
		pressKey(E);
		break;
		case 0x52:			//R
		pressKey(R);
		break;
		case 0x54:			//T
		pressKey(T);
		break;
		case 0x59:			//Y
		pressKey(Y);
		break;
		case 0x55:			//U
		pressKey(U);
		break;
		case 0x49:			//I
		pressKey(I);
		break;
		case 0x4F:			//O
		pressKey(O);
		break;
		case 0x50:			//P
		pressKey(P);
		break;
		case 0x5D:			//[
		pressKey(LBRACKET);
		break;
		case 0x5E:			//]
		pressKey(RBRACKET);
		break;
		case 0x5C:			//(\)
		pressKey(BSLASH);
		break;
		case 0x1103:			//CAPSLOCK
    case 0x8103:
		pressKey(CAPSLOCK);
		break;
		case 0x41:			//A
		pressKey(A);
		break;
		case 0x53:			//S
		pressKey(S);
		break;
		case 0x44:			//D
		pressKey(D);
		break;
		case 0x46:			//F
		pressKey(F);
		break;
		case 0x47:			//G
		pressKey(G);
		break;
		case 0x48:			//H
		pressKey(H);
		break;
		case 0x4A:			//J
		pressKey(J);
		break;
		case 0x4B:			//K
		pressKey(K);
		break;
		case 0x4C:			//L
		pressKey(L);
		break;
		case 0x5B:			//;
		pressKey(SEMICOLON);
		break;
		case 0x3A:			//'
		pressKey(QUOTE);
		break;
		case 0x11E:			//ENTER
		pressKey(ENTER);
		break;
		case 0x4106:			//L SHIFT
		pressMod(SHIFT);
		break;
		case 0x5A:			//Z
		pressKey(Z);
		break;
		case 0x58:			//X
		pressKey(X);
		break;
		case 0x43:			//C
		pressKey(C);
		break;
		case 0x56:			//V
		pressKey(V);
		break;
		case 0x42:			//B
		pressKey(B);
		break;
		case 0x4E:			//N
		pressKey(N);
		break;
		case 0x4D:			//M
		pressKey(M);
		break;
		case 0x3B:			//,
		pressKey(COMMA);
		break;
		case 0x3D:			//.
		pressKey(PERIOD);
		break;
		case 0x3E:			///
		pressKey(FSLASH);
		break;
		case 0x4107:			//R SHIFT
		pressMod(SHIFT);
		break;
		case 0x2108:			//L CTRL
		pressMod(CTRL);
		break;
		case 0x30C:			//L GUI
		pressMod(GUI);
		break;
		case 0x90A:			//L ALT
		pressMod(ALT);
		break;
		case 0x11F:			//SPACE
		pressKey(SPACE);
		break;
		case 0x50B:			//R ALT
    pressKey(RALT);
		break;
		case 0x30D:			//R GUI
		pressMod(GUI);
		break;
		case 0x10E:			//MENU
		pressKey(MENU);
		break;
		case 0x2109:			//R CTRL
		pressMod(CTRL);
		break;
		case 0x104:			//PRINTSCR
		pressKey(PRINTSCREEN);
		break;
    case 0x102:      
    case 0x8102:      //SCROLL LOCK
    pressKey(PAUSE);
    break;
		case 0x6:			//PAUSE
		pressKey(PAUSE);
		break;
		case 0x119:			//INSERT
		pressKey(INSERT);
		break;
		case 0x111:			//HOME
		pressKey(HOME);
		break;
		case 0x113:			//PAGEUP
		pressKey(PAGEUP);
		break;
		case 0x11A:			//DELETE
		pressKey(DEL);
		break;
		case 0x112:			//END
		pressKey(END);
		break;
		case 0x114:			//PAGEDOWN
		pressKey(PAGEDOWN);
		break;
		case 0x117:			//UP
		pressKey(UP);
		break;
		case 0x115:			//LEFT
		pressKey(LEFT);
		break;
		case 0x118:			//DOWN
		pressKey(DOWN);
		break;
		case 0x116:			//RIGHT
		pressKey(RIGHT);
		break;
		case 0x101:			//NUM LOCK
    case 0x8101:
		pressKey(NUMLOCK);
		break;
		case 0x2F:			//KP/
		pressKey(KPDIV);
		break;
		case 0x2E:			//KP*
		pressKey(KPMULTI);
		break;
		case 0x2D:			//KP-
		pressKey(KPSUB);
		break;
		case 0x27:			//KP7
		pressKey(KP7);
		break;
		case 0x28:			//KP8
		pressKey(KP8);
		break;
		case 0x29:			//KP9
		pressKey(KP9);
		break;
		case 0x2C:			//KP+
		pressKey(KPADD);
		break;
		case 0x24:			//KP4
		pressKey(KP4);
		break;
		case 0x25:			//KP5
		pressKey(KP5);
		break;
		case 0x26:			//KP6
		pressKey(KP6);
		break;
		case 0x21:			//KP1
		pressKey(KP1);
		break;
		case 0x22:			//KP2
		pressKey(KP2);
		break;
		case 0x23:			//KP3
		pressKey(KP3);
		break;
		case 0x2B:			//KP ENTER
		pressKey(KPENTER);
		break;
		case 0x20:			//KP0
		pressKey(KP0);
		break;
		case 0x2A:			//KP.
		pressKey(KPPOINT);
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
