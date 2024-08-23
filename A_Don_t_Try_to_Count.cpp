#include<bits/stdc++.h>
using namespace std;
int main(){int t;cin>>t;while(t--){
    int a,b;cin>>a>>b;
    string s,s1;cin>>s>>s1;
    int c=0,ans=-1;
    for(int i=0;i<11;i++){
        if(s.find(s1)!=string::npos){
            ans=c;break;
        }
        s+=s;
        c++;
    }
    cout<<ans<<'\n';}
}