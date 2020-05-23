#include "tone.h"
boolean song = true;

void setup() {
  /*
  tone(s , NOTE_C5);
  Full();  // duration of the note
  Break(); // use this function between same notes
  tone(s , NOTE_C5);
  Full();  
  tone(s , NOTE_D5);
  Full();
  tone(s , NOTE_C5);
  Full();
  tone(s , NOTE_F5);
  Full();
  tone(s , NOTE_E5);
  Full();
  End(); */
}
void loop() {
  if (song == true) {
      intro();
      intro();
      intro();
      intro();
      prechorus();
      chorus();
      prechorus();
      chorus();
      outro();
      song = false;
  }
  
  





} 
void intro() {
  tone(s , NOTE_C6);
  Half();
  pause();
  tone(s , NOTE_G6);
  Half();
  pause();
  tone(s , NOTE_B7);
  Half();
  pause();
  tone(s , NOTE_FS6);
  Half();
  pause();  
}

void prechorus() {
  tone(s , NOTE_G4);
  Long();
  Break();
  tone(s , NOTE_G4);
  Long();
  Break();
  tone(s , NOTE_E4);
  Long();
  Break();
  tone(s , NOTE_E4);
  Long();
  Break();
  tone(s , NOTE_G4);
  Full();
  tone(s , NOTE_FS4);
  Full();  
  tone(s , NOTE_E4);
  Full();
  tone(s , NOTE_B5);
  Full();
  tone(s , NOTE_E4);
  Full();
  tone(s , NOTE_C4);
  Full();
  tone(s , NOTE_B4);
  Full();
  tone(s , NOTE_E4);
  Full();  
}
void chorus() {
  tone(s , NOTE_G4);
  Long();
  Break();
  tone(s , NOTE_G4);
  Long();
  Break();
  tone(s , NOTE_FS4);
  Long();
  Break();
  tone(s , NOTE_FS4);
  Long();
  Break();
  tone(s , NOTE_B5);
  Full();
  tone(s , NOTE_G4);
  Full();
  tone(s , NOTE_FS4);
  Full();
  tone(s , NOTE_B5);
  Full();
  tone(s , NOTE_C5);
  Long();
  Break();
  tone(s , NOTE_C5);
  Long(); 
}
void outro() {
  intro();
  intro();
  tone(s , NOTE_E4);
  Full();
  tone(s , NOTE_C4);
  Full();
  tone(s , NOTE_B4);
  Full();
  tone(s , NOTE_E4);
  Full();
  End();
}
