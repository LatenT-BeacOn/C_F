#include<bits/stdc++.h>
using namespace std;
int main(){
  int a;cin>>a;
  string s[a];
  for(int i=0;i<a;i++){
    cin>>s[i];
  }
  sort(s,s+a);
  int c=0;
  for(int i=0;i<a-1;i++){
    if(s[i]==s[i+1]) c++;
    else break;
  }
  cout<<(c+2>a-c?s[0]:s[a-1])<<'\n';
}