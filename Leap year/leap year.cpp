#include <iostream>
using namespace std;
int main() {
    int exits = 1;
    while(exits)
        {
  int x = 0;
  cout << "Enter Year:";
  cin >> x;
  if (x < 1000 || x > 9999){
    cout << "Invalid Entry\n" << "Please take a valid year\n\n";
    cout << "Do you want to exit:\n"<< "0) Yes   1) No\n";
cin >> exits;
  }
  else if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0){
    cout << "The year " << x << " is a leap year.\n\n";
    cout << "Do you want to exit:\n"<< "0) Yes   1) No\n";
cin >> exits;
  }
  else{
    cout << "The year " << x << " is not a leap year.\n\n";
cout << "Do you want to exit:\n"<< "0) Yes   1) No\n";
cin >> exits;
  }
    }
  return 0;
}
