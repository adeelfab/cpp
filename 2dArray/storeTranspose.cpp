#include<iostream>
 using namespace std;
 int main(){
     int m,n;
     
    cout<<"enter row and coloum";
    cin>>m>>n;
    int arr[m][n];
    int tr[n][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // store transpose
    cout<<"\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           tr[i][j]=arr[j][i];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        cout<<tr[i][j]<<" ";
        }
        cout<<endl;
    }
 }