
#include <iostream>
using namespace std ;
int main() {
   int num[5]= {1,2,2,2,3};
   int count =0;
   int maxCount =0;
   int majorityElement = num[0];
   for (int i=0; i<5;i++){
       for(int j=i+1;j<5;j++){
           if(num[i]==num[j]){
               count += 1;
           }
       }
       if(count> maxCount){
           maxCount = count;
           majorityElement = num[i];
       }
      
   }
    cout << "Majority element : " << majorityElement << endl;

    return 0;
}