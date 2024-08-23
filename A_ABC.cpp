#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a; string s;cin>>s;
        if(a==1 || (a==2 &&((s[0]=='0' && s[1]=='1') || (s[0]=='1' && s[1]=='0')))) cout<<"YES\n";
        else cout<<"NO\n";
    }
}