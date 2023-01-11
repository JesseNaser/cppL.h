#include "iostreamL.h"

using namespace std;

int cini() {
  bool checkpass;

  string userInput;
  int sanitizedInput;

  do {
    getline(cin, userInput);
    checkpass = true;

    try {
      sanitizedInput = stoi(userInput);
    } catch (const invalid_argument&) {
      checkpass = false;
      cout << "\n"
           << "Invalid entry, please try again:"
           << " ";
    }
  } while (checkpass == false);
  return sanitizedInput;
}

float cinf() {
  bool checkpass;

  string userInput;
  float sanitizedInput;

  do {
    getline(cin, userInput);
    checkpass = true;

    try {
      sanitizedInput = stof(userInput);
    } catch (const invalid_argument&) {
      checkpass = false;
      cout << "\n"
           << "Invalid entry, please try again:"
           << " ";
    }
  } while (checkpass == false);
  return sanitizedInput;
}

double cind() {
  bool checkpass;

  string userInput;
  double sanitizedInput;

  do {
    getline(cin, userInput);
    checkpass = true;

    try {
      sanitizedInput = stod(userInput);
    } catch (const invalid_argument&) {
      checkpass = false;
      cout << "\n"
           << "Invalid entry, please try again:"
           << " ";
    }
  } while (checkpass == false);
  return sanitizedInput;
}