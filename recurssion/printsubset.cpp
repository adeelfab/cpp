#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(string ans, string original, vector<string>& v){
    if(original==""){
        //cout<<ans<<endl; // for printing
        v.push_back(ans);
        return;
    }
   char ch=original[0];
   subset(ans+ch,original.substr(1),v);
   subset(ans, original.substr(1),v);
}
int main(){
    string str="abc";
    vector<string> v; // for storing
   subset("",str,v);
   for(string ele: v){
        cout<<ele<<endl;
   }
}