#include <iostream>
#include <chrono>
#include <thread>
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include <list>
#include <ctype.h>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int rockPaperScissors() {
  int n, i, index, number;
  string val;
  
  cout << "Gra w papier, kamien, nożyce!" << endl;
  cout << "Podaj papier/kamień/nożyce, aby zacząć grę!" << endl;
  const char *colour[4] = { "Papier", "Kamień", "Nożyce"  };
  list<int> wins = { 3, 1, 2 };
  list<int>::iterator it;
  
  for( i=0; i<3; i++ ) {
    srand (time(NULL));
    number = rand()%3;

    std::string s;
    cin >> s;
    
    if (s == "papier") {
      n = 1;
    } else if (s == "kamień") {
      n = 2;
    } else if (s == "nożyce") {
      n = 3;
    } else {
      n = stoi(s);
    }

    cout << "Papier..." << endl;
    sleep_for(seconds(1));
    cout << "...Kamień..." << endl;
    sleep_for(seconds(1));
    cout << "...Nożyce!" << endl;
    sleep_for(seconds(1));
    
    it = wins.begin();
    advance(it, number);
    cout << "Powinieneś dać: " << colour[*it - 1] << endl;

    if(n - 1 == number) {
       cout << "Remis! ( Przeciwnik: " << colour[number] << " Ty: " << colour[n - 1] << ")" << endl;
    }else if(*it == n) {
      cout << "Gratulacje wygrałeś! ( Przeciwnik: " << colour[number] << " Ty: " << colour[n - 1] << ")" << endl;
    } else {
      cout << "Przegrałeś! ( Przeciwnik: " << colour[number] << " Ty: " << colour[n - 1] << ")" << endl;
    } 
    
    

  }
  return 0;
}