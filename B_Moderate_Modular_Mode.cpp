#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        long long int a,b;cin>>a>>b;
        if(a==b)cout<<a<<'\n';
        else if(a>b)cout<<(a*b)+a<<'\n';
        else cout<<((b/a)*a+b)/2<<'\n';
    }
   
}