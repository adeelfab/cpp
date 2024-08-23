#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    string k;
    cout<<"enter the string";
    getline(cin,k);
    int cons=0;
    for(int i=0; i<n;i++){
      if( k[i]!= 'a' || k[i]!='i' || k[i]!='0' || k[i]!='u' || k[i]!='e')
        cons++;
      
    }
    cout<<cons;

}