#include<iostream>
using namespace std;
   
   int count_set_bit(int n){
    return __builtin_popcount(n);
   }

   int count_set_bit2(int n){
           int count=0;
           while(n>0){
            count ++;
            n=(n & (n-1));
           }
           return count;
   }
int main(){
    cout<<count_set_bit(6)<<endl;
    cout<<count_set_bit2(6);
      return 0;
}