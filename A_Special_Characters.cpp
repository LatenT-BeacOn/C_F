#include<bits/stdc++.h>
using namespace std;

int main(){
    
  int t;cin>>t;
  while (t--)
  {
    int a;cin>>a;
    if(a%2!=0) cout<<"NO\n";
    else 
    {
        cout<<"YES\n";
        for(int i=0;i<a/2;i++){
            if(i%2) cout<<"AA";
            else cout<<"BB";
        }
        cout<<'\n';
    }
  }
  
    
}