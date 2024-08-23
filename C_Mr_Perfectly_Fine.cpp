#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)

int main(){
    test_case{
        int a,c=1e9,d=1e9,e=1e9,ans=0,sum=0;cin>>a;
        for(int i=0;i<a;i++){
            int b;cin>>b;string s;cin>>s;
            if(s=="11") c=min(c,b); 
            else if(s=="01") d=min(d,b);
            else if(s=="10") e=min(e,b); 
            
        }
        ans = min(c, d + e);
        cout<<(ans>=1e9?-1:ans)<<'\n';
    }
    
  
    
}