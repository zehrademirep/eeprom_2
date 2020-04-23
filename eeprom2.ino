#include <EEPROM.h>
int sayi;




void setup() {
  // put your setup code here, to run once:

  sayi=EEPROM.read(9);
  Serial.begin(9600);
  Serial.println(sayi);

  

}

void loop() {
  // put your main code here, to run repeatedly:
  

}
