#include <iostream>
#include "games/guess_number.cpp"
#include "games/rock_paper_scissors.cpp"
using namespace std;

// To export: g++ -o main main.cpp
// To run: ./main
int main() {
  int currentGame; 
  cout << "Witaj w ConsoleGames++!" << endl;
  cout << " - prostych grach w konsoli stworzonych przez Norbiros'a" << endl;
  cout << "\nList gier:" << endl;
  cout << "1. Zgadnij liczbę" << endl;
  cout << "2. Papier, kamień, nożyce" << endl;
  cout << "\nNapisz id gry, aby rozpocząć zabawę!" << endl;
  
  cin >> currentGame;
  cout << "Ładowanie gry " << currentGame << "..." << endl;

  int game;
  switch(currentGame) {
    case 1:
      game = guessNumber();
      break;
    case 2:
      game = rockPaperScissors();
      break;
    default:
      cout << "Niestety gra " << currentGame << " nie istnieje!" << endl;
  }
  return 0;
} 