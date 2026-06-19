#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Type the value of a: ";
    cin >> a;

    int b;
    cout << "Enter the value of b: ";
    cin>> b;

    string myHub;
    cout << "Enter +,-,*,/,%: ";
    cin >> myHub;

    if (myHub == "+") {
        cout << "The sum of a and b is: " << a + b << "\n";
    }
    else if (myHub == "-") {
        cout << "The difference of a and b is: " << a-b << "\n";

    }
    else if (myHub == "*") {
        cout << "The product of a and b is: " << a*b << "\n";
    }
    else if (myHub == "/") {
        cout << "The division of a nad b is: " << a/b << "\n";
    }
    else if (myHub == "%" ) {
        cout << " the modulus of a and b is: " << a%b << "\n";
    }
    return 0;
}


    
