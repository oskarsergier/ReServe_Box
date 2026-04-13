
// Library voor grove lcd
#include<Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;

// library voor keypad
#include "SoftwareSerial.h"

#if defined(ARDUINO_ARCH_AVR)
#define SERIAL Serial
SoftwareSerial mySerial(2,3);
#define TRANS_SERIAL mySerial
#elif defined(ARDUINO_ARCH_SAMD)
#define SERIAL SerialUSB
#define TRANS_SERIAL  Serial
#endif

// ====== INSTELLINGEN ======
String inputCode = "";
const int codeLength = 6;

// Voorbeeldcodes 
String locker1Code = "589647";
String locker2Code = "784265";
String locker3Code = "558211";
String locker4Code = "796146";
String locker5Code = "546281";
String locker6Code = "315849";

// Pins voor lockers 
const int locker1Pin = 8;
const int locker2Pin = 9;


void setup() {
// Lockerpin definiëren + laag zetten
  pinMode(locker1Pin, OUTPUT);
  pinMode(locker2Pin, OUTPUT);
  digitalWrite(locker1Pin, LOW);
  digitalWrite(locker2Pin, LOW);

// LCD starten 16x2
  lcd.begin(16, 2);
  lcd.setRGB(colorR, colorG, colorB);
  lcd.setCursor(0,0);
  lcd.print("Voer code in:");
  
// Seriële monitor starten
  TRANS_SERIAL.begin(9600);
  SERIAL.begin(9600);
  SERIAL.println("ReServeBox systeem gestart");

}

void loop() {
  readKeypad();
}

void readKeypad() {
  while(TRANS_SERIAL.available()) {
    uint8_t data = TRANS_SERIAL.read();
    char key = mapKey(data);

    if(key != '\0') {
      SERIAL.print("Toets: ");
      SERIAL.println(key);

      if(key == '#') {
        checkCode();
      }
      else if(key == '*') {
        inputCode = "";  // reset bij *
        // scherm resetten en weergeven "code gewist!"     
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Code gewist!");
        delay (2000);
        // scherm resetten om code nadien opnieuw in te voeren.
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Voer code in:");
      }
      else {
        if(inputCode.length() < codeLength) {
          inputCode += key;

          lcd.setCursor(0,1);
          lcd.print(inputCode);
        }
      }
    }
  }
}

char mapKey(uint8_t data) {
  switch(data) {
    case 0xE1: return '1';
    case 0xE2: return '2';
    case 0xE3: return '3';
    case 0xE4: return '4';
    case 0xE5: return '5';
    case 0xE6: return '6';
    case 0xE7: return '7';
    case 0xE8: return '8';
    case 0xE9: return '9';
    case 0xEA: return '*';
    case 0xEB: return '0';
    case 0xEC: return '#';
    default: return '\0';
  }
}

void checkCode() {

  SERIAL.print("Ingevoerde code: ");
  SERIAL.println(inputCode);

  if(inputCode.length() != codeLength) {
    SERIAL.println("Code moet 6 cijfers zijn!");
  }
  else if(inputCode == locker1Code) {
    openLocker(locker1Pin);
  }
  else if(inputCode == locker2Code) {
    openLocker(locker2Pin);
  }
  else {
  // foute code
    SERIAL.println("FOUTE CODE");
    // foute code projecteren op display
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Foute code!");
    delay(2000);
    // reset van display
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Voer code in:");
  }

  inputCode = ""; // reset na controle
}

void openLocker(int lockerPin) {
// locker openen
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Locker opent!");
  delay(3000); // laat tekst 2seconden staan
  digitalWrite(lockerPin, HIGH);
  delay(3000);                // 3 seconden open

// locker sluiten
  digitalWrite(lockerPin, LOW);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Locker gesloten!");
  delay (2000);
  
// display resetten
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Voer code in:");
}