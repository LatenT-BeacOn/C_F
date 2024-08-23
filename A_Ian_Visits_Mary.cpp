#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
         long long int a,b;
        cin>>a>>b;
        if(abs(a-b)==1)
        cout<<1<<'\n'<<a<<" "<<b<<'\n';
        else
         cout<<2<<'\n'<<a-1ll<<" "<<1<<'\n'<<a<<" "<<b<<'\n';
    }
}