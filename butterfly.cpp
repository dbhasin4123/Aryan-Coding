#include <iostream>
using namespace std;

int main() {
    //top
    int n=4;
    for(int i=0; i<4;i++){
        for(int j=0;j<i+1;j++){
            cout<< "*";
        }  
        
    
        for(int j=0;j<2*(n-i)-2;j++){
            cout << " ";
        }
    
        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << endl;
    
    }
    // Bottom
    for(int i=0;i<4;i++){
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        for(int j=0;j<2*i;j++){
            cout << " ";
        }
         for(int j=0;j<n-i;j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}