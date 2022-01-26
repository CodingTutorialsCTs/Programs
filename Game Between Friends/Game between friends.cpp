#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    int diff;
	    int diff2;
	    diff = a - b;
	    diff2 = c - d;
	    char winner = 'N';
	    char loser = 'S';
	    if(diff < 0)
	    {
	        winner = 'S';
	        loser = 'N';
	    }
        if(abs(diff) > c)
        {
            if((c+d) >= abs(diff))
            {
                cout << loser << "\n";
            }
            else
            {
                cout << winner << "\n";
            }
        }
        else
        {
            if (abs(diff) == c && winner == 'S')
            {
                if(d!=0)
                {
                    cout << winner << "\n";
                }
                else
                {
                    cout << loser << "\n";
                }
            }
            else
            {
                int diff2 = abs(c - abs(diff));
                if (d > diff2)
                {
                    cout << winner << "\n";
                }
                else
                if (d == diff2)
                {
                    cout << "N\n";
                }
                else
                {
                    cout << loser << "\n";
                }
            }
        }
	}
	return 0;
}

