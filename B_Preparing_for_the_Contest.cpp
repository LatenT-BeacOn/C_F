#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b;cin>>a>>b;
        for(int i=a;i>b+1;i--){
            cout<<i<<" ";
        }
        for(int i=1;i<=b+1;i++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}