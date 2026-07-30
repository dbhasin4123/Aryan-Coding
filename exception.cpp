#include <iostream>
using namespace std;

int main() {
   int myNum1;
   int myNum2;
    
   try {
    cout << "Enter the first number : " ;
    cin >> myNum1;
    cout << "Enter the second number : ";
    cin >> myNum2;
    
    if (myNum2==0) {
    throw "Division by 0 is not allowed";
    
    } else {
    cout << myNum1/myNum2;
    }
}
    
    catch (const char* msg){
    cout << "Error : " << msg << endl;
    }
    
    return 0;
    }
    