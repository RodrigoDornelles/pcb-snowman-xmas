#include <Arduino.h>
#include <Reactduino.h>

#define NOTE_TIME 600

#define BUZZER_MELODY 6
#define BUZZER_HARMONY_1 7
#define BUZZER_HARMONY_2 8
#define BUZZER_HARMONY_3 9

#define MELODY_PLAY(await,note,temp);   \
  melody_delay += await;                \
  app.delay(melody_delay, []() {        \
                                        \
  });                                   \
  melody_delay += temp;                 

unsigned int melody_delay = 0;
unsigned int harmony_delay = 0; 

Reactduino app([] () {
  MELODY_PLAY(0, NOTE_D6, NOTE_TIME/1);
  MELODY_PLAY(0, NOTE_B7, NOTE_TIME/1);
  MELODY_PLAY(0, NOTE_A7, NOTE_TIME/1);
  MELODY_PLAY(0, NOTE_G7, NOTE_TIME/1);
});