#include <Keypad.h>

uint8_t buf[8] = { 0 };

#define PIN_ROW_1 2
#define PIN_ROW_2 3
#define PIN_ROW_3 4
#define PIN_ROW_4 5
#define PIN_ROW_5 6
#define PIN_ROW_6 7
#define PIN_ROW_7 8
#define PIN_ROW_8 9

#define PIN_COL_1 10
#define PIN_COL_2 11
#define PIN_COL_3 12
#define PIN_COL_4 13
#define PIN_COL_5 A0
#define PIN_COL_6 A1
#define PIN_COL_7 A2
#define PIN_COL_8 A3
#define PIN_COL_9 A4

//const byte ROWS = 9; //four rows
//const byte COLS = 8; //three columns

/*char* keys[ROWS][COLS] = {
  {'^','1','2','3','4','5','6','7'},
  {'8','9','0','-','=','backspace','tab','q'},
  {'w','e','r','t','y','u','i','o'},
  {'p','[',']','\\','caps','a','s','d'},
  {'f','g','h','j','k','l',';',','},
  {'enter','shift_l','z','x','c','v','b','n'},
  {'m','<','>','/','shift_r','ctrl','win','alt'},
  {'space','alt','win','menu','ctrl','left','up','down'},
  {'right','pgup','pgdown','pos1','end','f9','f10','f11'},
  };*/

//byte rowPins[ROWS] = {0, 1, 2, 3,4,5,6,7,8}; //connect to the row pinouts of the keypad
//byte colPins[COLS] = {9,10,11,12,13,A0,A1,A2}; //connect to the column pinouts of the keypad

//Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

int serialPos = 0;

void setup() {
  Serial.begin(9600);

  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //serialPos = 0;

  ////Serial.println(analogRead(A0));

  /*  if (digitalRead(PIN_ROW_1) == HIGH && analogRead(PIN_COL_1) > 150) {
      buf[serialPos + 2] = 229;//Serial.println("rshift
      serialPos++;
      Serial.write(buf, 8); // Send keypress


    }*/

  if (digitalRead(2) == HIGH) {
    buf[serialPos + 2] = 225; ////Serial.println("lshift");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (digitalRead(3) == HIGH) {
    buf[serialPos + 2] = 224; //Serial.println("lctrl");
    serialPos++;
    Serial.write(buf, 8);

  }
  if (digitalRead(4) == HIGH) {
    buf[serialPos + 2] = 57; //Serial.println("caps");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (digitalRead(5) == HIGH) {
    buf[serialPos + 2] = 226; //Serial.println("lalt");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (digitalRead(6) == HIGH) {
    buf[serialPos + 2] = 227; //Serial.println("lsuper");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (digitalRead(7) == HIGH) {
    buf[serialPos + 2] = 41; //Serial.println("esc");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (digitalRead(8) == HIGH) {
    buf[serialPos + 2] = 229; //Serial.println("rshift");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (digitalRead(9) == HIGH) {
    buf[serialPos + 2] = 230; //Serial.println("ralt");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (digitalRead(10) == HIGH) {
    buf[serialPos + 2] = 231; //Serial.println("super");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (digitalRead(11) == HIGH) {
    buf[serialPos + 2] = 118; //Serial.println("menu");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (digitalRead(12) == HIGH) {
    buf[serialPos + 2] = 228; //Serial.println("rctrl");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (digitalRead(13) == HIGH) {
    buf[serialPos + 2] = 30; //Serial.println("1");
    serialPos++;
    Serial.write(buf, 8);
  }
  //if(digitalRead(12) == HIGH){

  //}
  //if(digitalRead(13) == HIGH){

  //}

  if (analogRead(A0) > 240 && analogRead(A0) < 250) {
    buf[serialPos + 2] = 33; //Serial.println("4");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A0) > 350 && analogRead(A0) < 355) {
    buf[serialPos + 2] = 34; //Serial.println("5");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A0) > 25 && analogRead(A0) < 30) {
    buf[serialPos + 2] = 35; //Serial.println("6");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A0) > 100 && analogRead(A0) < 112) {
    buf[serialPos + 2] = 36; //Serial.println("7");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A0) > 515 && analogRead(A0) < 522) {
    buf[serialPos + 2] = 37; //Serial.println("8");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A0) > 1010 && analogRead(A0) <= 1023) {
    buf[serialPos + 2] = 38; //Serial.println("9");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A0) > 165 && analogRead(A0) < 172) {
    buf[serialPos + 2] = 39; //Serial.println("0");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A0) > 230 && analogRead(A0) < 240) {
    buf[serialPos + 2] = 20; //Serial.println("q");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A0) > 20 && analogRead(A0) < 25) {
    buf[serialPos + 2] = 26; //Serial.println("w");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A0) > 70 && analogRead(A0) < 80) {
    buf[serialPos + 2] = 8; //Serial.println("e");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A0) > 340 && analogRead(A0) < 350) {
    buf[serialPos + 2] = 21; //Serial.println("r");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A0) > 670 && analogRead(A0) < 680) {
    buf[serialPos + 2] = 23; //Serial.println("t");
    serialPos++;
    Serial.write(buf, 8);
  }


  if (analogRead(A1) > 240 && analogRead(A1) < 250) {
    buf[serialPos + 2] = 28; //Serial.println("y");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A1) > 350 && analogRead(A1) < 355) {
    buf[serialPos + 2] = 24; //Serial.println("u");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A1) > 25 && analogRead(A1) < 30) {
    buf[serialPos + 2] = 12; //Serial.println("i");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A1) > 100 && analogRead(A1) < 112) {
    buf[serialPos + 2] = 18; //Serial.println("o");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A1) > 515 && analogRead(A1) < 522) {
    buf[serialPos + 2] = 19; //Serial.println("p");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A1) > 1010 && analogRead(A1) <= 1023) {
    buf[serialPos + 2] = 47; //Serial.println("[");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A1) > 165 && analogRead(A1) < 172) {
    buf[serialPos + 2] = 48; //Serial.println("]");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A1) > 230 && analogRead(A1) < 240) {
    buf[serialPos + 2] = 49; //Serial.println("\\");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A1) > 20 && analogRead(A1) < 25) {
    buf[serialPos + 2] = 4; //Serial.println("a");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A1) > 70 && analogRead(A1) < 80) {
    buf[serialPos + 2] = 22; //Serial.println("s");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A1) > 340 && analogRead(A1) < 350) {
    buf[serialPos + 2] = 7; //Serial.println("d");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A1) > 670 && analogRead(A1) < 680) {
    buf[serialPos + 2] = 9; //Serial.println("f");
    serialPos++;
    Serial.write(buf, 8);
  }


  if (analogRead(A2) > 240 && analogRead(A2) < 250) {
    buf[serialPos + 2] = 30; //Serial.println("g");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A2) > 350 && analogRead(A2) < 355) {
    buf[serialPos + 2] = 30; //Serial.println("h");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A2) > 25 && analogRead(A2) < 30) {
    buf[serialPos + 2] = 30; //Serial.println("j");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A2) > 100 && analogRead(A2) < 112) {
    buf[serialPos + 2] = 30; //Serial.println("k");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A2) > 515 && analogRead(A2) < 522) {
    buf[serialPos + 2] = 30; //Serial.println("l");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A2) > 1010 && analogRead(A2) <= 1023) {
    buf[serialPos + 2] = 30; //Serial.println(";");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A2) > 165 && analogRead(A2) < 172) {
    buf[serialPos + 2] = 52; //Serial.println("'");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A2) > 230 && analogRead(A2) < 240) {
    buf[serialPos + 2] = 40; //Serial.println("enter");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A2) > 20 && analogRead(A2) < 25) {
    buf[serialPos + 2] = 29; //Serial.println("z");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A2) > 70 && analogRead(A2) < 80) {
    buf[serialPos + 2] = 27; //Serial.println("x");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A2) > 340 && analogRead(A2) < 350) {
    buf[serialPos + 2] = 6; //Serial.println("c");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A2) > 670 && analogRead(A2) < 680) {
    buf[serialPos + 2] = 25; //Serial.println("v");
    serialPos++;
    Serial.write(buf, 8);
  }

  if (analogRead(A3) > 240 && analogRead(A3) < 250) {
    buf[serialPos + 2] = 5; //Serial.println("b");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A3) > 350 && analogRead(A3) < 355) {
    buf[serialPos + 2] = 17; //Serial.println("n");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A3) > 25 && analogRead(A3) < 30) {
    buf[serialPos + 2] = 16; //Serial.println("m");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A3) > 100 && analogRead(A3) < 112) {
    buf[serialPos + 2] = 54; //Serial.println(",");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A3) > 515 && analogRead(A3) < 522) {
    buf[serialPos + 2] = 55; //Serial.println(".");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A3) > 1010 && analogRead(A3) <= 1023) {
    buf[serialPos + 2] = 56; //Serial.println("/");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A3) > 165 && analogRead(A3) < 172) {
    buf[serialPos + 2] = 53; //Serial.println("`");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A3) > 230 && analogRead(A3) < 240) {
    buf[serialPos + 2] = 44; //Serial.println("space");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A3) > 20 && analogRead(A3) < 25) {
    buf[serialPos + 2] = 82; //Serial.println("up");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A3) > 70 && analogRead(A3) < 80) {
    buf[serialPos + 2] = 81; //Serial.println("down");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A3) > 340 && analogRead(A3) < 350) {
    buf[serialPos + 2] = 80; //Serial.println("left");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A3) > 670 && analogRead(A3) < 680) {
    buf[serialPos + 2] = 79; //Serial.println("right");
    serialPos++;
    Serial.write(buf, 8);
  }


  if (analogRead(A4) > 240 && analogRead(A4) < 250) {
    buf[serialPos + 2] = 45; //Serial.println("-");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A4) > 350 && analogRead(A4) < 355) {
    buf[serialPos + 2] = 46; //Serial.println("=");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A4) > 25 && analogRead(A4) < 30) {
    buf[serialPos + 2] = 42; //Serial.println("backspace");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A4) > 100 && analogRead(A4) < 112) {
    buf[serialPos + 2] = 43; //Serial.println("tab");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A4) > 515 && analogRead(A4) < 522) {
    buf[serialPos + 2] = 74; //Serial.println("home");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A4) > 1010 && analogRead(A4) <= 1023) {
    buf[serialPos + 2] = 77; //Serial.println("end");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A4) > 165 && analogRead(A4) < 172) {
    buf[serialPos + 2] = 75; //Serial.println("pgUp");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A4) > 230 && analogRead(A4) < 240) {
    buf[serialPos + 2] = 78; //Serial.println("pgDn");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A4) > 20 && analogRead(A4) < 25) {
    buf[serialPos + 2] = 31; //Serial.println("2");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A4) > 70 && analogRead(A4) < 80) {
    buf[serialPos + 2] = 76; //Serial.println("Del");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A4) > 340 && analogRead(A4) < 350) {
    buf[serialPos + 2] = 67; //Serial.println("f10");
    serialPos++;
    Serial.write(buf, 8);
  }
  if (analogRead(A4) > 670 && analogRead(A4) < 680) {
    buf[serialPos + 2] = 32;//Serial.println("3");
    serialPos++;
    Serial.write(buf, 8);
  }


  releaseKey();


}

void releaseKey()
{
  buf[8] = { 0 };
  buf[0] = 0;
  buf[2] = 0;
  serialPos++;
  Serial.write(buf, 8); // Send Release key
}
