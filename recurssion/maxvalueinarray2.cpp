#include<iostream>
#include<climits>

using namespace std;

int maxs(int arr[], int n, int idx){
    
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxs( arr,n,idx+1));
}
int main (){
  int arr[]={1,2,3,44,6,7,8};
  int n=sizeof(arr)/sizeof(arr[0]);
 int x= maxs(arr,n,0);
 cout<<x;

}