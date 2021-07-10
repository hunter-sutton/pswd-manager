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

string getNewLoginName() {
  cout << "Enter a desired name for the new login info: ";
  string loginName = "";
  cin >> loginName;
  return loginName;
}

string getNewLoginUsername() {
  cout << "Username: ";
  string username = "";
  cin >> username;
  return username;
}

string getNewLoginPass() {
  cout << "Password: ";
  string password = "";
  cin >> password;
  return password;
}

#endif
