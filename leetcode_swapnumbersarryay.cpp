#include <iostream>
using namespace std;

int main() {
  int num[5] = {1,2,3,4,5};
  int car =num[1];
  num[1]=num[4];
  num[4] = car;
 
  for (int i; i<sizeof(num)/sizeof(num[0]); i++) {
  cout << num[i] << endl;
  }
  
  return 0;
  }