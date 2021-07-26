#ifndef FILE_INTERACT_H
#define FILE_INTERACT_H

#include <iostream>
#include <fstream>

using namespace std;

void writeNewLoginInfo(string login_name, string username, string password) {
  ofstream logins;
  logins.open("login.txt", ios_base::app);
  logins << "--------------------\n";
  logins << login_name << "\n";
  logins << "Username: " << username << "\n";
  logins << "Password: " << password;
  logins << "\n--------------------";
  logins.close();
}

#endif
