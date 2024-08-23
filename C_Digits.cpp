#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int pro=1,a;
        while(cin>>a){
            pro*=a;
        }
        cout<<pro<<'\n';
    }
}