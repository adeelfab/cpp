#include<iostream>
#include<vector>
using namespace std;
                                    // brute force
           int main(){
            int arr[]={5,1,3,0,4,9,6};   //4+1+ 1+1
            int n= sizeof(arr)/sizeof(arr[0]);
            vector<int> v(arr,arr+n); // copy of arr
            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            
            int count=0;
             for(int i=0; i<n-1; i++){
                for(int j=i+1; j<n; j++ ){
                    if(v[i]>v[j]) count++;
                }
            }
            cout<<count;
           }
           