#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
      int a;cin>>a;string s;cin>>s;
      for(int i=1;i<a;i++){
        if(s[0]==s[i]) {
          cout<<s[i];
          s[0]=s[i+1];
          i=i+1;
        }
      }
      cout<<'\n';
       
        
    }
}