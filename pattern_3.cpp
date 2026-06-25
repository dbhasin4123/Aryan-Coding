#include <iostream>
using namespace std;

int main () {
  for (int i = 0 ; i<5; i++)
  {
    for (int j =4; j>i; j--)
    {
        cout<<" ";
    }
    for (int z =0; z<2*i+1; z++)
    {
        cout<<"*";
    }
    
    cout<<endl;
  }
  
  return 0;
}