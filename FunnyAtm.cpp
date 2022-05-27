#include <iostream>
#include <windows.h>
using namespace std;

int main (){
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
int exits = 1;
while (exits)
{
    int input;
            string a;
            string b;
            SetConsoleTextAttribute(console_color, 13);
    cout << "Select Your Bank : \n"; SetConsoleTextAttribute(console_color, 32); 
    cout << "\n1)HDFC   2)SBI   3)Bank Of Baroda    4)PNB    5)Indian Bank    6)Indusland Bank    7)Kotak    8)DBGB\n";
            SetConsoleTextAttribute(console_color, 7);
    cin >> input;
    switch(input)
    {
    case 1: {
                cout << "HDFC Bank ::\n";        
                cout << "Please enter your A/C name : ";
                cin >> a;
                cout << "\nYour A/C name is : "<< a;
                int k = 5000;
                cout << "\nYou have "<<k <<" US$ in your A/C";
                int y;
                cout << "\nHow much money you want to withdraw : ";
                cin >> y;
                if ( y > k){
        SetConsoleTextAttribute(console_color, 12);
                    cout << "\nWARNING : You have enter a wrong amount." << "\t:Please enter a valid amount to withdraw";
        SetConsoleTextAttribute(console_color, 7);
                }
                else {
                    int j = 1;
                    int m;
                cout << "\nProccessing......\n";
                cout << "Done You have a successful transaction.\n" << "Want to see your A/C balance :   If   YES press 1   rather press any number...";
                cin >> m;
                if (m == j){
                    cout << "\nYour current A/C balance is : "<< k - y <<" US$" << "\nHDFC Bank!\t" <<"Have a good day.\n";
                }
                else {
                    cout << "\nThank You for using HDFC!\t" <<"Have a good day.\n";
                }
                }

        cout << "\nDo you want to exit?  0)YES   1)NO : ";
        cin >> exits;
            }
        break;

    case 2: {
                cout << "SBI ::\n";
                cout << "Please enter your A/C name : ";
                cin >> b;
                cout << "\nYour A/C name is : "<< b;
                int l = 9000;
                cout << "\nYou have "<<l <<" US$ in your A/C";
                int z;
                cout << "\nHow much money you want to withdraw : ";
                cin >> z;
                if ( z > l){
        SetConsoleTextAttribute(console_color, 12);
                    cout << "\nWARNING : You have enter a wrong amount." << "\t:Please enter a valid amount to withdraw";
        SetConsoleTextAttribute(console_color, 7);
                }
                else {
                    int q = 1;
                    int n;
                cout << "\nProccessing......\n";
                cout << "Done You have a successful transaction.\n" << "Want to see your A/C balance :   If   YES press 1   rather press any number...";
                cin >> n;
                if (n == q){
                    cout << "\nYour current A/C balance is : "<< l - z <<" US$" << "\nSBI Bank!\t" <<"Have a good day.\n";
                }
                else {
                    cout << "\nThank You for using SBI!\t" <<"Have a good day.\n";
                }
                }

        cout << "\nDo you want to exit?  0)YES   1)NO : ";
        cin >> exits;
            }
        break;

    case 3:{
                cout << "Bank Of Baroda ::\n";
                cout << "Please enter your A/C name : ";
                cin >> b;
                cout << "\nYour A/C name is : "<< b;
                int l = 3000;
                cout << "\nYou have "<<l <<" US$ in your A/C";
                int z;
                cout << "\nHow much money you want to withdraw : ";
                cin >> z;
                if ( z > l){
        SetConsoleTextAttribute(console_color, 12);
                    cout << "\nWARNING : You have enter a wrong amount." << "\t:Please enter a valid amount to withdraw";
        SetConsoleTextAttribute(console_color, 7);
                }
                else {
                    int q = 1;
                    int n;
                cout << "\nProccessing......\n";
                cout << "Done You have a successful transaction.\n" << "Want to see your A/C balance :   If   YES press 1   rather press any number...";
                cin >> n;
                if (n == q){
                    cout << "\nYour current A/C balance is : "<< l - z <<" US$" << "\nBank Of Baroda!\t" <<"\tHave a good day.\n";
                }
                else {
                    cout << "\nThank You for using Bank Of Baroda!\t" <<"Have a good day.\n";
                }
                }

        cout << "\nDo you want to exit?  0)YES   1)NO : ";
        cin >> exits;
    }
        break;

    case 4:{
                cout << "PNB ::\n";
                cout << "Please enter your A/C name : ";
                cin >> b;
                cout << "\nYour A/C name is : "<< b;
                int l = 12000;
                cout << "\nYou have "<<l <<" US$ in your A/C";
                int z;
                cout << "\nHow much money you want to withdraw : ";
                cin >> z;
                if ( z > l){
        SetConsoleTextAttribute(console_color, 12);
                    cout << "\nWARNING : You have enter a wrong amount." << "\t:Please enter a valid amount to withdraw";
        SetConsoleTextAttribute(console_color, 7);
                }
                else {
                    int q = 1;
                    int n;
                cout << "\nProccessing......\n";
                cout << "Done You have a successful transaction.\n" << "Want to see your A/C balance :   If   YES press 1   rather press any number...";
                cin >> n;
                if (n == q){
                    cout << "\nYour current A/C balance is : "<< l - z <<" US$" << "\nPNB Bank!\t" <<"Have a good day.\n";
                }
                else {
                    cout << "\nThank You for using PNB!\t" <<"Have a good day.\n";
                }
                }

        cout << "\nDo you want to exit?  0)YES   1)NO : ";
        cin >> exits;
    }
        break;

    case 5:{
                cout << "Indian Bank::\n";
                cout << "Please enter your A/C name : ";
                cin >> b;
                cout << "\nYour A/C name is : "<< b;
                int l = 50000;
                cout << "\nYou have "<<l <<" US$ in your A/C";
                int z;
                cout << "\nHow much money you want to withdraw : ";
                cin >> z;
                if ( z > l){
        SetConsoleTextAttribute(console_color, 12);
                    cout << "\nWARNING : You have enter a wrong amount." << "\t:Please enter a valid amount to withdraw";
        SetConsoleTextAttribute(console_color, 7);
                }
                else {
                    int q = 1;
                    int n;
                cout << "\nProccessing......\n";
                cout << "Done You have a successful transaction.\n" << "Want to see your A/C balance :   If   YES press 1   rather press any number...";
                cin >> n;
                if (n == q){
                    cout << "\nYour current A/C balance is : "<< l - z <<" US$" << "\nIndian Bank!\t" <<"Have a good day.\n";
                }
                else {
                    cout << "\nThank You for using Indian Bank!\t" <<"Have a good day.\n";
                }
                }

        cout << "\nDo you want to exit?  0)YES   1)NO : ";
        cin >> exits;
    }
        break;

    case 6:{
                cout << "Indusland Bank ::\n";
                cout << "Please enter your A/C name : ";
                cin >> b;
                cout << "\nYour A/C name is : "<< b;
                int l = 2000;
                cout << "\nYou have "<<l <<" US$ in your A/C";
                int z;
                cout << "\nHow much money you want to withdraw : ";
                cin >> z;
                if ( z > l){
        SetConsoleTextAttribute(console_color, 12);
                    cout << "\nWARNING : You have enter a wrong amount." << "\t:Please enter a valid amount to withdraw";
        SetConsoleTextAttribute(console_color, 7);
                }
                else {
                    int q = 1;
                    int n;
                cout << "\nProccessing......\n";
                cout << "Done You have a successful transaction.\n" << "Want to see your A/C balance :   If   YES press 1   rather press any number...";
                cin >> n;
                if (n == q){
                    cout << "\nYour current A/C balance is : "<< l - z <<" US$" << "\nIndsuland Bank!\t" <<"\tHave a good day.\n";
                }
                else {
                    cout << "\nThank You for using Indusland Bank!\t" <<"Have a good day.\n";
                }
                }

        cout << "\nDo you want to exit?  0)YES   1)NO : ";
        cin >> exits;
    }  
        break;

    case 7:{
                cout << "Kotak ::\n";
                cout << "Please enter your A/C name : ";
                cin >> b;
                cout << "\nYour A/C name is : "<< b;
                int l = 6000;
                cout << "\nYou have "<<l <<" US$ in your A/C";
                int z;
                cout << "\nHow much money you want to withdraw : ";
                cin >> z;
                if ( z > l){
        SetConsoleTextAttribute(console_color, 12);
                    cout << "\nWARNING : You have enter a wrong amount." << "\t:Please enter a valid amount to withdraw";
        SetConsoleTextAttribute(console_color, 7);
                }
                else {
                    int q = 1;
                    int n;
                cout << "\nProccessing......\n";
                cout << "Done You have a successful transaction.\n" << "Want to see your A/C balance :   If   YES press 1   rather press any number...";
                cin >> n;
                if (n == q){
                    cout << "\nYour current A/C balance is : "<< l - z <<" US$" << "\nKotak!\t" <<"\tHave a good day.\n";
                }
                else {
                    cout << "\nThank You for using Kotak!\t" <<"Have a good day.\n";
                }
                }

        cout << "\nDo you want to exit?  0)YES   1)NO : ";
        cin >> exits;
    }  
        break;

    case 8:{
                cout << "DBGB ::\n";
        SetConsoleTextAttribute(console_color, 16);
                cout << "Sorry!!    We have not any amount currently*";
        SetConsoleTextAttribute(console_color, 7);
                cout << "\nThank You for using DBGB!\t"<<"Have a good day.\n";
        cout << "\nDo you want to exit?  0)YES   1)NO : ";
        cin >> exits;
    }
        break; 
    
    default : SetConsoleTextAttribute(console_color, 12);
                cout << "ERROR : You have selected a invalid bank. Please select a valid option from the given.... ";
                SetConsoleTextAttribute(console_color, 7);
        cout << "\nDo you want to exit?  0)YES   1)NO : ";
        cin >> exits;
    }
}
    return 0;
}