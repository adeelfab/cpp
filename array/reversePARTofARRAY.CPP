// REVERSE some part of array
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v1){
    for(int i=0; i<v1.size(); i++){
    cout<<v1[i]<<" ";}
    cout <<endl;
}
void reverse_part(int i, int j, vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
void reverse(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
} 
int main (){
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);
    v.push_back(4);
    v.push_back(3);
    v.push_back(8);
    reverse(v);
    display(v);
    }