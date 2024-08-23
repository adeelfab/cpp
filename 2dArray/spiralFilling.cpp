#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the row and cloumn";
    cin>>n;
    int arr[n][n];
    for(int i=0; i<=n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
}