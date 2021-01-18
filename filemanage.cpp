#include <iostream>
#include <fstream>


using namespace std;

int main(int argc,char *argv[]) {
  ifstream input;
  
  input.open(argv[1],ifstream::in);
  
  //c++.com wildin
  filebuf* buffer = input.rdbuf();
  size_t size = buffer->pubseekoff (0,input.end,input.in);
  buffer->pubseekpos (0,input.in);

  char source[size];
  input.read(source,25);

  for(int i = 0;i<input.gcount();i++) {
    
    switch(source[i]) {
      case '\n':
        cout << '\n';
        break;
      
      default:
        cout << source[i];
        break;

    }
  }

}
