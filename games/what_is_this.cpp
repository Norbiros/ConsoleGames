#include "../include/rapidjson/filereadstream.h"
#include "../include/rapidjson/document.h"
#include <cstdio>

using namespace rapidjson;
using namespace std;

  
int whatIsThis() {
 
  //FileReadStream(FILE *fp, char *buffer, std::size_t bufferSize)
  FILE* fp = fopen("games/a.json", "r"); // non-Windows use "r"
 
  char readBuffer[65536];
  FileReadStream is(fp, readBuffer, sizeof(readBuffer));
 
  Document d;
  d.ParseStream(is);
 
  fclose(fp);

  cout << d["hello"].GetString() << endl;
  
  return 0;
}
