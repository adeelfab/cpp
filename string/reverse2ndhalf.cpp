#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void reverse(string &k, int begin ,int end){
    for(int i=begin; i<=(end+begin)/2; i++){
        swap(k[i], k[begin+end-i]);
    }
}
int main(){
   string k;
   cout<<"enter string";
   cin>>k;
   int n =k.size();
   //reverse(k.begin() + n/2, k.end());
   reverse(k,n/2,n-1);
   cout<<k<<endl; 
}