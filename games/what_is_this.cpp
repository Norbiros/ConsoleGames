#include "rapidjson/filereadstream.h"
#include "rapidjson/document.h"
#include <cstdio>
#include <list>
#include <algorithm>
#include <time.h>

using namespace rapidjson;
using namespace std;

  
int whatIsThis() {


  list<int> answeredQuestions = list<int>();

  int number, i;
  int points = 0;
  
  srand(time(0));
  int Seed = rand();
  srand(Seed);
 
  FILE* fp = fopen("games/questions_and_answers.json", "r"); // non-Windows use "r"
 
  char readBuffer[65536];
  FileReadStream is(fp, readBuffer, sizeof(readBuffer));
 
  Document d;
  d.ParseStream(is);
 
  fclose(fp);
  
  if (d.HasParseError()) {
    cout << "Error with rapidjson:" << endl << d.GetParseError() << endl;
    return 1;
  }
  
  const Value& questions = d["questions"];
  
  
  while( i < questions.Size() ) {
    number = rand() % questions.Size();
    bool found = (find(answeredQuestions.begin(), answeredQuestions.end(), number) != answeredQuestions.end());
    if (!found) {
      cout << "Co to jest? " << questions[number]["question"].GetString() << endl;
      answeredQuestions.push_back(number);
      string s;
      getline(cin, s);
      if (s == questions[number]["answer"].GetString()) {
        cout << "\x1B[32mDobra odpowiedź!\033[0m\t\t" << endl;
        points = points  + 1;
      } else {
        cout << "\x1B[31m" << "Zła odpowiedź! Prawidłowa to: " << questions[number]["answer"].GetString() << "\033[0m\t\t" << endl;
      }
      i++;
    }
  }
  cout << "\e[1m\x1B[34mGratulacje! Twój wynik to " << points << "/" << questions.Size() << " punktów!\033[0m\t\t\e[0m" << endl;
  
  return 0;
}
