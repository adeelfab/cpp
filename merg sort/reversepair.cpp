#include<iostream>
#include<vector>
using namespace std;
int count=0;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
        int i=0, j=0, k=0;
        while(i<a.size() && j<b.size()){
            if(a[i]<b[j]){
                res[k]=a[i];
                k++;
                i++;
            }
            else{
                res[k]=b[j];
                k++;
                j++;
            }
            if(i==a.size()){
                while(j<b.size()){
                    res[k]=b[j];
                    j++;
                    k++;

                }
            }
            if(j==b.size()){
                while(i<a.size()){
                    res[k]=a[i];
                    k++;
                    i++;

                }
            }
        }
}
            int countpairs(vector<int>& v ){
                int n=v.size();
                int i=0;
                int j=n-n/2;
                int k=n-1;
                int mid=j+1;
                for(i=0; i<=j;i++){
                    while(mid<=k && v[i]> 2*v[mid]){
                        mid++;
                        count+=(mid-(j+1));

                    }
                }
                return count;
            }
           int mergesort(vector<int>&v){
               int n=v.size();
               if(n==1) return count;

               int n1=n/2, n2=n-n/2;;
               vector<int> a(n1);
               vector<int> b(n2);
               for(int i=0; i<n1; i++){ // copy pasting
                a[i]=v[i];
               }
               for(int i=0; i<n2; i++){
                b[i]=v[i+n1];
               }
               count+=mergesort(a);
              count+= mergesort(b);
                count+=countpairs(v);
               merge(a,b,v);
               return count;
               a.clear();
               b.clear();

           }
           int main(){
            int arr[]={5,1,3,0,4,9,6};
            int n= sizeof(arr)/sizeof(arr[0]);
            vector<int> v(arr,arr+n); // copy of arr
            for(int i=0; i<v.size(); i++){
               // cout<<v[i]<<" ";
            }
            cout<<endl;
            mergesort(v);
             for(int i=0; i<v.size(); i++){
                //cout<<v[i]<<" ";
            }
            cout<<endl;
            cout<<mergesort(v);
           }
           