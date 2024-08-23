#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;
        int A[a],B[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
       
        for(int i=0;i<a;i++){
            cin>>B[i];
        }
        int b;
        cin>>b;
        int C[b];
        map<int, int> m;
        for(int i=0;i<b;i++){
            cin>>C[i];
            m[C[i]]++;
        }
         map<int,int>mp;
        for(int i=0;i<a;i++){
            if(A[i]!=B[i]) {
                mp[B[i]]++;
            }
        }
        int c=0;
        for(auto it:mp){
            if(it.second>m[it.first]){
                c=1;break;
            }
        }
        if(c==1) cout<<"NO\n";
        else {
            int x=0;
            for(int i=0;i<a;i++){
                if(B[i]==C[b-1]){
                   x=1;break;
                }
            }
            if(x==1) cout<<"YES\n";
            else cout<<"NO\n";
        }


    }
}