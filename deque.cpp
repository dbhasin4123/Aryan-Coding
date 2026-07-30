#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<int>myNum = {15,25,35};
  
  myNum.push_front(5);
  myNum.push_back(45);
  
  myNum.pop_front();
  myNum.pop_back();
  
  for ( int i=0 ; i <myNum.size() ; i++) {
  cout << myNum[i] << endl;
  }
  
  cout << "1st number : " << myNum.front() << endl;
  cout << "Last number : " << myNum.back() << endl;
  cout << "Size: " << myNum.size() << endl;
  cout << "Empty: " << myNum.empty();
  
  return 0;
  }
  
  
  