#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,3,4,5,6,7,8};
    int n=7;
    int id=-1;
    int lo=1;
    int hi=n-2;
    bool flag =true;
    while(lo<=hi){
        int mid= lo+ (hi-lo)/2;
          if(arr[mid]>arr[mid+1] && arr[mid]> arr[mid-1]){
            cout<<mid;
            flag= false;
            break;
          }
        else if(arr[mid]<arr[mid-1]) hi=mid-1;
         else lo=mid+1;
          
    }
    if(flag== true) cout<<-1;
    
}