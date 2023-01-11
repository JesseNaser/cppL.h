#include <iostream>
#include <string>
#include "NumericalValidation.h"

using namespace std;

int nvInteger() {
    int checkpass = 0;
    int checkpoint;

    string userInput;
    int sanitizedInput;

    while (checkpass == 0) {
        getline(cin, userInput);
        checkpoint = 1;

        try {
            sanitizedInput = stoi(userInput);
        }
        catch (const std::invalid_argument& e) {
            checkpoint = 0;
            userInput = "0";
        }
        sanitizedInput = stoi(userInput);

        if (checkpoint == 1) {
            checkpass = 1;
        }
        else if (checkpoint == 0) {
            cout << "\n"
                << "Invalid entry, please try again:" << " ";
        }
    }
    return sanitizedInput;
}

float nvFloat() {
    float checkpass = 0;
    float checkpoint;

    string userInput;
    float sanitizedInput;

    while (checkpass == 0) {
        getline(cin, userInput);
        checkpoint = 1;

        try {
            sanitizedInput = stof(userInput);
        }
        catch (const std::invalid_argument& e) {
            checkpoint = 0;
            userInput = "0";
        }
        sanitizedInput = stof(userInput);

        if (checkpoint == 1) {
            checkpass = 1;
        }
        else if (checkpoint == 0) {
            cout << "\n"
                << "Invalid entry, please try again:" << " ";
        }
    }
    return sanitizedInput;
}

double nvDouble() {
    double checkpass = 0;
    double checkpoint;

    string userInput;
    double sanitizedInput;

    while (checkpass == 0) {
        getline(cin, userInput);
        checkpoint = 1;

        try {
            sanitizedInput = stod(userInput);
        }
        catch (const std::invalid_argument& e) {
            checkpoint = 0;
            userInput = "0";
        }
        sanitizedInput = stod(userInput);

        if (checkpoint == 1) {
            checkpass = 1;
        }
        else if (checkpoint == 0) {
            cout << "\n"
                << "Invalid entry, please try again:" << " ";
        }
    }
    return sanitizedInput;
}
