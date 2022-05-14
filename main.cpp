#include <iostream>
#include "games/guess_number.cpp"
#include "games/rock_paper_scissors.cpp"
#include "games/what_is_this.cpp"
#include "include/rapidjson/document.h"

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
  cout << "3. Co to jest?" << endl;
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
    case 3:
      game = whatIsThis();
      break;
    default:
      cout << "Niestety gra " << currentGame << " nie istnieje!" << endl;
      game = 0;
  }
  
  if (game != 0) {
    cout << "W trakcie wykonywania kodu wystąpił błąd! Proszę się skontaktować z developerem, aby go naprawić!" << endl;
  }
  return 0;
}
