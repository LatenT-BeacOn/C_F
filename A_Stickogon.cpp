#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;
        int A[a];
        map<int,int>s;
        for(int i=0;i<a;i++){
            cin>>A[i];
            s[A[i]]++;

        }
         int ans=0;
        for(auto it:s){
           // cout<<it.first<<" "<<it.second<<'\n';
          ans+=(it.second/3);

        }
        cout<<ans<<'\n';
        
    }
}