#include "iostreamL.h"

using namespace std;

int cini() {
    bool checkpass = false;

    string userInput;
    int sanitizedInput;

    while (checkpass == false) {
        getline(cin, userInput);
        checkpass = true;

        try {
            sanitizedInput = stoi(userInput);
        }
        catch (const invalid_argument&) {
            checkpass = false;
            cout << "\n"
                << "Invalid entry, please try again:"
                << " ";
        }
    }
    return sanitizedInput;
}

float cinf() {
    bool checkpass = false;

    string userInput;
    float sanitizedInput;

    while (checkpass == false) {
        getline(cin, userInput);
        checkpass = true;

        try {
            sanitizedInput = stof(userInput);
        }
        catch (const invalid_argument&) {
            checkpass = false;
            cout << "\n"
                << "Invalid entry, please try again:"
                << " ";
        }
    }
    return sanitizedInput;
}

double cind() {
    bool checkpass = false;

    string userInput;
    double sanitizedInput;

    while (checkpass == false) {
        getline(cin, userInput);
        checkpass = true;

        try {
            sanitizedInput = stod(userInput);
        }
        catch (const invalid_argument&) {
            checkpass = false;
            cout << "\n"
                << "Invalid entry, please try again:"
                << " ";
        }
    }
    return sanitizedInput;
}