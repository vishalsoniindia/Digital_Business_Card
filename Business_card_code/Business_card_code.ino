#include "DigiKeyboard.h"

void setup() {
  delay(5000);
  pinMode(6, OUTPUT);
  digitalWrite(6, HIGH);
  DigiKeyboard.sendKeyStroke(0);;

  //start browsser
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("notepad");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("NAME - VISHAL SONI");
  DigiKeyboard.println("Maker & Youtuber");
  DigiKeyboard.println("LINK - http://youtube.com/vishalsoniindia");

  //open new tab
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("http://youtube.com/vishalsoniindia");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);

  //open new tab
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("https://www.instructables.com/member/vishalsoniindia/instructables/");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);

  //open new tab
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("https://www.hackster.io/Vishalsoniindia/");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  digitalWrite(6, LOW);
}


void loop() {

}
