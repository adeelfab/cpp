#include<iostream>
using namespace std;
// int mazepath(int sr, int sc,int er, int ec){
//     if(sr>er) return 0;
//     if(sc>ec) return 0;
//     if(sr==er && sc==ec) return 1;
//     int rightways= mazepath(sr, sc+1, er, ec);
//     int downways= mazepath(sr+1, sc, er, ec);
//     return rightways+ downways;
// }
  int maze2(int row ,int col){
      
      if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    
     int rightways= maze2(row, col-1);
    int downways= maze2(row-1,col);
     return rightways+ downways;
  }
// void printpath(int sr, int sc,int er, int ec,string s){
//     if(sr>er) return ;
//     if(sc>ec) return;
//     if(sr==er && sc==ec) {
//         cout<<s<<endl;
//         return;
//     }
//     printpath(sr, sc+1, er, ec,s+'R');
//     printpath(sr+1, sc, er, ec,s+'D');}
    

    
int main(){ 
      
    // int x= mazepath(1,1,2,3,"");
    //  cout<<x;
   
    int y=maze2(3,4);
    cout<<y;

//    printpath(1,1,3,3,"");
   
    
}