//given a matrix a of n*m andd coordinate(L1, R1) AND (L2,R2). RETURN THR sum of thr rectnangle formed by corrdinates
 #include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<" enter thr roe and coloum";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
        cin>>arr[i][j];
    }
    int l1, l2, r1, r2;
    cin>>l1>>l2>>r1>>r2;
    int sum=0;

    for(int i=min(l1,l2); i<=max(l1,l2); i++){
        for(int j=min(r1,r2); j<=max(r1,r2); j++){
            sum += arr[i][j];
        }
    }
    cout<<endl;
    cout<<sum;

}