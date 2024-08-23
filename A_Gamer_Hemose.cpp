#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,h;cin>>a>>h;
        int A[a];
        for(int i=0;i<a;i++) cin>>A[i];
        sort(A,A+a);
        int x=0;
        int d=A[a-1];
        for(int i=a-2;i>=0;i--)
        {
            if(A[i]!=A[a-1]){
                x=A[i];
                break;
            }
        }
      if(h%(A[a-1]+x)==0)  cout<<2*(h/(A[a-1]+x))<<'\n';
      else if(h%(A[a-1]+x)<=A[a-1])
      cout<<(2*(h/(A[a-1]+x)))+1<<'\n';
      else
      cout <<( 2 * (h / (A[a - 1] + x)))+ 2 << '\n';
    
     }
}