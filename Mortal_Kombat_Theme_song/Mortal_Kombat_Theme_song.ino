#include "tone.h"
boolean song = true;

void setup() {
  
}
void loop() {
  if (song == true) {
      intro();
      intro();
      prechorus();
      chorus();
      intro();
      intro();
      prechorus();      
      End();
      song = false;
  }
}

void intro() {
    tone(s , NOTE_A6);
    Half();
    Break();
    tone(s , NOTE_A6);
    Half();
    tone(s , NOTE_C6);
    Half();
    tone(s , NOTE_A6);
    Half();
    tone(s , NOTE_D6);
    Half();
    tone(s , NOTE_A6);
    Half();
    tone(s , NOTE_E6);
    Half();
    tone(s , NOTE_D6);
    Half();
    tone(s , NOTE_C6);
    Half();
    Break();
    tone(s , NOTE_C6);
    Half();
    tone(s , NOTE_E6);
    Half();
    tone(s , NOTE_C6);
    Half();
    tone(s , NOTE_G6);
    Half();
    tone(s , NOTE_C6);
    Half();
    tone(s , NOTE_E6);
    Half();
    tone(s , NOTE_C6);
    Half();
    tone(s , NOTE_G5);
    Half();
    Break();
    tone(s , NOTE_G5);
    Half();
    tone(s , NOTE_B6);
    Half();
    tone(s , NOTE_G5);
    Half();
    tone(s , NOTE_C6);
    Half();
    tone(s , NOTE_G5);
    Half();
    tone(s , NOTE_D6);
    Half();
    tone(s , NOTE_C6);
    Half();
    tone(s , NOTE_F5);
    Half();
    Break();
    tone(s , NOTE_F5);
    Half();
    tone(s , NOTE_A6);
    Half();
    tone(s , NOTE_F5);
    Half();
    tone(s , NOTE_C6);
    Half();
    tone(s , NOTE_F5);
    Half();
    tone(s , NOTE_C6);
    Half();
    tone(s , NOTE_B6);
    Half();  
}

void prechorus() {
      prechorus1();
      prechorus2();
      prechorus1();
      prechorus3();
      prechorus1();
      prechorus2();
      prechorus1();
      prechorus3();
}
void chorus() {
      chorus1();
      chorus2();
      chorus2();
      chorus2();
      chorus2();      
      chorus3();
}
void prechorus1() {
    tone(s , NOTE_A6);
    Full();
    Break();
    tone(s , NOTE_A6);
    Full();
    Break();
    tone(s , NOTE_A6);
    Full();  
    Break();
    tone(s , NOTE_A6);
    Full();
    tone(s , NOTE_G5);
    Half();
    tone(s , NOTE_C6);
    Half();    
}
void prechorus2() {
    tone(s , NOTE_A6);
    Full();
    Break();
    tone(s , NOTE_A6);
    Full();
    Break();
    tone(s , NOTE_A6);
    Full();  
    Break();
    tone(s , NOTE_A6);
    Full();
    tone(s , NOTE_G5);
    Half();
    tone(s , NOTE_E5);
    Half();
}
void prechorus3() {
    tone(s , NOTE_A6);
    Full();
    Break();
    tone(s , NOTE_A6);
    Full();
    Break();
    tone(s , NOTE_A6);
    Half();
    Break();
    tone(s , NOTE_A6);
    Short();
    Break();
    tone(s , NOTE_A6);
    Half();
    Break();
    tone(s , NOTE_A6);
    Short();
    Break();
    tone(s , NOTE_A6);
    Long();
    Break();    
}
void chorus1() {
    tone(s , NOTE_A6);
    Full();
    Break();
    tone(s, NOTE_A6);
    Short();
    tone(s, NOTE_C6);
    Full();
    tone(s, NOTE_A6);
    Short();    
    tone(s, NOTE_AS6);
    Full();
    tone(s, NOTE_A6);
    Short();
    tone(s, NOTE_C6);
    Full();
    tone(s, NOTE_A6);
    Short();
    tone(s, NOTE_AS6);
    Short();
    tone(s, NOTE_G6);
    Full();   
}

void chorus2() {
  tone(s, NOTE_A6);
    Short();
    tone(s, NOTE_E6);
    Full();
    tone(s, NOTE_A6);
    Short();
    tone(s, NOTE_C6);
    Full();
    tone(s, NOTE_A6);
    Short();
    tone(s, NOTE_AS6);
    Full();
    tone(s, NOTE_A6);
    Short();
    tone(s, NOTE_C6);
    Full();
    tone(s, NOTE_A6);
    Short();
    tone(s, NOTE_AS6);
    Short();
    tone(s, NOTE_G5);
    Full(); 
}
void chorus3() {
    tone(s, NOTE_A6);
    Long();
    Break();
    tone(s, NOTE_A6);
    Long();
    Break();
    tone(s, NOTE_A6);
    Long();
    Break();
    tone(s, NOTE_A6);
    Long();
    Break();





    
}
