#include<iostream>
using namespace std;
int main(){
    int arr[9]={6,8,20,28,33,1,3,4,5};
    int x=2;
    int n=9;
    int lo=0;
    int hi=n-1;
    int pivot=-1;
    if(n==2){
        if(x=arr[0] ) cout<<0;
        else if(x==arr[1]) cout<<1;
        else cout<<-1;
    }
    while(lo<=hi){
        int mid= lo+ (hi-lo)/2;
        if(mid==0) lo=mid+1;
        else if(mid==n-1) hi=mid-1;

        else if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
            pivot=mid;
            break;
        } 
        else if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            pivot=mid+1;
            break;
        } 
        else if(arr[mid]>arr[hi]) lo=mid +1;
        else hi=mid-1;  
    }
    if(pivot==-1){
        lo=0;
        hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                 cout<<mid;
                 break;}
            else if(arr[mid]>x) hi=mid-1;
            else lo=mid+1;
        }
    }
    if(x>=arr[0] && x<=arr[pivot-1]){
        lo=0;
        hi=pivot-1;
        while(lo<=hi){
            int mid= lo+ (hi-lo)/2;
            if(arr[mid]==x){
                 cout<<mid;
                 break;}
            else if(arr[mid]>x) hi=mid-1;
            else lo=mid+1;
        }
    }
    else{
        lo=pivot;
        hi=n-1;
        while(lo<=hi){
            int mid= lo+ (hi-lo)/2;
            if(arr[mid]==x) cout<<mid;
            else if(arr[mid]>x) hi=mid-1;
            else lo=mid+1;
    }
   
     
}

}