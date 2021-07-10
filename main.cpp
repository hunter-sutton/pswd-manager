#include <iostream>
#include "userInterface.h"
#include "file_interact.h"

using namespace std;

int main() {

  int userInput = 0;
  while (userInput != 3) {
    printOptions();
    cin >> userInput;
    if (userInput == 1) {
      writeNewLoginInfo(getNewLoginPass(), getNewLoginUsername(), getNewLoginName());
    }
    else if (userInput == 2) {
      //let user edit some desired login info
    }
  }

  return 0;
}
