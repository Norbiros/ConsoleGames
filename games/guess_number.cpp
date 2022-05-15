#include <iostream>
using namespace std;

int guessNumber() {
  cout << "Zgadnij odpowiednią liczbę pomiędzy 1 a 50." << endl;
  cout << "Masz tylko 5 szans. No to zaczynajaj:" << endl;
  
  int n,i;          
  int number; 
  srand(time(0));
  
  number=rand()%51;
  
  for(i=0; i<5; i++)
  {
    cin >> n;
    if(number == n) {
      cout << "x1B[32m" << "\nGratulacje! Zgadłeś/aś odpowiednią liczbę używając w tylko " << i+1 << " próbach!" << "\033[0m\t\t" << endl;
      break;
    } else if(number > n) {
      cout << "Szukana liczba jest \e[1mwiększa\e[0m od podanej! Pozostałe szansy: " << 5 - (i+1) << ". ";
    } else if(number < n) {
      cout << "Szukana liczba jest \e[1mmniejsza\e[0m od podanej! Pozostałe szansy: " << 5-(i+1) << ". ";
    }
  }
  if(i == 5) {
    cout << "\x1B[31m" << "\n\nNiestety nie udało Ci się znaleźć odpowiedniej liczby ( " << number << " )!" << "\033[0m\t\t" << endl;
  }
  return 0;
}
