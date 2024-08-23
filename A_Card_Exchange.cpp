#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b;cin>>a>>b;
        int A[a];
       map<int,int>s;
        for(int i=0;i<a;i++){
            cin>>A[i];
            s[A[i]]++;
        }
        int ans=a;
        for(auto it:s){
            if(it.second>=b){
                ans=b-1;
                break;

            }
        }
       cout<<ans<<'\n';
    }
}