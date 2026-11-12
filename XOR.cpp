#include <iostream>
#include <vector>
using namespace std;

int myFunc(vector<int>vec){
    int ans =0;
    for(int val:vec){
        ans = ans^val;
    }
    return  ans;
}

int main() {
    vector<int>vec={1,2,1,2,4};
    cout << myFunc(vec) << endl;
    

    return 0;
}