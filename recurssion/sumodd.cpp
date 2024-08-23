#include<iostream>
using namespace std;
void sumo(int a, int b,int &sum){
    
      if(a>b) return;
    //   if(a==b){
    //     if(a%2 !=0) sum += a;
    //     return;}

        if(a%2!=0){
            sum+=a;
            
            sumo(a+2,b,sum);
        }
        else{
            sumo(a+1,b,sum);
        }
      
}
int main(){

    int a=1;
    int b=10;
    if(a>b) swap(a,b);
    int sum=0;
    sumo(a,b,sum);
    cout<<sum<<endl;
    return 0;

}