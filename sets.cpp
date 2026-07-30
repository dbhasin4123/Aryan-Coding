#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> numbers = {25,10,30,10,15,25,5};
  for (int num : numbers) {
    cout << num << "\n";
  }
  
  numbers.erase(10);
  for (int num : numbers) {
  cout << " New set : " << num << endl;
  }
  
  cout << "Size of set is : " << numbers.size();
  return 0;
}
