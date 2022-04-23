#include <iostream>
#include <chrono>
#include <thread>
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include <list>

using namespace std;

int rockPaperScissors() {
  using namespace std::this_thread;
  using namespace std::chrono;

  int n, i, number;
  
  cout << "Gra w papier, kamien, nożyce!" << endl;
  const char *colour[4] = { "Papier", "Kamień", "Nożyce"  };
  list<int> wins = { 3, 1, 2 };
  list<int>::iterator it;
  
  for( i=0; i<3; i++ ) {
    srand (time(NULL));
    number = rand()%3;
        
    cin >> n;
    
    sleep_for(seconds(1));
    cout << "Papier..." << endl;
    sleep_for(seconds(1));
    cout << "...Kamień..." << endl;
    sleep_for(seconds(1));
    cout << "...Nożyce!" << endl;
    
    it = wins.begin();
    advance(it, number);
    cout << "Powinieneś dać: " << colour[*it - 1] << endl;

    cout << "Przeciwnik dał: " << colour[number] << endl;
    if(n - 1 == number) {
       cout << "Remis! ( Przeciwnik: " << colour[number] << " Ty: " << colour[n - 1] << ")" << endl;
    }else if(*it == n) {
      cout << "Gratulacje wygrałeś! ( Przeciwnik: " << colour[number] << " Ty: " << colour[n - 1] << ")" << endl;
    } else {
      cout << "Przegrałeś! ( Przeciwnik: " << colour[number] << " Ty: " << colour[n - 1] << ")" << endl;
    } 
    
    

  }
}