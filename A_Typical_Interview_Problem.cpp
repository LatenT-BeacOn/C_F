#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;cin>>a;string s,s1;
        cin>>s;
        s1 = "FBFFBFFBFBFFBFFBFBFFBFFB";
        if (s1.find(s)!=string::npos) cout<<"YES\n";
        else cout<<"NO\n";
    }
}