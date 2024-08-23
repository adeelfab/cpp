#include<iostream>
using namespace std;
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    else return stair(n-1)+ stair (n-1);
   
}
    
int main(){
      
    int n=4;
    int x=stair(n);
    cout<<x;

   
    
}