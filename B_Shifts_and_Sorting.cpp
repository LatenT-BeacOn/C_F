#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string s;cin>>s;
       long long int ans=0, count=0; 
        for(int i=0;i<s.size();i++){
           if(s[i]=='1') count++;
           else if(s[i]=='0' && count>0)
           ans+=(count+1);
        }
        cout<<ans<<'\n';
    }
}