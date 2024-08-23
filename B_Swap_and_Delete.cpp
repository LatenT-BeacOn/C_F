#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        int s1=0,s2=0;
        string s;cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') s1++;
            else s2++;

        }
       
       
            //cout<<s1<<" "<<s2<<" "<<s.size()<<'\n';
            //if(s1==s.size() || s2==s.size()) cout<<s.size()<<'\n';
            if(s1>s2)cout<<s.size()-(2*s2)<<'\n';
            else if (s1 == s2) cout<<0<<'\n';
            else cout<<s.size()-(2*s1)<<'\n';
        
    }
    
}