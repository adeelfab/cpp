#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
    string s=" iambatman";
    string k=" mbatmania";
    sort(s.begin(), s.end());
    sort(k.begin(),k.end());
    if(s==k) cout<<true;
    else cout<<false;
}