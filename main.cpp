#include <raylib.h>
#include <sstream>
#include <string>
#include "dice.h"

std::string get_die(int num){

  std::ostringstream oss;
  oss << "Dice" << num << ".png";

  return oss.str();
}

int main(void){

  Dice die(6);
  int x;
  std::string load = "";

  InitWindow(800, 600, "Dice Roller");

  SetTargetFPS(60);
  
  Texture2D diceImage = LoadTexture("dice0.png");

  while(!WindowShouldClose()){

    if(IsKeyPressed(KEY_SPACE)){

      x = die.rand_num();
      
      UnloadTexture(diceImage);

      Texture2D diceImage = LoadTexture(get_die(x).c_str());
    }

    BeginDrawing();

    ClearBackground(DARKBLUE);

    DrawTexture(diceImage, 350, 250, MAROON);

    DrawText("Press SPACE to roll the dice!", 175, 100, 30, BLACK);

    EndDrawing();
  }

  UnloadTexture(diceImage);
  
  CloseWindow();

  return 0;
}
