#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string s;
        cin>>s;
        int c=0,c1=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){ c=i;break;}
        }
        for(int i=s.size();i>=c;i--){
            if(s[i]=='1') {c1=i;break;}
        }
        for(int i=c;i<c1;i++){
            if(s[i]=='0') ans++;
        }
        cout<<ans<<'\n';
    }
}