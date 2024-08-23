#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;string s1,s2;
        cin>>s1>>s2; int c=0,m=0;
        for(int i=0;i<a;i++){
            if(s1[i]=='0' && s2[i]=='1') c++;
            else if(s1[i]=='1' && s2[i]=='0') m++;

        }
        cout<<max(c,m)<<'\n';
    }
}