#include<iostream>
#include<string>
using namespace std;
int main (){
   string arr[7]={"adeel","aabish","farhan","adnan","azfar","aban","aariz"};
   int n=7;
        for(int i=0; i<n; i++){
    cout<<arr[i]<<endl;
   }
   cout<<endl;
   //bubble sort
   for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
   }
   for(int i=0; i<n; i++){
    cout<<arr[i]<<endl;
   }
}