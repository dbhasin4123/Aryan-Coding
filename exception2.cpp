#include <iostream>
using namespace std;

int main() {
   int age;
   
   
   try {
  cout << "Enter the age : " << endl;
   cin >> age;
   
   if (age>=18) {
   cout << "You are eligible to vote";
   } else {
   throw "You are not eligible to vote";
   }
   }
   
   catch (const char* msg){
   cout << msg;
   }
   
   return 0;
   }
    
