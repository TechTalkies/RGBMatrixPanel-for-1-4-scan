#include <RGBmatrixPanel.h>

#define CLK 8  // USE THIS ON ARDUINO UNO, ADAFRUIT METRO M0, etc.
//#define CLK A4 // USE THIS ON METRO M4 (not M0)
//#define CLK 11 // USE THIS ON ARDUINO MEGA
#define OE 9
#define LAT 10
#define A A0
#define B A1
#define C A2

#define PANEL_HEIGHT 16
#define PANEL_WIDTH 32

RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false, 1);

void setup() {
  matrix.begin();
  matrix.setTextWrap(true);
  matrix.setTextColor(matrix.Color333(0, 1, 1));
  matrix.print("Helloworld");
}

void loop() {
  // put your main code here, to run repeatedly:

}
