#include <iostream>
using namespace std;

int main () {
    int num[5] = {2,2,4,4,9};
    for (int j=0; j<5; j++) {
        int times = 0;
        for (int i=0; i<5; i++) {
            if (num[j] == num[i]) {
                times = times + 1;
            }
        }
                
            
            if ( times == 1) {
                cout << "The unique element is: " << num[j] << "\n"; 
            }
        }
     
 return 0;
}