#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int sum = 0;
    for (int i=1;i<=n; i=i+2 ) {
        sum = sum + i;

    }
    cout << "The sum of odd " << n << " natural numbers is : " << sum << "\n";
    return 0;
}