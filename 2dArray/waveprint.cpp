#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no of rows and coilums ";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<m; i++){
        if(i%2==0){
        for (int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        }
        else{
           for(int j=n-1; j>=0; j--){
            cout<<arr[i][j]<<" ";
           } 
        }

    }

}