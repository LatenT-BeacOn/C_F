#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;
        cin>>a;
        int d=a%4;
        if(d==2 ) cout<<(a/4)+1<<'\n';
        else cout<<a/4<<'\n';
    }
}