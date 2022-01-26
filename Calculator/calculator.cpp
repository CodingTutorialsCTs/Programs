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
	    char int1, int2;
	    int int3, int4;
	    cout << "Select Operation:\n";
	    cout << "1)Addition 2)Subtration 3)Multiplication 4)Division\n";
	    cin >> input;
	    switch(input)
	    {
	        case 1: cout << "You have selected Addition Operation\n";
	                cout << "Enter two digit to add\n";
	                cin >> int1 >> int2;
	                cout << (int1-48) + (int2-48);
	                cout << "\n";
	                cout << "Do you want to exit? 0) Yes 1)No:";
	                cin >> exits;
	                break;
	        case 2: cout << "You have selected Subtration Operation\n";
	                cout << "Enter two digits to sub\n";
	                cin >> int3 >> int4;
	                cout << int3 - int4;
	                cout << "\n";
	                cout << "Do you want to exit? 0) Yes 1)No:";
	                cin >> exits;
	                break;
	        case 3: cout << "You have selected Multiplication Operation\n";
	                cout << "Enter two digits to multiply\n";
	                cin >> int3 >> int4;
	                cout << int3 * int4;
	                cout << "\n";
	                cout << "Do you want to exit? 0) Yes 1)No:";
	                cin >> exits;
	                break;

	       case 4:
	                cout << "You have selected Division Operation\n";
	                cout << "Enter two digits to divide\n";
	                cin >> int3 >> int4;
	                if (int4 == 0)
	                {
	                    SetConsoleTextAttribute(hConsole,FOREGROUND_RED);
	                    cout << "ERROR: You have entered 0 as denominator\n";
	                    SetConsoleTextAttribute(hConsole, 7);
	                } else {
	                    cout << int3/int4;
	                    cout << "\n";
	                }
	                cout << "Do you want to exit? 0) Yes 1)No:";
	                cin >> exits;
	                break;

	       default: SetConsoleTextAttribute(hConsole, 14);
	                cout << "WARNING: you have not selected any valid option please select among 1,2,3,4\n";
                    SetConsoleTextAttribute(hConsole, 7);
	                cout << "Do you want to exit? 0) Yes 1)No:";
	                cin >> exits;
	    }
	}
	return 0;
}
