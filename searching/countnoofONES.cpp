#include<iostream>
using namespace std;
 int main (){
       int arr[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
       int n=15;
       int x=1;
       
       int lo=0; int hi=n-1;
       
        while(lo<=hi){
            int mid= lo+ (hi-lo)/2;

            if(arr[mid]==x){
                if(arr[mid-1]!=x){
                    int count=n-mid;
                    cout<<count;
                    break;
                }
                else hi=mid-1;
            }
            else if (arr[mid]<x) lo=mid+1;

            else if(arr[mid-1]=x) hi=mid -1;

            
        }
        
       
 }