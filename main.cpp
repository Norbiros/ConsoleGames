#include <iostream>
#include "games/guess_number.cpp"
using namespace std;

int main() {
  int currentGame; 
  cout << "Witaj w ConsoleGames++!" << endl;
  cout << " - prostych grach w konsoli stworzonych przez Norbiros'a" << endl;
  cout << "\nList gier:" << endl;
  cout << "1. Zgadnij liczbę" << endl;
  cout << "\nNapisz id gry, aby rozpocząć zabawę!" << endl;
  
  cin >> currentGame;
  cout << "Ładowanie gry " << currentGame << "..." << endl;

  int game;
  switch(currentGame) {
    case 1:
      game = guessNumber();
      break;
    default:
      cout << "Niestety gra " << currentGame << " nie istnieje!" << endl;
  }
  return 0;
} 