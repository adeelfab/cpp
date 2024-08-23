#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,1,5,5,2,3};
    int n=6;

    for(int i=1; i<n; i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else
                swap(arr[j],arr[j-1]);
                j--;
            
        }
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //storing the sorted into integer
    int x=0;   // 1 2 3 5 5 5
    for(int i=0; i<n; i++){
        x*=10;
        x+=arr[i];
    }
    cout<<x<<endl;
    // for 2nd minimum, we need to change the sorted array
     for(int i=n-1; i>=1; i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
     }
     // for making number 
     int y=0;
     for(int i=0; i<n; i++){
        y*=10;
        y+=arr[i];
     }
     cout<<y<<endl;
     
     cout<<"minimum sum is "<<x+y;
}