#include <iostream>
using namespace std;

int guessNumber() {
  cout << "Zgadnij odpowiednią liczbę pomiędzy 1 a 100!" << endl;
  cout << "Masz tylko 5 szans:" << endl;
  
  int n,i;          
  int number; 
  srand(time(0));
  
  number=rand()%101;
  
  for(i=0; i<5; i++)
  {
    cin >> n;
    if(number == n) {
      cout << "\nGratulacje! Zgadłeś/aś odpowiednią liczbę używając w tylko " << i+1 << "próbach!";
      break;
    } else if(number > n) {
      cout << "\nLiczba, którą wpisałeś/aś jest mniejsza od szukanej, Pozostałe szansy: " << 5 - (i+1) << ". ";
    } else if(number < n) {
      cout << "\nLiczba, którą wpisałeś/aś jest większa od szukanej, Pozostałe szansy: " << 5-(i+1) << ". ";
    }
  }
  if(i == 5) {
    cout<<"\n\nNiestety nie udało Ci się znaleźć odpowiedniej liczby ( " << number << " )!" << endl;
  }
  return 0;
}