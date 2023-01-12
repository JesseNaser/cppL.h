#include <iostream>
#include "iostreamL.h"

using namespace std;

int cini(string repeatedPrompt) {
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
      cout << repeatedPrompt;
    }
  } while (checkpass == false);
  return sanitizedInput;
}

float cinf(string repeatedPrompt) {
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
      cout << repeatedPrompt;
    }
  } while (checkpass == false);
  return sanitizedInput;
}

double cind(string repeatedPrompt) {
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
      cout << repeatedPrompt;
    }
  } while (checkpass == false);
  return sanitizedInput;
}