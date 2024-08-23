#include<iostream>
using namespace std;
bool ispow(int n){
   if(n==1) return true;
   if(n%2!=0 )return false;
   return ispow(n/2);
}
    
int main(){

    int n;
    cout<<"enter no";
    cin>>n;
    int  x=ispow(n);
    if(x==true) cout<<"yes";
    else cout<<"no";

}