#include <iostream>
#include <climits>
using namespace std;

int main() {
    int myNum[7] = {3, -4, 5 , 4 , -1 , 7 , 8};
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i=0; i < 7; i++) {
        currSum += myNum[i];
        maxSum = max(maxSum , currSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }
    cout << maxSum << endl;
    return 0;
}