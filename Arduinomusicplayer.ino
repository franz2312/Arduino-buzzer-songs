#include "pitches.h"
#include <avr/pgmspace.h>

// bu kod franz2312 tarafından yapılmıştır, melodilerin hepsi bu projeden alınıp bir araya getirilmiştir: https://github.com/hibit-dev/buzzer
//(2026 1 mayıs) UYARI: şarkıyı değiştirmek için ilk önce şarkıyı durdur tuşuna basıp sonra şarkı değiştirme tuşuna basmanız lazım,
//bunun sebebini açıkçası bilmiyorum ama SİKTİR ETTTTTT! (istiyen istediği gibi projeyi çatalayabilir)

// Pin Tanımlamaları
const int BUZZER_PIN = 9;
const int BTN_NEXT = 2; // değiştirmea
const int BTN_PLAY = 3; // Oynat/Durdur


// Mario
const int mario_melody[] PROGMEM = { NOTE_E5, NOTE_E5, REST, NOTE_E5, REST, NOTE_C5, NOTE_E5, NOTE_G5, REST, NOTE_G4, REST, NOTE_C5, NOTE_G4, REST, NOTE_E4, NOTE_A4, NOTE_B4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_F5, NOTE_G5, REST, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4, NOTE_C5, NOTE_G4, REST, NOTE_E4, NOTE_A4, NOTE_B4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_F5, NOTE_G5, REST, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4, REST, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_DS5, NOTE_E5, REST, NOTE_GS4, NOTE_A4, NOTE_C4, REST, NOTE_A4, NOTE_C5, NOTE_D5, REST, NOTE_DS5, REST, NOTE_D5, NOTE_C5, REST, NOTE_C5, NOTE_C5, NOTE_C5, REST, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_C5, NOTE_C5, NOTE_C5, REST, NOTE_C5, NOTE_D5, NOTE_E5, REST, NOTE_C5, NOTE_C5, NOTE_C5, REST, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_E5, NOTE_E5, REST, NOTE_E5, REST, NOTE_C5, NOTE_E5, NOTE_G5, REST, NOTE_G4, REST, NOTE_E5, NOTE_C5, NOTE_G4, REST, NOTE_GS4, NOTE_A4, NOTE_F5, NOTE_F5, NOTE_A4, NOTE_D5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_E5, NOTE_C5, NOTE_G4, REST, NOTE_GS4, NOTE_A4, NOTE_F5, NOTE_F5, NOTE_A4, NOTE_B4, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_E4, NOTE_E4, NOTE_C4, NOTE_E5, NOTE_C5, NOTE_G4, REST, NOTE_GS4, NOTE_A4, NOTE_F5, NOTE_F5, NOTE_A4, NOTE_D5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_E5, NOTE_C5, NOTE_G4, REST, NOTE_GS4, NOTE_A4, NOTE_F5, NOTE_F5, NOTE_A4, NOTE_B4, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_E4, NOTE_E4, NOTE_C4, NOTE_C5, NOTE_C5, NOTE_C5, REST, NOTE_C5, NOTE_D5, NOTE_E5, REST, NOTE_C5, NOTE_C5, NOTE_C5, REST, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_E5, NOTE_E5, REST, NOTE_E5, REST, NOTE_C5, NOTE_E5, NOTE_G5, REST, NOTE_G4, REST, NOTE_E5, NOTE_C5, NOTE_G4, REST, NOTE_GS4, NOTE_A4, NOTE_F5, NOTE_F5, NOTE_A4, NOTE_D5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_E5, NOTE_C5, NOTE_G4, REST, NOTE_GS4, NOTE_A4, NOTE_F5, NOTE_F5, NOTE_A4, NOTE_B4, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_E4, NOTE_E4, NOTE_C4, NOTE_C5, NOTE_G4, NOTE_E4, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_GS4, NOTE_AS4, NOTE_GS4, NOTE_G4, NOTE_D4, NOTE_E4 };
const int mario_durations[] PROGMEM = { 8, 8, 8, 8, 8, 8, 8, 4, 4, 8, 4, 4, 8, 4, 4, 4, 4, 8, 4, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 4, 4, 8, 4, 4, 4, 4, 8, 4, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 4, 4, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4, 8, 4, 2, 2, 4, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4, 8, 4, 2, 2, 8, 4, 8, 8, 8, 4, 8, 4, 8, 2, 8, 4, 8, 8, 8, 8, 8, 1, 8, 4, 8, 8, 8, 4, 8, 4, 8, 2, 8, 8, 8, 8, 8, 8, 4, 4, 4, 4, 4, 8, 4, 4, 4, 4, 8, 4, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 4, 4, 8, 4, 4, 4, 8, 4, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 4, 4, 8, 4, 4, 4, 8, 4, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 4, 4, 8, 4, 4, 4, 4, 8, 4, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 4, 4, 8, 4, 4, 4, 4, 8, 4, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 4, 4, 8, 4, 4, 4, 4, 8, 4, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 4, 4, 4, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 2 };

// Tetris
const int tetris_melody[] PROGMEM = { NOTE_E5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_A4, REST, NOTE_E5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_A4, REST, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_GS4, NOTE_B4, REST, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4, NOTE_C5, NOTE_E5, NOTE_A5, NOTE_GS5 };
const int tetris_durations[] PROGMEM = { 4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 4, 4, 4, 4, 8, 4, 8, 8, 4, 8, 4, 8, 8, 4, 8, 4, 8, 8, 4, 8, 8, 4, 4, 4, 4, 4, 4, 4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 4, 4, 4, 4, 8, 4, 8, 8, 4, 8, 4, 8, 8, 4, 8, 4, 8, 8, 4, 8, 8, 4, 4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 2, 4, 8, 2, 2, 2, 2, 4, 4, 2, 2 };

// karahib korsanları
const int pirates_melody[] PROGMEM = { NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, REST, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, REST, NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, REST, NOTE_A4, NOTE_G4, NOTE_A4, REST, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, REST, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, REST, NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, REST, NOTE_A4, NOTE_G4, NOTE_A4, REST, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, REST, NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, REST, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, REST, NOTE_E5, NOTE_D5, NOTE_E5, NOTE_A4, REST, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, REST, NOTE_D5, NOTE_E5, NOTE_A4, REST, NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, REST, NOTE_C5, NOTE_A4, NOTE_B4, REST, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, REST, NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, REST, NOTE_A4, NOTE_G4, NOTE_A4, REST, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, REST, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, REST, NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, REST, NOTE_A4, NOTE_G4, NOTE_A4, REST, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, REST, NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, REST, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, REST, NOTE_E5, NOTE_D5, NOTE_E5, NOTE_A4, REST, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, REST, NOTE_D5, NOTE_E5, NOTE_A4, REST, NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, REST, NOTE_C5, NOTE_A4, NOTE_B4, REST, NOTE_E5, REST, REST, NOTE_F5, REST, REST, NOTE_E5, NOTE_E5, REST, NOTE_G5, REST, NOTE_E5, NOTE_D5, REST, REST, NOTE_D5, REST, REST, NOTE_C5, REST, REST, NOTE_B4, NOTE_C5, REST, NOTE_B4, REST, NOTE_A4, NOTE_E5, REST, REST, NOTE_F5, REST, REST, NOTE_E5, NOTE_E5, REST, NOTE_G5, REST, NOTE_E5, NOTE_D5, REST, REST, NOTE_D5, REST, REST, NOTE_C5, REST, REST, NOTE_B4, NOTE_C5, REST, NOTE_B4, REST, NOTE_A4 };
const int pirates_durations[] PROGMEM = { 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 4, 8, 4, 8, 8, 8, 4, 8, 8, 8, 8, 4, 4, 4, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 4, 8, 4, 8, 8, 8, 4, 8, 8, 8, 8, 4, 4, 4, 4, 8, 4, 4, 8, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4, 8, 4, 4, 8, 4, 8, 8, 8, 8, 8, 2, 4, 8, 4, 4, 8, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4, 8, 4, 4, 8, 4, 8, 8, 8, 8, 8, 2 };

// Harry Potter BLACK MAGİC
const int harry_potter_melody[] PROGMEM = { REST, NOTE_D4, NOTE_G4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_D5, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_AS4, NOTE_A4, NOTE_F4, NOTE_GS4, NOTE_D4, NOTE_D4, NOTE_G4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_D5, NOTE_F5, NOTE_E5, NOTE_DS5, NOTE_B4, NOTE_DS5, NOTE_D5, NOTE_CS5, NOTE_CS4, NOTE_B4, NOTE_G4, NOTE_AS4, NOTE_D5, NOTE_AS4, NOTE_D5, NOTE_AS4, NOTE_DS5, NOTE_D5, NOTE_CS5, NOTE_A4, NOTE_AS4, NOTE_D5, NOTE_CS5, NOTE_CS4, NOTE_D4, NOTE_D5, REST, NOTE_AS4, NOTE_D5, NOTE_AS4, NOTE_D5, NOTE_AS4, NOTE_F5, NOTE_E5, NOTE_DS5, NOTE_B4, NOTE_DS5, NOTE_D5, NOTE_CS5, NOTE_CS4, NOTE_AS4, NOTE_G4 };
const int harry_potter_durations[] PROGMEM = { 2, 4, 4, 8, 4, 2, 4, 2, 2, 4, 8, 4, 2, 4, 1, 4, 4, 8, 4, 2, 4, 2, 4, 2, 4, 4, 8, 4, 2, 4, 1, 4, 2, 4, 2, 4, 2, 4, 2, 4, 4, 8, 4, 2, 4, 1, 4, 4, 2, 4, 2, 4, 2, 4, 2, 4, 4, 8, 4, 2, 4, 1 };

// Subway Surfers
const int subway_melody[] PROGMEM = { NOTE_C4, REST, NOTE_G4, REST, NOTE_AS4, NOTE_C5, NOTE_AS4, REST, NOTE_F4, NOTE_DS4, REST, NOTE_C4, REST, NOTE_G4, REST, NOTE_AS4, NOTE_C5, NOTE_AS4, REST, NOTE_F4, NOTE_DS4, REST, NOTE_C4, REST, NOTE_G4, REST, NOTE_AS4, NOTE_C5, NOTE_AS4, REST, NOTE_F4, NOTE_DS4, REST, NOTE_C4, REST, NOTE_E4, REST, NOTE_G4, NOTE_A4, NOTE_AS4, NOTE_C5, REST, NOTE_C5, REST, NOTE_AS4, REST, NOTE_A4, REST, NOTE_AS4, REST, NOTE_AS4, NOTE_C5, REST, NOTE_AS4, NOTE_A4, REST, REST, NOTE_C5, REST, NOTE_AS4, REST, NOTE_A4, REST, NOTE_AS4, REST, NOTE_E5, REST, NOTE_C5, REST, NOTE_C5, REST, NOTE_AS4, REST, NOTE_A4, REST, NOTE_AS4, REST, NOTE_AS4, NOTE_C5, REST, NOTE_AS4, NOTE_A4, REST, REST, NOTE_C5, REST, NOTE_AS4, REST, NOTE_A4, REST, NOTE_AS4, REST, NOTE_E4, REST };
const int subway_durations[] PROGMEM = { 4, 8, 4, 8, 4, 8, 8, 16, 8, 8, 16, 4, 8, 4, 8, 4, 8, 8, 16, 8, 8, 16, 4, 8, 4, 8, 4, 8, 8, 16, 8, 8, 16, 4, 8, 4, 8, 4, 4, 4, 8, 16, 8, 16, 8, 16, 8, 16, 8, 16, 8, 8, 16, 8, 8, 16, 4, 8, 16, 8, 16, 8, 16, 8, 4, 8, 4, 8, 16, 8, 16, 8, 16, 8, 16, 8, 16, 8, 8, 16, 8, 8, 16, 4, 8, 16, 8, 16, 8, 16, 8, 4, 8, 1 };

// şarkıların boyutları zımbırtısı
const int mario_size = sizeof(mario_melody) / sizeof(int);
const int tetris_size = sizeof(tetris_melody) / sizeof(int);
const int pirates_size = sizeof(pirates_melody) / sizeof(int);
const int harry_potter_size = sizeof(harry_potter_melody) / sizeof(int);
const int subway_size = sizeof(subway_melody) / sizeof(int);

// değişkenleroski
int currentSong = 0;
bool isPlaying = false;
const int totalSongs = 5;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(BTN_NEXT, INPUT_PULLUP);
  pinMode(BTN_PLAY, INPUT_PULLUP);
}

void playSong(const int* melody, const int* durations, int size) {
  for (int note = 0; note < size; note++) {
    // durdurma
    if (digitalRead(BTN_PLAY) == LOW) {
      isPlaying = false;
      noTone(BUZZER_PIN);
      delay(500); // Buton debounce
      return;
    }
    
    int duration = 1000 / pgm_read_word(&durations[note]);
    tone(BUZZER_PIN, pgm_read_word(&melody[note]), duration);
    delay(duration * 1.30);
    noTone(BUZZER_PIN);
  }
}

void loop() {
  // şarkı Değiştirme Butonu
  if (digitalRead(BTN_NEXT) == LOW) {
    currentSong++;
    if (currentSong >= totalSongs) currentSong = 0;
    delay(500); // Debonce zımbırtısı vs.
  }

  // Oynat/Durdur Butonu
  if (digitalRead(BTN_PLAY) == LOW) {
    isPlaying = !isPlaying;
    delay(500);
  }

  if (isPlaying) {
    switch (currentSong) {
      case 0: playSong(mario_melody, mario_durations, mario_size); break;
      case 1: playSong(tetris_melody, tetris_durations, tetris_size); break;
      case 2: playSong(pirates_melody, pirates_durations, pirates_size); break;
      case 3: playSong(harry_potter_melody, harry_potter_durations, harry_potter_size); break;
      case 4: playSong(subway_melody, subway_durations, subway_size); break;
    }
  }
}