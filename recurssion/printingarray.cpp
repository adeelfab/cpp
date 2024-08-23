#include<iostream>
#include<vector>

using namespace std;
void ad(int arr[],int n,int idx){
      
     if(idx==n) return;
      cout<<arr[idx]<<" ";
      ad(arr,n,idx+1);
      
}
void ad2(vector<int>& v,int idx){
      
     if(idx==v.size()) return;
      cout<<v[idx]<<" ";
      ad2(v,idx+1);
      
}

int main (){
    int arr[6]={1,2,3,4,5,6};
    int n=6;
   // ad(arr,n,0);
    vector<int> v(n);
    for(int i=0; i<n; i++){
        v[i]= arr[i];
    }
    ad2(v,0);
}