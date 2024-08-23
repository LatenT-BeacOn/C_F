#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,c=0;cin>>a;
        string s;cin>>s;
        for(int i=0;i<a-1;i++){
            if(s[i]>s[i+1] || (s[i]>='a' && (s[i+1]<='0'&& s[i+1]<='9')))
            {
                c=1;
                break;
            }
        }
        if(c==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}