#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int l,r,L,R;
        cin>>l>>r>>L>>R;
        int count=0;
        int x=l,y=r,n=L,m=R;
       if(l>L) l=L;
       if(r>R) R=r;
       if(count==0)
       cout<<abs(r-L)<<'\n';
       else
       cout<<count+2<<'\n';
    }
    
}