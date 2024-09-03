#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;
        int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        sort(A,A+a);
        if(a%2==0) cout<<max(A[a/2],A[(a+1)/2])<<'\n';
        else cout<<A[a/2]<<'\n';
    }
  
    
}