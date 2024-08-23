#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string s;cin>>s; int b=0,B=0;
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='b'){
                b++;

            }
           else if(s[i]=='B'){ B++;}
            else{
                
                if(s[i]>='a' && s[i]<='z' && b>0) b--;
                else if(s[i]>='A' && s[i]<='Z' && B>0) B--;
                else ans+=s[i];
            }
        }
        for(int i=ans.size()-1;i>=0;i--){ cout<<ans[i];}
        cout<<'\n';
    }
    
  
    
}