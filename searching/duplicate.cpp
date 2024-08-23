#include<iostream>
using namespace std;
 int main (){
       int arr[11]={1,2,3,4,5,5,6,7};
       int n=8;
       int x=3;
       int lo=0; int hi=n-1;
        bool flag=false;
        while(lo<=hi){
            int mid= lo+ (hi-lo)/2;

            if(arr[mid]==mid +1) lo=mid+1;

            else if (arr[mid]==mid){
                if(arr[mid-1]==arr[mid]){ cout<<mid; break;}

                else hi=mid-1;
            }

 }
 }