#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    
    cout<<"enter row and coloum";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int max= INT_MIN;
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            if(max<arr[i][j])  max=arr[i][j];
        }
        
    }
    cout<<max;
}