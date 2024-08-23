#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c=0;
        for(int i=b;i!=1;){
            i/=2;
            c++;
        }
        cout<<c<<'\n';
    }
}