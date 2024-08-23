#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int x,m=0;cin>>x;string a,b,c;cin>>a>>b>>c;
        for(int i=0;i<x;i++){
            if(a[i]!=c[i] && b[i]!=c[i]){
                m=1;break;
            }
        }
        cout<<(m==1?"YES\n":"NO\n");
    }
}