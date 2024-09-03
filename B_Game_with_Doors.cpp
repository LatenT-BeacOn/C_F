#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int l,r,L,R;
        cin>>l>>r>>L>>R;
        int count=0;
        int x=max(l,L),y=min(r,R);
        if(x>y) cout<<1<<'\n';
        else {
            int ans=y-x;
            if(l!=L) ans++;
            if (r!=R)
                ans++;
            cout<<ans<<'\n';
        }
    
    }
    
}