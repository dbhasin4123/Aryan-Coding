#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int>num = {12,25,8,40,19};
  
  vector<int> ::iterator it;
  
  for (it = num.begin() ; it !=num.end() ; it++) {
  cout << "Original List : ";
  cout << *it << "\n";
  }
  
  it = num.begin();
  *it = 100;
  
   for ( auto it = num.begin() ; it !=num.end() ; it++) {
   cout << "Updated List : " ;
  cout << *it << "\n";
  }
 
  it = num.end() -1 ;
  
  cout << "Last element : " << *it;
  
  return 0;
  }
  

  