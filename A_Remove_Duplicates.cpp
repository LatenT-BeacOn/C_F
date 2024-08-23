#include<bits/stdc++.h>
using namespace std;
int main(){
  int a;cin>>a;int A[a];for(int i=0;i<a;i++){
    cin>>A[i];
  }
 set<int>s;
 vector<int>v;
  for(int i=a-1;i>=0;i--)
  {
    if(s.find(A[i])==s.end()){
     s.insert(A[i]);
     v.push_back(A[i]);}
  }
  cout<<s.size()<<'\n';
  for(int i=v.size()-1;i>=0;i--){
    cout<<v[i]<<" ";
  }
    
  
    
}