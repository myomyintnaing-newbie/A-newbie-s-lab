#include "tone.h"
boolean song = true;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  if (song == true) {
      intro1();
      intro2();
      intro2();
      third();
      third();
      End();
      song = false;
  }
}

void intro1() {
    tone(s, NOTE_E5);
    Half();
    tone(s, NOTE_FS5);
    Half();
    tone(s, NOTE_G5);
    Full();
    tone(s, NOTE_E5);
    Full();
    tone(s, NOTE_B6);
    Full();
    tone(s, NOTE_E5);
    Half();
    tone(s, NOTE_FS5);
    Half();
    
    tone(s, NOTE_G5);
    Full();
    tone(s, NOTE_B6);
    Full();
    Break();
    tone(s, NOTE_B6);
    Long();
    Break();
    tone(s, NOTE_B6);
    Half();
    tone(s, NOTE_C6);
    Half();
    tone(s, NOTE_B6);
    Half();
    tone(s, NOTE_A6);
    Half();
    tone(s, NOTE_G5);
    Full();
    Break();
    tone(s, NOTE_G5);
    Half();
    tone(s, NOTE_FS5);
    Half();
    
    tone(s, NOTE_E5);
    Long();
    Full();
    Break(); 
}
void intro2() {
  tone(s, NOTE_E5);
    Half();
    tone(s, NOTE_FS5);
    Half();
    tone(s, NOTE_G5);
    Full();
    tone(s, NOTE_E5);
    Long();
    tone(s, NOTE_G5);
    Half();
    tone(s, NOTE_A6);
    Half();

    tone(s, NOTE_B6);
    Full();
    tone(s, NOTE_G5);
    Long();
    tone(s, NOTE_B6);
    Half();
    tone(s, NOTE_CS6);
    Half();
    tone(s, NOTE_D6);
    Half();
    tone(s, NOTE_CS6);
    Half();
    tone(s, NOTE_D6);
    Half();    
    tone(s, NOTE_CS6);
    Half();
    tone(s, NOTE_D6);
    Half();
    tone(s, NOTE_E6);
    Half();
    tone(s, NOTE_D6);
    Half();
    tone(s, NOTE_CS6);
    Half();
    
    tone(s, NOTE_B6);
    Full();
    Break();
    tone(s, NOTE_B6);
    Long();   
}

void third() {
    tone(s, NOTE_B6);    
    Half();
    tone(s, NOTE_CS6);
    Half();
    tone(s, NOTE_D6);
    Full();
    Break();
    tone(s, NOTE_D6);
    Full();
    Break();
    tone(s, NOTE_D6);
    Full();
    Break();
    tone(s, NOTE_D6);
    Full();
    Break();
    
    tone(s, NOTE_D6);
    Half();
    tone(s, NOTE_E6);
    Half();
    tone(s, NOTE_D6);
    Half();
    tone(s, NOTE_CS6);
    Half();
    tone(s, NOTE_D6);
    Full();
    tone(s, NOTE_B6);
    Half();
    tone(s, NOTE_CS6);
    Half();
    tone(s, NOTE_D6);
    Full();
    Break();
    tone(s, NOTE_D6);
    Full();
    tone(s, NOTE_D6);
    Half();
    tone(s, NOTE_E6);
    Half();
    tone(s, NOTE_D6);
    Half();
    tone(s, NOTE_CS6);
    Half();
    
    tone(s, NOTE_B6);
    Full();
    tone(s, NOTE_E5);
    Full();
    Break();
    tone(s, NOTE_E5);
    Full();
    


    




    
    
}
