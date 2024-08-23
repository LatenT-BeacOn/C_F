#include<bits/stdc++.h>
using namespace std;
#define test_case int t;cin>>t;while(t--)

int main(){
    int a,c=0,ans=INT_MIN;cin>>a;int A[a];
    for(int i=0;i<a;i++){
        cin>>A[i];
    }
    if(a==1) cout<<1<<'\n';
    else{
    for(int i=0;i<a-1;i++){
        if(A[i]<=A[i+1]){
            c++;
        }
        else c=0;
        ans=max(c,ans);
    }

    cout<<ans+1<<'\n';}

    
  
    
}