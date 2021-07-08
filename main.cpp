#include <iostream>
#include "userInterface.h"

using namespace std;

int main() {

  int userInput = 0;
  while (userInput != 3) {
    printOptions();
    cin >> userInput;
  }

  return 0;
}
