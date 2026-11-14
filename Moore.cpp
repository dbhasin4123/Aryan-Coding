#include <iostream>
using namespace std;

int main() {
    int myNum[10] = {1,2,2,3,4,3,3,4,2,3};
    int freq = 0;
    int ans = 0;
    for(int i = 0; i<10; i++){
        if(freq == 0){
            ans = myNum[i];
        }
        if(ans==myNum[i]){
            freq++;
        }else{
            freq--;
        }
    }
    cout << "The majority element is: " << ans << endl;
    return 0;
}