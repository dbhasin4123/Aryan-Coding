#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Type the value of x: ";
    cin >> x;

    int y;
    cout << "Type the value of y: ";
    cin >> y;

    string myOperator;
    cout << "Enter + or -: ";
    cin >> myOperator;

    string my2operator;
    cout << "Enter + or -: ";
    cin >> my2operator;
    

    if (myOperator == "+") 
    {
        cout << "The sum of x and y is: " << x + y << "\n";
    
        if (my2operator == "-") 
        {
            cout << "The difference of x and y is: " << x-y << "\n";
        }
        else 
        {
            cout << "The sum of x and y is: " << x+y << "\n";
        }
    }
    else if (myOperator == "-") 
    {
        cout << "The difference of x and y is: " << x-y << "\n";
        
        if (my2operator == "+")
        {
            cout << "The sum of x and y is: " << x+y << "\n";
        }
        else 
        {
            cout << "The difference of x and y is: " << x-y << "\n";

        }
    }


    
    return 0;
}
    
