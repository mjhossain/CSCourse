#include "header.h"
#include <iostream>

using namespace std;

int funFunc()
{
    string name;
    int info;

    cout << "Welcome to J.A.R.V.I.S\n\n";
    cout << "Please enter your credentials: ";
    cin >> name;
    if(name == "Zakir") {
        cout << "Welcome Sir, what would you like to check today? \n\n";
        cout << "1. J.A.R.V.I.S Database\n2. Appledorm\n3. Watson\n";
        cout << "Enter a Choice: ";
        cin >> info;
        switch(info)
        {
        case(1):
            cout << "\nWelcome to the database of J.A.R.V.I.S.\n";
            break;
        case(2):
            cout << "\nLets have a journey of Appledorm.\n";
            break;
        case(3):
            cout << "\nInitializing Watson\n";
            break;
        default:
            cout << "\nInvalid Choice... Terminating System!";
        }
    }

    return 0;
}
