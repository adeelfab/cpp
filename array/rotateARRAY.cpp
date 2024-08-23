#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";}
    cout<<endl;

}
void reverse_part(int i, int j ,vector<int>&v){
     while(i<=j){
        int temp= v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
     }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    display(v);
    int k=2;
    // rotate
    int n=v.size();
    reverse_part(0,n-k-1,v);
    reverse_part(n-k, n-1,v);
    reverse_part(0,n-1,v);  // reverse whole  new array
    display(v);


}