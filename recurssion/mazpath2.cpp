#include<iostream>
using namespace std;

void printpath (int row,int col,string s){
    if(row<1) return ;
    if(col<1) return;
    if(row==1 && col==1) {
        cout<<s<<endl;
        return;
    }
    printpath(row,col-1,s+'R');
    printpath(row-1,col,s+'D');
    }

    int main(){
        printpath(3,3,"");
    }