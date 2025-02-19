#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    float id;
    student(string n, int r, float i){
         name=n;
         roll=r; 
         id=i;
    }

};
int main(){

  student s("adeel", 76,1234);
 
  cout<<s.roll;
}