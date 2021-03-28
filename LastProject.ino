#include <Keyboard.h>

//PINS
int dirRight = 5; //orange wire
int dirLeft = 4; //red wire
int dirUp = 3; //yellow wire
int dirDown = 2; //green wire

int Bbutton = 6;
int Ybutton = 7;
int Abutton = 8;
int Xbutton = 9;

int Lbutton = 10;
int Rbutton = 11;

int startButton = 12;
int selectButton = 13;

//STATES
int stateRight;
int stateLeft;
int stateUp;
int stateDown;

int stateB;
int stateY;
int stateA;
int stateX;

int stateL;
int stateR;

int stateStart;
int stateSelect;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Keyboard.begin();

  pinMode(dirRight, INPUT_PULLUP);
  pinMode(dirLeft, INPUT_PULLUP);
  pinMode(dirUp, INPUT_PULLUP);
  pinMode(dirDown, INPUT_PULLUP);

  pinMode(Bbutton, INPUT_PULLUP);
  pinMode(Ybutton, INPUT_PULLUP);
  pinMode(Abutton, INPUT_PULLUP);
  pinMode(Xbutton, INPUT_PULLUP);

  pinMode(Lbutton, INPUT_PULLUP);
  pinMode(Rbutton, INPUT_PULLUP);

  pinMode(startButton, INPUT_PULLUP);
  pinMode(selectButton, INPUT_PULLUP);
}

void loop() {
  //put your main code here, to run repeatedly:
  
  stateRight = digitalRead(dirRight);
  stateLeft = digitalRead(dirLeft);
  stateUp = digitalRead(dirUp);
  stateDown = digitalRead(dirDown);

  stateB = digitalRead(Bbutton);
  stateY = digitalRead(Ybutton);
  stateA = digitalRead(Abutton);
  stateX = digitalRead(Xbutton);

  stateL = digitalRead(Lbutton);
  stateR = digitalRead(Rbutton);
  
  stateStart = digitalRead(startButton);
  stateSelect = digitalRead(selectButton);


  //DIRECTIONAL KEYS
  if(stateRight == LOW) { //MOVE RIGHT
    Keyboard.press('d');
  }
  else {
    Keyboard.release('d');
  }
  
  if(stateLeft == LOW) { //MOVE LEFT
    Keyboard.press('a');
  }
  else {
    Keyboard.release('a');
  }

  if(stateUp == LOW) { //MOVE UP
    Keyboard.press('w');
  }
  else {
    Keyboard.release('w');
  }

  if(stateDown == LOW) { //MOVE DOWN
    Keyboard.press('s');
  }
  else {
    Keyboard.release('s');
  }


  //BUTTONS
  if(stateB == LOW) {
    Keyboard.press('j');
  }
  else {
    Keyboard.release('j');
  }
  if(stateY == LOW) {
    Keyboard.press('i');
  }
  else {
    Keyboard.release('i');
  }
  if(stateA == LOW) {
    Keyboard.press('k');
  }
  else {
    Keyboard.release('k');
  }
  if(stateX == LOW) {
    Keyboard.press('o');
  }
  else {
    Keyboard.release('o');
  }


  //L and R buttons
  if(stateL == LOW) {
    Keyboard.press('l');
  }
  else {
    Keyboard.release('l');
  }
  if(stateR == LOW) {
    Keyboard.press('p');
  }
  else {
    Keyboard.release('p');
  }


  //START AND SELECT
  if(stateStart == LOW) {
    Keyboard.press('b');
  }
  else {
    Keyboard.release('b');
  }
  if(stateSelect == LOW) {
    Keyboard.press('n');
  }
  else {
    Keyboard.release('n');
  }
}
