#include <iostream>
#include <chrono>
#include <vector>
#include <cmath>

using namespace std;

int fizzbuzz(double runtime) {
  auto start = chrono::system_clock::now();
  int x1 = 3;
  int x2 = 5;

  for(int i = 1;i<runtime;i++) {
    //cout << i << " ";
    x1--;
    x2--;
    if (x1 == 0) {
      //cout << "fizz";
      x1 = 3;
    }
    if(x2 == 0) {
      //cout << "buzz";
      x2 = 5;
    }
    //cout << endl;
    
  }
  
  auto end = std::chrono::system_clock::now();
  auto elapsed = (end - start);

  return elapsed.count();
}


int main() {
  vector<int> runtime(5,0);

for(int i = 0;i<7;i++) {

  for(int n = 0; n<20;n++) {
    runtime[i] += fizzbuzz(pow(10,i));
  }

  runtime[i] = runtime[i]/5;

  cout << "10^" << i << " " << runtime[i] << endl;

}

  
  
  
  
  
  
  return 0;
}
