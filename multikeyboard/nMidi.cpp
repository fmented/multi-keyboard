#include "nMidi.h"
#include "keytab.h"
#include "keyboard.h"

void noteOn(byte channel, byte pitch, byte velocity) {
  midiEventPacket_t noteOn = {0x09, 0x90 | channel, pitch, velocity};
  MidiUSB.sendMIDI(noteOn);
}

void noteOff(byte channel, byte pitch, byte velocity) {
  midiEventPacket_t noteOff = {0x08, 0x80 | channel, pitch, velocity};
  MidiUSB.sendMIDI(noteOff);
}

void controlChange(byte channel, byte control, byte value) {
  midiEventPacket_t event = {0x0B, 0xB0 | channel, control, value};
  MidiUSB.sendMIDI(event);
}

void pitchBend(byte channel, byte lsb, byte msb) {
  midiEventPacket_t event = {0x0E, 0xE0 | channel, lsb, msb};
  MidiUSB.sendMIDI(event);
}


uint16_t played[104]={0};






int n=0;
int notes[]{
  //ESC - RCTRL
  1,2,3,4,5,6,7,8,9,10,11,12,13,  
  14,15,16,17,18,19,20,21,22,23,24,25,26,27,
  28,29,30,31,32,33,34,35,36,37,38,39,40,41,
  0,43,44,45,46,47,48,49,50,51,52,53,54,
  0,56,57,58,59,60,61,62,63,64,65,66,
  67,68,69,70,71,72,73,74,
  
//PRINTSCR - RARROW
  75,0,77,78,79,80,81,82,83,84,85,86,87,
  
//NUMLOCK - KPENTER  
  0,89,90,91,92,93,94,95,96,  
  97,98,99,100,101,102,103,104
  };

uint16_t s;

 void playNote(uint16_t c){
byte randomizer=random(-10,20);
byte subrandom=random(0,15);
byte v = 90;
byte vel ;
  
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
        //shift
       
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
      
      // release handler
      
      if ((caps[i]+0x9000) == c){
        c = c - 0x1000;
        //caps
        break;
      }
      if ((caps[i]+0x8200) == c){
        c = c - 0x200;
        //gui
        break;
      }
      if ((caps[i]+0x9200) == c){
        c = c - 0x1200;
        //gui+caps
        break;
      }
      if ((caps[i]+0x8400) == c){
        c = c - 0x400;
        //r alt
        break;
      }
      if ((caps[i]+0x9400) == c){
        c = c - 0x1400;
        //r alt+caps
        break;
      }
      if ((caps[i]+0x8800) == c){
        c = c - 0x800;
        //alt
        break;
      }
      if ((caps[i]+0x9800) == c){
        c = c - 0x1800;
        //alt+caps
        break;
      }
       if ((caps[i]+0xA000) == c){
        c = c - 0x2000;
        //ctrl
        break;
      }
      if ((caps[i]+0xB000) == c){
        c = c - 0x3000;
        //ctrl+caps
        break;
      }
      if ((caps[i]+0xC000) == c){
        c = c - 0x4000;
        //shift+caps
        break;
      }
      if ((caps[i]+0xD000) == c){
        c = c - 0x5000;
        //shift+caps
        break;
      }
       if ((caps[i]+0xE000) == c){
        c = c - 0x6000;
        //shift+ctrl
        break;
      }
      if ((caps[i]+0xF000) == c){
        c = c - 0x7000;
        //shift+ctrl+caps
        break;
      }
      if ((caps[i]+0xC800) == c){
        c = c - 0x4800;
        //shift+alt
        break;
      }
      if ((caps[i]+0xD800) == c){
        c = c - 0x5800;
        //shift+alt+caps

        break;
      }
      if ((caps[i]+0xC400) == c){
        c = c - 0x4400;
        //shift+ralt

        break;
      }
      if ((caps[i]+0xD400) == c){
        c = c - 0x5400;
        //shift+ralt+caps
        break;
      }
      if ((caps[i]+0xA800) == c){
        c = c - 0x2800;
        //ctrl+alt
        break;
      }
      if ((caps[i]+0xB800) == c){
        c = c - 0x3800;
        //ctrl+caps+alt
        break;
      }
      if ((caps[i]+0xA400) == c){
        c = c - 0x2400;
        //ctrl+ralt
        break;
      }
      if ((caps[i]+0xB400) == c){
        c = c - 0x3400;
        //ctrl+caps+ralt
        break;
      }
      if ((caps[i]+0xE800) == c){
        c = c - 0x6800;
        //ctrl+alt+shift
        break;
      }
      if ((caps[i]+0xF800) == c){
        c = c - 0x7800;
        //ctrl+caps+alt+shift
        break;
      }
      if ((caps[i]+0xE400) == c){
        c = c - 0x6400;
        //ctrl+ralt+shift
        break;
      }
      if ((caps[i]+0xF400) == c){
        c = c - 0x7400;
        //ctrl+caps+ralt+shift
        break;
      }
      if ((caps[i]+0xA200) == c){
        c = c - 0x2200;
        //gui+ctrl
        break;
      }
      if ((caps[i]+0xB200) == c){
        c = c - 0x3200;
        //gui+ctrl+caps
        break;
      }
      if ((caps[i]+0xC200) == c){
        c = c - 0x4200;
        //gui+shift
        break;
      }
      if ((caps[i]+0xD200) == c){
        c = c - 0x5200;
        //gui+shift+caps
        break;
      }
      if ((caps[i]+0x8A00) == c){
        c = c - 0xA00;
        //gui+alt
        break;
      }
      if ((caps[i]+0x9A00) == c){
        c = c - 0x1A00;
        //gui+alt+caps
        break;
      }
      if ((caps[i]+0x8600) == c){
        c = c - 0x600;
        //gui+ralt
        break;
      }
      if ((caps[i]+0x9600) == c){
        c = c - 0x1600;
        //gui+ralt+caps
        break;
      }
      if ((caps[i]+0xE200) == c){
        c = c - 0x6200;
        //gui+ctrl+shift
        break;
      }
      if ((caps[i]+0xF200) == c){
        c = c - 0x7200;
        //gui+ctrl+shift+caps
        break;
      }
      if ((caps[i]+0xCA00) == c){
        c = c - 0x4A00;
        //gui+alt+shift
        break;
      }
      if ((caps[i]+0xDA00) == c){
        c = c - 0x5A00;
        //gui+alt+shift+caps
        break;
      }
      if ((caps[i]+0xC600) == c){
        c = c - 0x4600;
        //gui+ralt+shift
        break;
      }
      if ((caps[i]+0xD600) == c){
        c = c - 0x5600;
        //gui+ralt+shift+caps
        break;
      }
       if ((caps[i]+0xAA00) == c){
        c = c - 0x2A00;
        //gui+ctrl+alt
        break;
      }
      if ((caps[i]+0xBA00) == c){
        c = c - 0x3A00;
        //gui+ctrl+alt+caps
        break;
      }
      if ((caps[i]+0xA600) == c){
        c = c - 0x2600;
        //gui+ctrl+ralt
        break;
      }
      if ((caps[i]+0xB600) == c){
        c = c - 0x3600;
        //gui+ctrl+ralt+caps
        break;
      }
      if ((caps[i]+0x8E00) == c){
        c = c - 0xE00;
        //gui+alt+alt
        break;
      }
      if ((caps[i]+0x9E00) == c){
        c = c - 0x1E00;
        //gui+alt+ralt+caps
        break;
      }
      
      
      else{
        c=c;
      }

     }
     s=c>>8;

    if (s<0x80){
      vel = v + randomizer - subrandom;
      if (vel>127){
        vel=127;
      }
      if (vel<68){
        vel=vel+subrandom;
      }
      for(int i =0;i<sizeof(caps)/sizeof(int);i++){
        if (c==caps[i]and c!=0xFA){
         if(caps[i]!=played[i]){

            
            if (c==0x103){
                 n=n+12;
                 controlChange(0,123,0);
                 
              }
            if (c==0x106){
                  pitchBend(0,0b01111111,0b01111111);
              }
            if (c==0x108){
                 pitchBend(0,0b00000000,0b00000000);
              }
            else{
                  if (notes[i]==77){
                      noteOn(0,notes[i]+n,vel);
                      MidiUSB.flush();
                      delay(100);
                      noteOff(0,notes[i]+n,vel);
                      MidiUSB.flush();
                      break;
                  }
                  if (notes[i]!=0  ){
                      noteOn(0,notes[i]+n,vel);
                      MidiUSB.flush();
                      played[i]=caps[i];
                  }
                }
          }
        }
      }
    }
    else{
      for(int i =0;i<sizeof(caps)/sizeof(int);i++){
        if (c==(caps[i]+0x8000)){

           if (c==0x8103){
               
               n=n-12;
               controlChange(0,123,0);
              }
            if (c==0x8106){
                 pitchBend(0,0b00000000,0b01000000);
              }
              if (c==0x8108){
                 pitchBend(0,0b00000000,0b01000000);
              }
            else{
                 
                  if (notes[i]!=0 ){
                        noteOff(0,notes[i]+n,0);
                        MidiUSB.flush(); 
                        played[i]=0; 
                }
            }       
          }
      }
    }
    v=vel;
        
 }
 
