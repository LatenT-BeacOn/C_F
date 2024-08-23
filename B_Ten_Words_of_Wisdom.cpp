#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;while(t--){
    int a,ans,m=0;cin>>a;
    for(int i=1;i<=a;i++){
      int x,y;
      cin>>x>>y;
      if(x<=10){
        if(m<y)
        {
          m=y;
          ans=i;
        }
      }
    }
    cout<<ans<<'\n';
  }
}