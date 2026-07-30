#include <iostream>
using namespace std;

int main() {
  string letter = "My World";
  string lastword;
  for(int i=8; i>3; i--) {
     lastword += letter[i];
   
  }
   cout << "The length of last word is: " << lastword.length() << endl;
  
  return 0;
  }