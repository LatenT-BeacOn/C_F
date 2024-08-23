#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<a;i++){
            cout<<char(97+(i%c));
        } cout<<'\n';
    }
  
    
}