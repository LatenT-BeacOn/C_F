#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;int A[a],B[a];
        int c=0,d=0;
        vector<pair<int ,int>>v;
        for(int i=0;i<a;i++){cin>>A[i];}
        for(int i=0;i<a;i++)cin>>B[i];
        for(int i=0;i<a;i++){
            v.push_back({A[i],B[i]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<a;i++){
           cout<<v[i].first<<" ";
        }
        cout<<'\n';
        for(int i=0;i<a;i++){
            cout<<v[i].second<<" ";
        }
        cout<<'\n';
       
    }
}