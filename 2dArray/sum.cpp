#include<iostream>
using namespace std;
int main(){
    int m,n;
    int sum=0;
    cout<<"enter row and coloum";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
           sum=sum+arr[i][j];
        }
        
    }
     cout<<sum;
    
}