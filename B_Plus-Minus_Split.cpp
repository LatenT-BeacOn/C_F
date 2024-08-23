#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,s1=0,s2=0;cin>>a;
        string s;cin>>s;
        for(int i=0;i<a;i++){
            if(s[i]=='+') s1++;
            else if(s[i]=='-') s2++;
        }
        cout<<abs(s1-s2)<<'\n';
    }
}