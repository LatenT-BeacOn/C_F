#include<bits/stdc++.h>
using namespace std;
void doll(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
   if(a%b!=0)ans=a-((a/b)+1);
   else  ans=a-(a/b);
   if(ans>c) cout<<"YES\n";
   else cout<<"NO\n";
}
int main(){
   int t;
   cin>>t;
   while(t--){
    doll();
   }
}