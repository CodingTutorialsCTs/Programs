#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
    string user,pass,ux,px;
    int option;
    cout <<"\n\nWELCOME TO OUR FIRST APP :::\n" <<"First register yourself  ::\n\n" << "1) LOGIN \t 2) REGISTER\n";
    cin >> option;

    if (option == 2){
        cout << "REGISTRATION PAGE ::\n\n";
        cout << "Set a Username (ONLY SINGLE CHARACTER*) : ";
        cin >> user;
        cout <<"\n";
        cout << "Set a Password (WITHOUT SPACING*) : ";
        cin >> pass;
        cout << "\n\n" <<"YOU HAVE SUCCESSFULLY REGISTERED YOURSELF*_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << "\nNow you can login........";

            ofstream registr("registration.txt");
            registr << user << "\n"<< pass;
            registr.close();
        main();
    }

    else if(option == 1){
        cout << "LOGIN PAGE ::\n\n";
        cout << "Enter Username : ";
        cin >> ux;
        cout << "\n" << "Enter Password : ";
        cin >> px;

//This function read the registered file//

            ifstream login("registration.txt");
            getline (login, user);
            getline (login, pass);
                if (ux == user && px == pass){
                cout << "\n\n" <<"REDIRECTING TO YOUR ACCOUNT* _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
                }

                else{
                    cout << "Failed to LogIn...\t Please check your username or password....";
                }
            login.close();
    }

    else {
        cout << "You have choosen an invalid option.\t Please choose a valid option from the given.";
        main();
    }
    return 0;
}