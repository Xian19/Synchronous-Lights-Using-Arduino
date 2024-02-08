//CPE160P------Experiment 1-------Synchronized Lights---------------------
//This sketch synchronizes eight LED's to the tune of Chandelier by Sia,
//Photograph by Ed Sheeran, and Can't help falling in love by Elvis Presley.

int ledA = 2;
int ledB = 3;
int ledC = 4;
int ledD = 5;
int ledE = 6;
int ledF = 7;
int ledG = 8;
int ledH = 9;
int switchA = 12;
int switchB = 11;
int switchC = 10;
int i;
int j;
bool button = false;
int songNum;

//This says that the system is running and is ready to run.
void startUp() {
  //For (i = 0; i < 3; i++) {
	  digitalWrite(ledA, HIGH);
 	  digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledE, HIGH);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledG, HIGH);
    digitalWrite(ledH, HIGH);
    delay(500);
    digitalWrite(ledA, LOW);
   	digitalWrite(ledB, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, LOW);
    digitalWrite(ledE, LOW);
    digitalWrite(ledF, LOW);
    digitalWrite(ledG, LOW);
    digitalWrite(ledH, LOW);
    delay(500);
  	digitalWrite(ledA, HIGH);
 	  digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledE, HIGH);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledG, HIGH);
    digitalWrite(ledH, HIGH);
    delay(2000);
    digitalWrite(ledA, LOW);
 	  digitalWrite(ledB, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, LOW);
    digitalWrite(ledE, LOW);
    digitalWrite(ledF, LOW);
    digitalWrite(ledG, LOW);
    digitalWrite(ledH, LOW);
}

void sweepLED(int y) {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledH, LOW);
  delay(y);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledA, LOW);
  delay(y);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledB, LOW);
  delay(y);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledC, LOW);
  delay(y);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, LOW);
  delay(y);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledE, LOW);
  delay(y);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledF, LOW);
  delay(y);
  digitalWrite(ledH, HIGH);
  digitalWrite(ledG, LOW);
  delay(y);
  digitalWrite(ledH, LOW);
  delay(y);
  digitalWrite(ledH, HIGH);
  delay(y);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledH, LOW);
  delay(y);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
  delay(y);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  delay(y);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  delay(y);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  delay(y);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  delay(y);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  delay(y);
  digitalWrite(ledA, LOW);
  delay(y);
}

void bumpLED(int y) {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledH, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  delay(y);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledH, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  delay(y);
}

void leftRight(int y) {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledH, LOW);
  delay(y);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledH, HIGH);
  delay(y);
}

void alternateLED(int y) {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledH, LOW);
  delay(y);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
  digitalWrite(ledH, HIGH);
  delay(y);
}

void lightsOn(int y) {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledH, HIGH);
  delay(y);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledH, LOW);
  delay(y);
}

void resetLED() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledH, LOW);
}

// the setup routine runs once when you press reset:
void setup() {
  // initialize the LEDS as an output and the switches as an input.
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledH, OUTPUT);
  pinMode(switchA, INPUT);
  pinMode(switchB, INPUT);
  pinMode(switchC, INPUT);
  startUp();
}

// the loop routine runs over and over again forever:
void loop() {
  if (digitalRead(switchA) == true) {
    button = true;
    songNum = 1;
    digitalWrite(ledH, HIGH);

  }
  else if (digitalRead(switchB) == true) {
    button = true;
    songNum = 2;
    digitalWrite(ledC, HIGH);

  }
  else if (digitalRead(switchC) == true) {
    button = true;
    songNum = 3;
    digitalWrite(ledA, HIGH);
  }
  while(button) {
    switch (songNum){
      case 1:
        delay(600);
        for(i = 0; i < 6; i++) {
          sweepLED(100);
          resetLED();
        }
        delay(500);
        for(i = 0; i < 8; i++) {
          leftRight(650);
          resetLED();
        }
        delay(500);
        for(j = 0; j < 3; j++) {
          for(i = 0; i < 3; i++) {
           bumpLED(350);
           resetLED();
         }
         digitalWrite(ledD, HIGH);
         digitalWrite(ledE, HIGH);
         delay(600);
         resetLED();
        }
        delay(3000);
        for(j = 0; j < 2; j++) {
          for(i = 0; i < 8; i++) {
           lightsOn(350);
           resetLED();  
          }
          for(i = 0; i < 7; i++) {
           alternateLED(350);
           resetLED();
          }
          delay(400);
        }
        break;
      case 2:
        delay(400);
        for(j = 0; j < 7; j++) {
          for(i = 0; i < 2; i++) {
           alternateLED(300);
           resetLED();  
          }
          delay(100);
          for(i = 0; i < 3; i++) {
           lightsOn(150);
           resetLED();
          }
        }
        delay(2400);
        for(j = 0; j < 4; j++) {
          for(i = 0; i < 4; i++) {
           bumpLED(550);
           resetLED();  
          }
          //delay(100);
          for(i = 0; i < 4; i++) {
           leftRight(550);
           resetLED();
          }
        }
        for(j = 0; j < 3; j++) {
          for(i = 0; i < 2; i++) {
           sweepLED(68);
           resetLED();  
          }
          for(i = 0; i < 2; i++) {
           lightsOn(550);
           resetLED();
          }
        }
        for(i = 0; i < 2; i++) {
           sweepLED(68.75);
           resetLED();  
          }
        delay(1500);
        for(i = 0; i < 7; i++) {
           bumpLED(250);
           bumpLED(250);
           resetLED();  
           delay(100);
           lightsOn(550);
           delay(200);
          }
        delay(850);
          for(i = 0; i < 2; i++) {
           alternateLED(300);
           resetLED();  
          }
          delay(100);
          digitalWrite(ledH, HIGH);
          delay(200);
          digitalWrite(ledA, HIGH);
          digitalWrite(ledH, LOW);
          delay(200);
          digitalWrite(ledE, HIGH);
          digitalWrite(ledA, LOW);
          delay(200);
          resetLED(); 
          for(i = 0; i < 2; i++) {
           alternateLED(300);
           resetLED();  
          }
        resetLED();
        break;
      case 3:
        delay(400);
        for(i = 0; i < 3; i++) {
           sweepLED(100);
           resetLED();  
          }
        leftRight(800);
        resetLED();
        for(i = 0; i < 13; i++) {
           alternateLED(300);
           alternateLED(300);
           bumpLED(300);
           lightsOn(200);
           resetLED();  
          } 
        for(i = 0; i < 9; i++) {
           leftRight(300);
           leftRight(300);
           alternateLED(300);
           lightsOn(200);
           resetLED();  
          } 
          delay(400);
          digitalWrite(ledG, HIGH);
          digitalWrite(ledH, HIGH);
          delay(800);
          digitalWrite(ledA, HIGH);
          digitalWrite(ledB, HIGH);
          delay(400);
          digitalWrite(ledE, HIGH);
          digitalWrite(ledF, HIGH);
          delay(200);
          digitalWrite(ledC, HIGH);
          digitalWrite(ledD, HIGH);
          delay(200);
          for(i = 0; i < 4; i++) {
           alternateLED(300);
           alternateLED(300);
           bumpLED(300);
           lightsOn(200);
           resetLED();  
          } 
        break;
    }
    button = false;
  }
}
