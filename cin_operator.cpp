#include <iostream>
using namespace std;

int main() {

    int a, b;
    cout << "Type a number: ";
    cin >> a;
    cout<< "Type a another number: ";
    cin >> b;
    cout << "The sum of the two numbers is: " << a + b << endl;

    // subtracting two numbers using cin operator
    int c, d;
    cout << "type the first subtracting number number: ";
    cin >> c;
    cout << "type the second subtracting number: ";
    cin >> d;
    cout << "the difference of two numbers is: " << c - d << endl;

    //  multiplying two numbers using cin operator
    int e, f;
    cout << "type the first multiplying number: ";
    cin >> e;
    cout << "type the second multiplying number: ";
    cin >> f;
    cout << "The product of two numbers is: " << e * f << endl;

    //  dividing two numbers using cin operator
    int g, h;
    cout << "type the first dividing number: ";
    cin >> g;
    cout << "type the second dividing number: ";
    cin >> h;
    cout << "The division of two numbers is: " << g/h << endl;

    return 0;
}