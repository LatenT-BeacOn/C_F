#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)
int main(){
   string s;cin>>s; int c=0;
   for(int i=0;i<s.size()/2;i++){
     if(s[i]!=s[s.size()-i-1]) c++;
   }
   //cout<<c<<'\n';
   if(c==1 || (s.size()%2!=0 && c==0)) cout<<"YES\n";
   else cout<<"NO\n";
  
}