#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;cin>>t;while(t--){
    int a;cin>>a;
    string s;
    cin>>s;
    int u=0;
    for(int i=0;i<a;i++){
        if(s[i]=='U') u++;
    }
   
   if(u%2==0) cout<<"NO\n";
   else cout<<"YES\n";
   }
}