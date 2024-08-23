#include<iostream>
#include<vector>
using namespace std;
vector<int> merg(vector<int>& v1, vector<int>& v2){
     int n=v1.size();
     int m=v2.size();
     vector<int> res(m+n);
     int i=0;  //for v1
     int j=0;   // for v2
     int k=0;    // for res
     while(i<=n-1 && j<m-1){
        if(v1[i]<v2[j]){
            res[k]=v1[i];
            i++;
        }
        else{
            res[k]=v2[j];
            j++;
        }
        k++;

     }
     // for remaining
     if(i==n){    // v1 ke sab elements utha chuke h
        while(j<=m-1){
            res[k]=v2[j];
            k++;
            j++;
        }
     }
     if(j==m){       //v2 ke sab element utha chuke h
        while(i<=n-1){
            res[k]=v1[i];
            k++;
            i++;
        }
     }
     return res;
}
int main(){
   // int arr1[4]={1,4,5,8};
   // int arr2[6]={2,3,6,7,10,12};
    //int arr3[10];
    vector<int>v1;
    
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);

    vector<int>v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    v2.push_back(12);

    vector<int> re= merg(v1,v2);

    for(int i=0; i<re.size(); i++){
        cout<<re[i]<<" ";
    }
    

}