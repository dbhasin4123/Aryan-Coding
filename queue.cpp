#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int>myNum;
  
  myNum.push(10);
  myNum.push(20);
  myNum.push(30);
  myNum.push(40);
  myNum.push(50);
  
  cout << myNum.front() << endl;
  
  myNum.pop();
  myNum.pop();
  
  cout << myNum.front() << "\n";
  cout << "Size:" << myNum.size() << endl;
  cout << myNum.empty();
  
  return 0;
  }
  
  

  