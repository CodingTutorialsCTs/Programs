#include<iostream>
using namespace std;

int main(){
    int exits = 1;
    while (exits)
        {
        int x;
        int y = 2000;
    cout << "You have " << y << " US$ in your bank account.\n\n";
    cout << "Please enter the amount you want to withdraw : ";
    cin >> x;

     if (x == 0){
        cout << "\nError : You have entered 0 for withdraw.\n\n";
        cout << "Do you want to exit: 0) Yes  1) No :\n";
        cin >> exits;
    }

     else if (x % 5 == 0 && (x + 0.50) <= y){
        cout << "\nYou have a successful transaction of " << x << " US$.\n\n";

       double Enter = y - (x + 0.50);
       int w;
    cout << "If you want to check your account balance please enter key 1 : ";
    cin >> w;
    switch (w)
    case 1:
    cout << "\n\nNow you have "<< Enter << " US$ in your bank account. And 0.50 US$ is deducted in Tax.\n\n";
    cout << "Do you want to exit: 0) Yes  1) No :\n";
    cin >> exits;
    }

    else{
        cout << "\nError: You have entered a invalid amount to be withdraw.\n\n";
        cout << "Do you want to exit: 0) Yes  1) No :\n";
        cin >> exits;
    }
  }

    return 0;
}
