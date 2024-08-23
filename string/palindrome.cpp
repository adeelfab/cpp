#include<iostream>
#include<string>
using namespace std;
bool palindrome( string k){
    int n=k.size();
    for(int i=0; i<n/2; i++){
        if(k[i]!=k[n-i-1])
        return false;
    }
    return true;
}
int main(){
    string k;
    cout<<"enter string";
    cin>>k;
    palindrome(k) ? cout<<"palindrome" : cout<<"not palindrome";
}