#ifndef FILE_INTERACT_H
#define FILE_INTERACT_H

#include <iostream>
#include <fstream>

using namespace std;

void writeNewLoginInfo(string pass, string username, string name) {
  ofstream logins;
  logins.open("login.txt");
  logins << "--------------------\n";
  logins << name << "\n";
  logins << "Username: " << username << "\n";
  logins << "Password: " << pass;
  logins << "\n--------------------";
  logins.close();
}

#endif
