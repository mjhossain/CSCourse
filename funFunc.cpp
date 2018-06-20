#include "header.h"
#include <iostream>

using namespace std;

int funFunc()
{
    string name;
    string info;

    cout << "Welcome to J.A.R.V.I.S\n\n";
    cout << "Please enter your credentials: ";
    cin >> name;
    if(name == "Zakir") {
        cout << "Welcome Sir, what would you like to check today? \n\n";
        cout << "1. J.A.R.V.I.S Database\n2. Appledorm\n3. Watson\n";
        cin >> info;
        switch(info)
        {
        case(1):
            cout << "\nWelcome to the database of J.A.R.V.I.S.\n";
        }
    }

    return 0;
}
