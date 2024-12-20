
#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_GS3, NOTE_B3, NOTE_GS3, NOTE_B3, NOTE_B3, NOTE_GS3, NOTE_FS3, NOTE_AS3, NOTE_FS3, 166
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 8, 8, 4, 4, 8, 8, 4, 
};

void setup() {
  Serial.begin(9600);

}

void Sound() {
    // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(50);  // delay in between reads for stability

  
  
  
    // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote < 10; thisNote++) {

      // to calculate the note duration, take one second divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1300 / noteDurations[thisNote];
      tone(8, melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8);
    }
    delay(150);
  
    int melody2[] = {
      NOTE_GS4, NOTE_B4, NOTE_GS4, NOTE_B4, NOTE_B4, NOTE_GS4, NOTE_FS4, NOTE_AS4, NOTE_FS4, NOTE_E4
    };

    int noteDurations2[] = {
      4, 8, 8, 8, 8, 4, 4, 8, 8, 4,
    };

    for (int thisNote = 0; thisNote < 10; thisNote++) {

      // to calculate the note duration, take one second divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurations2[thisNote];
      tone(8, melody2[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8);
  
    }
}
void NoteC3() {
  int melody2[] = {
    NOTE_C3
  };

  int noteDurations2[] = {
    1
  };

  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 10000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration);
    delay(200);
    // stop the tone playing:
    noTone(8);
  }
}
void NoteCS3() {
  int melody2[] = {
    NOTE_CS3
  };

  int noteDurations2[] = {
    1
  };

  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 10000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration);
    delay(200);
    // stop the tone playing:
    noTone(8);
  }
}
void NoteD3 () {
  int melody2[] = {
    NOTE_D3
  };

  int noteDurations2[] = {
    1
  };

  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 10000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration);
    delay(200);
    // stop the tone playing:
    noTone(8);
  }
}

void NoteDS3 () {
  int melody2[] = {
    NOTE_DS3
  };

  int noteDurations2[] = {
    1
  };

  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 10000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration);
    delay(200);
    // stop the tone playing:
    noTone(8);
  }
}
void NoteE3 () {
  int melody2[] = {
    NOTE_E3
  };

  int noteDurations2[] = {
    1
  };

  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 10000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration);
    delay(200);
    // stop the tone playing:
    noTone(8);
  }
}
void NoteF3 () {
  int melody2[] = {
    NOTE_F3
  };

  int noteDurations2[] = {
    1
  };

  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 10000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration);
    delay(200);
    // stop the tone playing:
    noTone(8);
  }
}
void NoteFS3() {
  int melody2[] = {
    NOTE_FS3
  };

  int noteDurations2[] = {
    1
  };

  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 10000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration);
    delay(200);
    // stop the tone playing:
    noTone(8);
  }
}
void NoteG3() {
  int melody2[] = {
    NOTE_G3
  };

  int noteDurations2[] = {
    1
  };

  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 10000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration);
    delay(200);
    // stop the tone playing:
    noTone(8);
  }
}
void NoteGS3() {
  int melody2[] = {
    NOTE_GS3
  };

  int noteDurations2[] = {
    1
  };

  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 10000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration);
    delay(200);
    // stop the tone playing:
    noTone(8);
  }
}
void NoteA3() {
  int melody2[] = {
    NOTE_A3
  };

  int noteDurations2[] = {
    1
  };

  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 10000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration);
    delay(200);
    // stop the tone playing:
    noTone(8);
  }
}
void NoteAS3() {
  int melody2[] = {
    NOTE_AS3
  };

  int noteDurations2[] = {
    1
  };

  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 10000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration);
    delay(200);
    // stop the tone playing:
    noTone(8);
  }
}
void NoteB3() {
  int melody2[] = {
    NOTE_B3
  };

  int noteDurations2[] = {
    1
  };

  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 10000 / noteDurations2[thisNote];
    tone(8, melody2[thisNote], noteDuration);
    delay(200);
    // stop the tone playing:
    noTone(8);
  }
}

void TEQUILA() {
    // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(50);  // delay in between reads for stability

    // notes in the melody:
  int melody[] = {
    NOTE_F3, NOTE_F3, NOTE_ES3, NOTE_G3, NOTE_E3, NOTE_F3, NOTE_C3, PAUSE, NOTE_F3, NOTE_F3, NOTE_ES3, NOTE_G3, NOTE_E3, NOTE_F3, PAUSE, NOTE_D3, NOTE_E3, NOTE_G3, NOTE_B3, NOTE_G3, PAUSE, NOTE_G3, PAUSE, NOTE_D3, NOTE_E3, NOTE_G3, 
    NOTE_B3, NOTE_G3, PAUSE, NOTE_G3, PAUSE, NOTE_D3, NOTE_E3, NOTE_G3, NOTE_B3, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_A3, NOTE_A3, NOTE_A3, NOTE_A3, PAUSE, 
    NOTE_D3, 
  };

  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations[] = {
    4, 8, 8, 8, 4, 4, 8, 2, 4, 8, 8, 8, 8, 4, 2, 8, 8, 8, 2, 4, 8, 8, 8, 8, 8, 8, 2, 4, 8, 8, 8, 8, 8, 8, 2, 2, 8, 8, 8, 8, 4, 4, 16, 8,
  };
  
  
    // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote < 44; thisNote++) {

      // to calculate the note duration, take one second divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1150 / noteDurations[thisNote];
      tone(8, melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8);
    }
    delay(100);
  
    int melody2[] = {
      NOTE_A4 //useless :D
    };

    int noteDurations2[] = {
      4
    };

    for (int thisNote = 0; thisNote < 0; thisNote++) {

      // to calculate the note duration, take one second divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurations2[thisNote];
      tone(8, melody2[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8);
  
    }
}

void Undertail() {

  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(50);  // delay in between reads for stability

    // notes in the melody:
  int melody[] = {
    NOTE_D3, NOTE_D3, NOTE_D4, NOTE_A3, PAUSE, NOTE_GS3, PAUSE, NOTE_G3, PAUSE, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_G3, NOTE_C3, NOTE_C3, NOTE_D4, 
    NOTE_A3, PAUSE, NOTE_GS3, PAUSE, NOTE_G3, PAUSE, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_G3, NOTE_B2, NOTE_B2, NOTE_D4, NOTE_A3, 
    PAUSE, NOTE_GS3, PAUSE, NOTE_G3, PAUSE, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_G3, NOTE_B2, NOTE_B2, NOTE_D4, NOTE_A3, 
    PAUSE, NOTE_GS3, PAUSE, NOTE_G3, PAUSE, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_G3,

  };

  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations[] = {
    16, 16, 8, 8, 16, 16, 16, 16, 16, 8, 16, 16, 16, 16, 16, 8, 8, 16, 16, 16, 16, 16, 8, 16, 16, 16, 16, 16, 8, 8, 16, 16, 16, 16, 16, 8, 16, 16, 16, 16, 16, 8, 8, 16, 16, 16, 16, 16, 8, 16, 16, 16,
  };
  
  
    // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote < 52; thisNote++) {

      // to calculate the note duration, take one second divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1500 / noteDurations[thisNote];
      tone(8, melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8);
    }
}

void TOT() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(50);  // delay in between reads for stability

    // notes in the melody:
  int melody[] = {
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, 

  };

  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations[] = {
    4, 4, 4, 4, 4, 4, 4
  };
  
    // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote < 7; thisNote++) {

      // to calculate the note duration, take one second divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1500 / noteDurations[thisNote];
      tone(8, melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 7.00;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8);
    }

    delay(100);

  int melody2[] = {
    NOTE_AS4, NOTE_AS4, NOTE_AS4

  };

  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations2[] = {
    1, 1, 1
  };
  
    // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote < 3; thisNote++) {

      // to calculate the note duration, take one second divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration2 = 1300 / noteDurations2[thisNote];
      tone(8, melody2[thisNote], noteDuration2);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration2 * 1.00;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8);
    }



}


void loop(){
  nomusic:
    // read the input on analog pins:
  int sensorValue = analogRead(A0);
  int sensorValue1 = analogRead(A1);
  int sensorValue2 = analogRead(A2);
  int sensorValue3 = analogRead(A3);
  int sensorValue4 = analogRead(A4);
  int sensorValue5 = analogRead(A5);
  int sensorValue6 = analogRead(A6);
  int sensorValue7 = analogRead(A7);
  int sensorValue8 = analogRead(A8);
  int sensorValue9 = analogRead(A9);
  int sensorValue10 = analogRead(A10);
  int sensorValue11 = analogRead(A11);
  int sensorValue12 = analogRead(A12);
  int sensorValue13 = analogRead(A13);
  int sensorValue14 = analogRead(A14);
  int sensorValue15 = analogRead(A15);
  // print out the value it read:
  Serial.println(sensorValue);
  Serial.println(sensorValue1);
  Serial.println(sensorValue2);
  Serial.println(sensorValue3);
  Serial.println(sensorValue4);
  Serial.println(sensorValue5);
  Serial.println(sensorValue6);
  Serial.println(sensorValue7); 
  Serial.println(sensorValue8);
  Serial.println(sensorValue9); 
  Serial.println(sensorValue10); 
  Serial.println(sensorValue11);
  Serial.println(sensorValue12);
  Serial.println(sensorValue13);
  Serial.println(sensorValue14);
  Serial.println(sensorValue15);


  delay(10);  // delay in between reads for stability

    if (sensorValue < 1) {
      Sound();
      
    }
    if (sensorValue1 < 1) {
      NoteC3();
      
    }
    if (sensorValue2 < 1) {
      NoteCS3();
      
    }
    if (sensorValue3 < 1) {
      NoteD3();
      
    }
    if (sensorValue4 < 1) {
      NoteDS3();
      
    }
    if (sensorValue5 < 1) {
      NoteE3();
      
    }
    if (sensorValue6 < 1) {
      NoteF3();
      
    }
    if (sensorValue7 < 1) {
      NoteFS3();
      
    }
    if (sensorValue8 < 1) {
      NoteG3();
      
    }
    if (sensorValue9 < 1) {
      NoteGS3();
    }
    if (sensorValue10 < 1) {
      NoteA3();
     
    }
    if (sensorValue11 < 1) {
      NoteAS3();
      
    }
    if (sensorValue12 < 1) {
      NoteB3();
    }
    if (sensorValue13 < 1) {
      TEQUILA();
    }
    if (sensorValue14 < 1) {
      Undertail();
    }
    if (sensorValue15 < 1) {
      TOT();
    }


} 
