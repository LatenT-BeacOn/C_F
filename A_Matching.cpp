#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string s;cin>>s;
        int ans=1;
        if(s[0]=='?') ans=9;
        else if(s[0]=='0') ans=0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='?') ans*=10;
        } 
        cout<<ans<<'\n';
    }
}