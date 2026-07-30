#include <iostream>
using namespace std;

int main() {
  int num[4] = {1,5,6,9};
  int target = 5;
  
  for (int i=0 ;i<sizeof(num)/sizeof(num[0]) ; i++) {
    if(num[i] == target) {
    cout << "Index of Target in num is : " << i;
    }
  }
  
  return 0;
}
  
  