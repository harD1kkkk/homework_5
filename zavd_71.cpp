// zavd_71.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "String.h"
#include <iostream>

using namespace std;

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Create default string" << endl;
    cout << "2. Create string with custom size" << endl;
    cout << "3. Create string from user input" << endl;
    cout << "4. Copy a string" << endl;
    cout << "5. Exit" << endl;
    cout << "Select an option: ";
}

int main()
{
    int choice;
    String defaultString;
    size_t customSize;
    char userInput[100];
    String userString;

    do {
        displayMenu();
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Default string:" << endl;
            defaultString.output();
            break;

        case 2:
            cout << "Enter custom size: ";
            cin >> customSize;
            cin.ignore();
            {
                // Creating a String object with a custom size
                String customSizeString(customSize);
                customSizeString.input();
                cout << "Custom size string:" << endl;
                customSizeString.output();
            }
            break;

        case 3:
            cout << "Enter a string: ";
            cin.getline(userInput, 100);
            userString = String(userInput);
            cout << "User string:" << endl;
            userString.output();
            break;

        case 4:
        {
            // Copying a string
            String copiedString = userString;
            cout << "Copied string:" << endl;
            copiedString.output();
        }
        break;

        case 5:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid option. Please select again." << endl;
            break;
        }
    } while (choice != 5);

}

