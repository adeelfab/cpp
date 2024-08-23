#include<iostream>
using namespace std;
void sumn(int sum, int n){
    if(n==0) {
        cout<<sum<<endl;
        return;}
      sumn(sum+n,n-1);


}
int main(){
    int i=1;
    int n=4;
    sumn(0,n);

}