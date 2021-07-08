#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <iostream>

using namespace std;

void printOptions() {
  cout << endl << "=====" << endl;
  cout << "(1) Add New Login" << endl;
  cout << "(2) Edit Login Info" << endl;
  cout << "(3) Quit" << endl;
  cout << "=====" << endl;
  cout << endl << "Choose an option: ";
}

#endif
