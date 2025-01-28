#include <iostream>
#include <cstdlib>
#include "dice.h"

Dice::Dice(int f){

  faces = f;
  std::cout << "A die with " << faces << " sides has been created." << std::endl;
}

Dice::Dice(void){

  faces = 6;
  std::cout << "A generic, 6 sided dice has been created." << std::endl;
}

int Dice::rand_num(void){

  srand(time(0));

  int x = (rand() % faces) + 1;
  
  return x;
}

int Dice::get_faces(void){

  return faces;
}

void Dice::set_faces(int f){

  faces = f;
}

void Dice:: print_info(void){

  std::cout << "This die has " << faces << " sides." << std::endl;
}
