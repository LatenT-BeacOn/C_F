#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int t;cin>>t;while(t--){
    int a;cin>>a;
    //vector<int>A(a),vis(a);
    int A[a],vis[a];
    for(int i=0;i<a;i++){
      cin>>A[i];
      vis[i]=0;

    }
    string s;cin>>s;
    int v[a];
    for(int i=0;i<a;i++){
      int x=A[i],count=0;
      vector<int>connected;
      while (vis[x]!=1)
      {
        vis[x]=1;
        if(s[x]=='0')
        count++;
        connected.push_back(x);
        x=A[x];

      }
      for(auto it:connected)
      v[it]=count;
    }

    for(int i=0;i<a;i++){
      cout<<v[A[i]]<<" ";
    }
    cout<<'\n';
  }
    
}