#include <iostream>
using namespace std;

int main() {

    int myNum[10];
    
    int n;
    cout << "Enter the value of n:";
    cin>>n;

    for (int i = 0; i<10; i++)
    {
        myNum[i]= n * (i+1);

        cout << n << "*" << i+1 << "="<< myNum[i]<<endl;
    }

    return 0;
}