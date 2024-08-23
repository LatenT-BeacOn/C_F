#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d=b*2;
        if(d<=c) cout<<a*b<<'\n';
        else {
            int x=((a/2)*c)+((a%2)*b);
            
            cout<<x<<'\n';

        }
    }
}