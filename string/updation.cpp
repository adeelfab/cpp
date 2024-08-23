// put # at even places
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<" enter size";
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++){
        if(i%2==0){
            s[i]= '#';
        }
    }
    cout<<"new string is "<<s;

}