#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int r;
	    cin >> r;
	    char word[r];
	    int codeIndex = -1;
	    int chefIndex = -1;
	    for(int s=0; s<r; s++)
	    {
	        cin >> word[s];
	    }
	    for(int s=0;s<r-3;s++)
	    {
	        if(word[s]=='c')
	        {
	            if (word[s+1] == 'o' && word[s+2] == 'd' && word[s+3] == 'e')
	            {
	                if(codeIndex == -1)
	                {
	                    codeIndex = s;
	                }
	            }
	            if (word[s+1] == 'h' && word[s+2] == 'e' && word[s+3] == 'f')
	            {
	                if(chefIndex == -1)
	                {
	                    chefIndex = s;
	                }
	            }
	        }
	    }
	    if(chefIndex != -1 && codeIndex != -1 && codeIndex < chefIndex)
	    {
	        cout << "AC\n";
	    }
	    else
	    {
	        cout << "WA\n";
	    }
	}
	return 0;
}


