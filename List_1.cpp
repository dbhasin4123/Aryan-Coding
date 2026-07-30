#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int>marks= {45,67,89,56,78};
  for(int mark :marks) {
  cout << "Orginal list : " << mark << endl;
  }
  marks.pop_front();
  marks.push_front(95);
  marks.pop_back();
  for (int mark:marks) {
  cout << "Updated list : " << mark << endl;
  }
  
  return 0;
}
