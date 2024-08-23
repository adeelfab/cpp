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
    cout<<"\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //printing transpose
    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

 }