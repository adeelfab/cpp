#include<iostream>
using namespace std;
void quicksort(int arr[],int si, int ei){
    int pivotidx=partion(arr, si, ei);
    
}

int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);
}