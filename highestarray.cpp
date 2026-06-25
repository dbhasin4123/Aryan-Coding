#include <iostream>
using namespace std;

int main() {

    int myNum[10]={22,12,16,38,16,80,100,30,45,78};
    int highest=myNum[9];
    
    for (int i=0; i<sizeof(myNum)/sizeof(myNum[0]); i++)
    {
        if (highest<myNum[i]){
            highest = myNum[i];
        }
    }

    cout << "The highest numbers is: "<< highest;
    return 0;
}