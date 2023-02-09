#include <iostream>
#include <string>
#include <array>
#include <Adafruit_ILI9341.h>
using namespace std;

#define BTT_UP 13
#define BTT_RIGHT 12
#define BTT_DOWN 11
#define BTT_LEFT 10

template <class T, size_t N>
std::size_t Length(const T (&)[N])
{
  return N;
};

string games[] = {
    "Mario Bros 3",
    "River City Ransom",
    "Super Mario World",
};
int gamesLength = Length(games);

int selectedGame = 0;

void printGamesWithOneSelected(Adafruit_ILI9341 tft, int selectedPos)
{
  int listLength = Length(games);

  for (int i = 0; i < listLength; i += 1)
  {
    tft.println(games[i].c_str());
    if (i == selectedPos)
    {
      tft.println("Selected");
    }
  };

  Serial1.println(listLength);
  tft.println("It's the final countdown");
}

void gameMenu(Adafruit_ILI9341 tft)
{
  tft.setTextSize(2);
  printGamesWithOneSelected(tft, 1);
}