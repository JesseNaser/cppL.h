#include "iostreamL.h"

using namespace std;

int cini() {
    int checkpass = 0;

    string userInput;
    int sanitizedInput;

    while (checkpass == 0) {
        getline(cin, userInput);
        checkpass = 1;

        try {
            sanitizedInput = stoi(userInput);
        }
        catch (const invalid_argument&) {
            checkpass = 0;
            cout << "\n"
                << "Invalid entry, please try again:"
                << " ";
        }
    }
    return sanitizedInput;
}

float cinf() {
    float checkpass = 0;

    string userInput;
    float sanitizedInput;

    while (checkpass == 0) {
        getline(cin, userInput);
        checkpass = 1;

        try {
            sanitizedInput = stof(userInput);
        }
        catch (const invalid_argument&) {
            checkpass = 0;
            cout << "\n"
                << "Invalid entry, please try again:"
                << " ";
        }
    }
    return sanitizedInput;
}

double cind() {
    double checkpass = 0;

    string userInput;
    double sanitizedInput;

    while (checkpass == 0) {
        getline(cin, userInput);
        checkpass = 1;

        try {
            sanitizedInput = stod(userInput);
        }
        catch (const invalid_argument&) {
            checkpass = 0;
            cout << "\n"
                << "Invalid entry, please try again:"
                << " ";
        }
    }
    return sanitizedInput;
}