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
        }
    }
    cout<<str;
    for(int i=0; i<n-1; i++){
      bool flag=true;
      for(int j=0; j<n-1; j++){
        if(str[j]>str[j+1]){
          swap(str[j],str[j+1]);
          flag=false;
        }
      }
      if(flag==true) break;
    }
    
   cout<<endl;
  for(int i=0; i<n; i++){
        cout<<str[i]<<" "; 
    }
}