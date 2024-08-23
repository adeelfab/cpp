// efficient way with s.c o(1)
#include<iostream>
#include<vector>
using namespace std;
int main (){
  int arr[]={4,2,7,9,8};
  int n=5;
  for(int i=0; i<n ; i++){
    if(arr[i]> arr[i+1]){
      swap(arr[i],arr[i+1]);
      i++;
    }
  }// 2 4 7 9 8
  bool flag=true;
  for(int i=0;i<n-1; i++){
    if(arr[i]>arr[i+1]){
      flag=false;
      break;
    }
  }
  if(flag==true) cout<<" almost sorted";
  else cout<<"not almost sorted ";
} 