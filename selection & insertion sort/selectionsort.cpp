#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main (){
    int arr[]={5,30,1,4,2};
    int n=5;
    for(int ele: arr){  // for switch 
        cout<<ele<<" ";

    }
    cout<<endl;
    for(int i=0; i<n-1; i++){
        int min=INT_MAX;
        int mindex=-1;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                mindex=j;
            }
        }
        swap(arr[i],arr[mindex]);

    }
    for(int ele: arr){
        cout<<ele<<" ";
    }
    
}




