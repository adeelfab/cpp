//rotate 90 deg
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

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            int temp= arr[i][j];
            arr[i][j]= arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int k=0; k<n; k++){
        int j=0;
        int i=n-1;
        while(j<=i){
            int temp= arr[k][i];
            arr[k][i]= arr[k][j];
            arr[k][j]=temp;
            j++;
            i--;
        }
    }
    cout<<" teh rotated matrix is";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}