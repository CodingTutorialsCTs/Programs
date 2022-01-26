#include <iostream>
using namespace std;
int main() {
    int exits = 1;
    while (exits)
{
  double weight;
  int x;
  cout <<"Please enter your weight in Kg(s) according to Earth:";
  cin >> weight;
  cout <<"\nPlease select a planet by their numbering where you want to boxing:\n";
  cout << "1. Mercury\t 2. Venus\t 3. Mars\n" <<"4. Jupiter\t 5. Saturn\t 6. Uranus\n"<<"7. Neptune\n";
cin >> x;
switch(x){
  case 1:
    cout <<"Your weight on Mercury is "<< weight*0.38<<"\n\n";
    cout <<" Do you want to exit?\n 0) Yes 1) No:";
    cin >> exits;
  break;

case 2:
  cout <<"Your weight on Venus is "<< weight*0.91<<"\n\n";
  cout <<" Do you want to exit?\n 0) Yes 1) No:";
    cin >> exits;
break;

case 3:
  cout <<"Your weight on Mars is "<< weight*0.38<<"\n\n";
  cout <<" Do you want to exit?\n 0) Yes 1) No:";
    cin >> exits;
break;

case 4:
  cout <<"Your weight on Jupiter is "<< weight*2.34<<"\n\n";
  cout <<" Do you want to exit?\n 0) Yes 1) No:";
    cin >> exits;
break;

case 5:
  cout <<"Your weight on Saturn is "<< weight*1.06<<"\n\n";
  cout <<" Do you want to exit?\n 0) Yes 1) No:";
    cin >> exits;
break;

case 6:
  cout <<"Your weight on Uranus is "<< weight*0.92<<"\n\n";
  cout <<" Do you want to exit?\n 0) Yes 1) No:";
    cin >> exits;
break;

case 7:
  cout <<"Your weight on Neptune is "<< weight*1.19<<"\n\n";
  cout <<" Do you want to exit?\n 0) Yes 1) No:";
    cin >> exits;
break;

}
}
return 0;
}
