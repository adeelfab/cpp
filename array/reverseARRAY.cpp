// reverse without using extra array
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v1){
    for(int i=0; i<v1.size(); i++)
    cout<<v1[i]<<" ";
}
int main (){
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);
    v.push_back(4);
    v.push_back(3);
    v.push_back(8);
    display(v);
    for(int i=0, j=v.size()-1; i<=j; i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    cout<<endl;
    // reverse(v.begin(),v,end); inbuilt fun to reverse in vector
    display(v);
        
   
  

}