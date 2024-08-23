#include<iostream>
#include<vector>
using namespace std;
 void sort01(vector<int>& v){
      int n=v.size();
      int nozero=0;
      int noone=0;
      int notwo=0;
      for(int i=0;i<n; i++){
        if(v[i]==0) nozero++;
        else if (v[i]==1) noone++;
        else notwo++;  
      }
      // filling element
      for(int i=0; i<n; i++){
         if(i<nozero) v[i]=0;
         else if (i<(noone+ nozero)) v[i]=1;
         else  v[i]=2;
      }
      

 }
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2 );
    v.push_back(1);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" "; 
    }
     
}