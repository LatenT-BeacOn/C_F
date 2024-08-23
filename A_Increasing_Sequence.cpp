#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;cin>>t;while(t--){
    int a,c=0;cin>>a;int A[a];
    for(int i=0;i<a;i++)cin>>A[i];

    for(int i=0;i<a;i++){
        c++;
        if(A[i]==c)c++;
    }
    cout<<c<<'\n';

   }
    
    
  
    
}