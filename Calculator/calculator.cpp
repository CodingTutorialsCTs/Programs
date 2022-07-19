#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	// your code goes here
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int exits = 1;
	while(exits)
	{
	    int input;
	    int int1, int2;
	    cout << "\nSelect Operation:\n";
	    cout << "\n1)Addition 2)Subtration 3)Multiplication 4)Division\n";
		SetConsoleTextAttribute(hConsole, 10);
		cout << "\n Please do not select any alphabet to add, sub, multiply, and divide, this may gives you ASCII values and may the loop start in some cases:\n";
		SetConsoleTextAttribute(hConsole, 7);
	    cin >> input;
	    switch(input)
	    {
		    case 1: cout << "ADDITION ::\n";
	                cout << "Enter numbers to add:\n";
	                cin >> int1 >> int2;
	                cout << int1 + int2;
	                cout << "\n";
	                cout << "Do you want to exit? 0) Yes 1)No:";
	                cin >> exits;
	                break;
		    case 2: cout << "SUBTRACTION ::\n";
	                cout << "Enter numbers to sub:\n";
	                cin >> int1 >> int2;
	                cout << int1 - int2;
	                cout << "\n";
	                cout << "Do you want to exit? 0) Yes 1)No:";
	                cin >> exits;
	                break;
		    case 3: cout << "MULTIPLICATION ::\n";
	                cout << "Enter numbers to multiply:\n";
	                cin >> int1 >> int2;
	                cout << int1 * int2;
	                cout << "\n";
	                cout << "Do you want to exit? 0) Yes 1)No:";
	                cin >> exits;
	                break;

	       case 4:
	                cout << "DIVISION ::\n";
	                cout << "Enter numbers to divide:\n";
	                cin >> int1 >> int2;
	                if (int2 == 0)
	                {
	                    SetConsoleTextAttribute(hConsole,FOREGROUND_RED);
	                    cout << "ERROR: You have entered 0 as denominator\n";
	                    SetConsoleTextAttribute(hConsole, 7);
	                } else {
	                    cout << int1/int2;
	                    cout << "\n";
	                }
	                cout << "Do you want to exit? 0) Yes 1)No:";
	                cin >> exits;
	                break;

	       default: SetConsoleTextAttribute(hConsole, 14);
	                cout << "You have not selected any valid option please select among 1,2,3,4\n";
                    SetConsoleTextAttribute(hConsole, 7);
	                cout << "Do you want to exit? 0) Yes 1)No:";
	                cin >> exits;
	    }
	}
	return 0;
}
