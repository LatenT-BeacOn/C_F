#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll a,b;
    cin>>a>>b;
    vector<ll>v;
    for(ll i=1;i*i<=a;i++){
        if(a%i==0) {v.push_back(i);
        if(a/i!=i) v.push_back(a/i);
        }

    }
    sort(v.begin(),v.end());
    if(v.size()>=b)
    cout<<v[b-1]<<'\n';
    else cout<<-1<<'\n';

    
}