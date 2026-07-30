#include <iostream>
using namespace std;

int main() {
    int num[4] = {2,7,11,15};
    int target = 9;

    for (int i=0 ; i<sizeof(num)/sizeof(num[0]) ; i++ ) {
        for (int j=i+1 ; j<sizeof(num)/sizeof(num[0]) ; j++) {
            if (num[i] + num[j] == target) {
                cout << "Indices are : " << i << " and "<< j;
                break;

            }
        }
    }
    return 0;
}