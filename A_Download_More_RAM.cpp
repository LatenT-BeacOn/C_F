#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b;cin>>a>>b;
        int A[a],B[a];
        vector<pair<int,int>>v;
        for(int i=0;i<a;i++)cin>>A[i];
        for(int i=0;i<a;i++) cin>>B[i];
        for(int i=0;i<a;i++){
            v.push_back({A[i],B[i]});
        }
        sort(v.begin(),v.end());
        int ans=b;
        for(int i=0;i<a;i++){
            if(v[i].first<=b){
                ans+=(v[i].second);
                b=ans;
            }
            
        }
        cout<<ans<<'\n';
    }
}