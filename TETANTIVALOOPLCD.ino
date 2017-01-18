#include <LiquidCrystal.h>
 
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

// PARA A BADGE É ESSE ==> LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 

byte j0[8] = {
  B00111,
  B00111,
  B00110,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

byte j1[8] = {
  B11110,
  B11110,
  B01110,
  B01110,
  B01110,
  B01110,
  B01110,
  B01110
};

byte j2[8] = {
  B00000,
  B00000,
  B00000,
  B01100,
  B01100,
  B00111,
  B00111,
  B00000
};

byte j3[8] = {
  B01110,
  B01110,
  B01110,
  B01110,
  B01110,
  B11110,
  B11100,
  B00000
};

byte u0[8] = {
  B00000,
  B01100,
  B01100,
  B01110,
  B01110,
  B01110,
  B01110,
  B01110
};

byte u1[8] = {
  B00000,
  B00110,
  B00110,
  B01110,
  B01110,
  B01110,
  B01110,
  B01110
};

byte u2[8] = {
  B01110,
  B01110,
  B01110,
  B01110,
  B01110,
  B00111,
  B00011,
  B00000
};

byte u3[8] = {
  B01110,
  B01110,
  B01110,
  B01110,
  B01110,
  B11100,
  B11000,
  B00000
};

byte l0[8] = {
  B00000,
  B01110,
  B01110,
  B01100,
  B01100,
  B01100,
  B01100,
  B01100
};

byte l1[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

byte l2[8] = {
  B01100,
  B01100,
  B01100,
  B01100,
  B01110,
  B01111,
  B01111,
  B00000
};

byte l3[8] = {
  B00000,
  B00000,
  B00000,
  B00110,
  B01110,
  B11110,
  B11110,
  B00000
};

byte i0[8] = {
  B00000,
  B01111,
  B00111,
  B00011,
  B00001,
  B00001,
  B00001,
  B00001
};

byte i1[8] = {
  B00000,
  B11110,
  B11100,
  B11000,
  B10000,
  B10000,
  B10000,
  B10000
};

byte i2[8] = {
  B00001,
  B00001,
  B00001,
  B00001,
  B00011,
  B00111,
  B01111,
  B00000
};

byte i3[8] = {
  B10000,
  B10000,
  B10000,
  B10000,
  B11000,
  B11100,
  B11110,
  B00000
};


byte o0[8] = {
  B00000,
  B00111,
  B01111,
  B01110,
  B01100,
  B01100,
  B01100,
  B01100
};

byte o1[8] = {
  B00000,
  B11100,
  B11110,
  B01110,
  B00110,
  B00110,
  B00110,
  B00110
};

byte o2[8] = {
  B01100,
  B01100,
  B01100,
  B01100,
  B01110,
  B01111,
  B00111,
  B00000
};

byte o3[8] = {
  B00110,
  B00110,
  B00110,
  B00110,
  B01110,
  B11110,
  B11100,
  B00000
};


 
void setup() {

lcd.begin(16, 2); //inicializa o LCD 16x2

}
 
void loop() {
lcd.createChar(1, j0);
lcd.createChar(2, j1);
lcd.createChar(3, j2);
lcd.createChar(4, j3);

lcd.setCursor(3, 0); 
lcd.write(1); 
lcd.setCursor(4, 0); //aponta para coluna 4, linha 0
lcd.write(2);
lcd.setCursor(3, 1);
lcd.write(3);
lcd.setCursor(4, 1);
lcd.write(4);
delay(500);
lcd.clear();

lcd.createChar(5, u0);
lcd.createChar(6, u1);
lcd.createChar(7, u2);
lcd.createChar(8, u3);

lcd.setCursor(5, 0);
lcd.write(5);
lcd.setCursor(6, 0);
lcd.write(6);
lcd.setCursor(5, 1);
lcd.write(7);
lcd.setCursor(6, 1);
lcd.write(8);
delay(500);
lcd.clear();

  
lcd.createChar(1, l0);
lcd.createChar(2, l1);
lcd.createChar(3, l2);
lcd.createChar(4, l3);

lcd.setCursor(7, 0);
lcd.write(1);
lcd.setCursor(8, 0);
lcd.write(2);
lcd.setCursor(7, 1);
lcd.write(3);
lcd.setCursor(8, 1);
lcd.write(4);
delay(500);
lcd.clear();
  

lcd.createChar(5, i0);
lcd.createChar(6, i1);
lcd.createChar(7, i2);
lcd.createChar(8, i3);

lcd.setCursor(9, 0);
lcd.write(5);
lcd.setCursor(10, 0);
lcd.write(6);
lcd.setCursor(9, 1);
lcd.write(7);
lcd.setCursor(10, 1);
lcd.write(8);
delay(500);
lcd.clear();
  
lcd.createChar(1, o0);
lcd.createChar(2, o1);
lcd.createChar(3, o2);
lcd.createChar(4, o3);

lcd.setCursor(11, 0);
lcd.write(1);
lcd.setCursor(12, 0);
lcd.write(2);
lcd.setCursor(11, 1);
lcd.write(3);
lcd.setCursor(12, 1);
lcd.write(4);
delay(500);
lcd.clear();

 
}
 

