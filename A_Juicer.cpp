#include<bits/stdc++.h>
using namespace std;
int main(){
    
  int a,b,c,l=0,sum=0;cin>>a>>b>>c;
//   int A[a];
//   for(int i=0;i<a;i++)cin>>A[i];
  for(int i=0;i<a;i++){
    // if(A[i]<=b)
    int m;cin>>m;if(m<=b)
    sum+=m;
    if(sum>c){
        l++;sum=0;
    }
  }
  cout<<l<<'\n';
    
}