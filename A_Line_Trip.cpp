#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b;cin>>a>>b;
        int A[a];
        int d=0;
        for(int i=0;i<a;i++)cin>>A[i];
        for (int i = 0; i < a-1 && A[i]<b; i++)
            {
              d=max(d,A[i+1]-A[i]);
    
               
            }
            cout<<max(A[0],max(d,((b-A[a-1])*2)))<<'\n';
         
    }
  
    
}