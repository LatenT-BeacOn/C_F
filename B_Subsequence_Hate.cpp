#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string s;
        cin>>s;
        int s0=0,s1=0;
        for(int i=0;i<s.size();i++){
                if(s[i]=='0') s0++;
                else s1++;
        }
        
        int p1=0,p0=0,ans=min(s1,s0);
        for(auto &it:s){
            if(it=='1'){
                p1++;s1--;

            }
            else {
                p0++;s0--;
            }
            ans = min(ans, p1 + s0);
            ans=min(ans,p0+s1);
           
     
     }
     cout<<ans<<'\n';
    }
}