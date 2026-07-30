#include <iostream> 
using namespace std;

int main () {
    int ages[8] = {12 ,15 , 14 , 16 ,18 , 20 ,22 , 24};
    int sum = 0;
    double avg;
    int length = sizeof(ages)/sizeof(ages[0]);
    for ( int age : ages) {
        sum = sum + age;
    }
    avg = sum / length;
    cout << "The average of ages is : " << avg << endl;
}