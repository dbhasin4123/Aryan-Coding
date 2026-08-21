#include <iostream>
using namespace std;
int main() {
int arr1[6] ={1,5,6,2,8,0 };
int arr2[9]={1,4,2,7,3,8,6,9,1};
for(int i=0;i<6;i++){
    for(int j=0;j<9;j++){
        if(arr1[i]==arr2[j]){
            cout<< arr1[i]<<endl;
            break;
        }
    }
}
    return 0;
}