#include "UtilityFunctions.h"
#include "catch.hpp"

int main(int argc, char** argv){
  UtilityFunctions* f = new UtilityFunctions();
  std::cout << f->Factorial(2) << std::endl;
  std::vector<bool> test = f->EvenMask({1, 2, 3, 4, 5});
}

