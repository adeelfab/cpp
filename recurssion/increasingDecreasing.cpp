#include<iostream>
using namespace std;
void sequence(int n, int i){
    if(i>n) return ;
        cout<<i<<endl;
        
      sequence(n,i+1);
      cout<<i<<endl; 

}
int main(){
    int i=1;
    int n=4;
    sequence(n,i);

}