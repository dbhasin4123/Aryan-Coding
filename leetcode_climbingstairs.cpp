#include <iostream>
using namespace std;
 
int main () {
  int steps;
  cout << "Enter the value of steps : ";
  cin >> steps;
  
  int a = 1;
  int b = 2;
  
  if(steps == 1){
    cout << "Number of ways are : " << a;
  } else if (steps==2) {
     cout << "Number of ways are : " << b;
  }

  