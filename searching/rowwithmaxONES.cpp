#include<iostream>
using namespace std;
 int main (){
       int arr[3][5]={{0,0,0,0,1},{0,0,0,1,1},{0,1,1,1,1}};
       int m=3;
       int n=5;
       int row=0;
       int x=1;
     int maxone=0;
       for(int i=0; i<m; i++){
          int lo=0; int hi=n-1;
          int firstidx=-1;
          int count =0;
           int maxone=0;
        while(lo<=hi){
             
            int mid= lo+ (hi-lo)/2;

            if(arr[i][mid]==x){
                if(mid==0){
                    firstidx=mid;
                    
                    break;
                    }
                    else if( arr[i][mid-1]!=x){
                        firstidx=mid;
                        break;
                    }
                
                else hi=mid-1;
            }
            else if (arr[i][mid]<x) lo=mid+1;

            else hi=mid -1;

        }
       
        if(firstidx!=-1) count= n-firstidx;
        cout<<count<<endl;
        if(maxone<count){
            maxone= count;
            row=i;
        }
       
       
       }
       cout<<row<<" "<<maxone;
       
 }      
       
 