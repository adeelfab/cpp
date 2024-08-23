#include<iostream>
using namespace std;
int sumdigit(int n){
    if(n>=0 && n<=9) return n;
    int digit=n%10;
    return digit+sumdigit(n/10);
}
int main(){
    int n=4321;
    int x=sumdigit(n);
    cout<<x;
}