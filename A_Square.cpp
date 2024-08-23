#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        /* code */
        int a,b,c,d,e,f,g,h;cin>>a>>b>>c>>d>>e>>f>>g>>h;
        if(a!=c) cout<<abs(a-c)*abs(a-c)<<'\n';
        else cout<<abs(b-d)*abs(b-d)<<'\n';
    }
    
}