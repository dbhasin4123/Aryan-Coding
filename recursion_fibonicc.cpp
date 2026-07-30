#include <iostream>
using namespace std;

int fib(int n){
 if (n>1) {
  return fib(n-1) + fib(n-2);
  }
  if (n==1) {
  return 1;
  } 
  else {
  return 0;
     }
  }
  
  int main() {
  cout << fib(9);
  
  return 0;
}
