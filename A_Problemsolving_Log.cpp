#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
      int a;cin>>a;string s;cin>>s;
      map<char,int>mp;
      for(int i=0;i<a;i++){
        mp[s[i]]++;

        
      }
      int c=0;
      for(auto it:mp){
        if(it.second>=it.first-'A'+1) c++;
      }
      cout<<c<<'\n';
    }
}