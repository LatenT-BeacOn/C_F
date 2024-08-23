#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;while (t--)
    {
        int a,b,c,n;cin>>a>>b>>c>>n;
        int m=max(a,(max(b,c)));
        int d=m-a+m-b+m-c;
        if(d>n) cout<<"NO"<<'\n';
        else{
        int l=(n-d);
        cout<<(l%3==0?"YES":"NO")<<'\n';}
    }
    
    
  
    
}