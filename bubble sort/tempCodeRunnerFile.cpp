#include<iostream>
#include<string>
using namespace std;
int main (){
    string s="AZYZXBDXJK";
    int n=s.size();
    string str;
    for(int i=0; i<n; i++){
        if(s[i]>='X'){
          str.push_back(s[i]);  
        }}}