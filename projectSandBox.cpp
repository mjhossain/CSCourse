#include "header.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

// Declaring a global variables
string password = "thanos";
int attempt = 1;

// functions
string attemptLogin() {
        string userInput;
        char pwd;
        cout << "Enter Password: ";
        pwd = getch();
        while(pwd != 13) {
            userInput.push_back(pwd);
            cout << "*";
            pwd = getch();
        }
        return userInput;
}

int loginSuccess()
{
        cout << "\n\n\n\n";
        cout << "\t************************" << endl;
        cout << "\t*                      *" << endl;
        cout << "\t*  Welcome to Project  *" << endl;
        cout << "\t*        ODIN          *" << endl;
        cout << "\t*   Your Password is   *" << endl;
        cout << "\t*        " << password << "        *" << endl;
        cout << "\t*                      *" << endl;
        cout << "\t************************" << endl;
        cout << "\n\n\n\n";
        exit(0);
}

void loginFailed()
{
    cout << "\n\n\n\n";
    cout << "\tAccess Denied.. Try Again!";
    cout << "\Atempt: " << attempt << "/3";
    cout << "\n\n\n\n";
    attempt++;
    projectSandBox();
}

void projectSandBox()
{


    string uInput = attemptLogin();


    if(uInput == password) {
        loginSuccess();
    } else if (uInput != password) {

        while(attempt < 3) {
            loginFailed();
        }
    }


}
