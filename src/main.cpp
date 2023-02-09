#include <hardware/gpio.h>
#include <stdlib.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include "game_menu.h"

#define TFT_CS 17 // GP17
#define TFT_DC 20 // GP16
#define LED_BUILTIN 25

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

#define BLACK 0x0000
#define BLUE 0x001F
#define RED 0xF800
#define GREEN 0x07E0
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define YELLOW 0xFFE0
#define WHITE 0xFFFF

void setup()
{
  // put your setup code here, to run once:
  Serial1.begin(115200);
  Serial1.println("Hello world!");

  // pinMode(TFT_DC, OUTPUT);
  // pinMode(TFT_CS, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);

  tft.begin();
  tft.setRotation(1);
  tft.setTextColor(WHITE);

  gameMenu(tft);
}

void loop()
{
  // put your main code here, to run repeatedly:
  delay(1); // this speeds up the simulation
}
