#include<iostream>
using namespace std;

int maxpowerof2(int n){
     n= n| (n>> 1);
     n= n| (n>> 2);
     n= n| (n>> 4);
     n= n| (n>> 8);
     n= n| (n>> 16);

     return (n+1)/2;
}
 int main(){
    int x=24;
    int tep;
    while(x!=0){
        tep=x;
        x= x& (x-1);
    }
    cout<<tep<<endl;
    cout<<maxpowerof2(24);
    return 0;
 }