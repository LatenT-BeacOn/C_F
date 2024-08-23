#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;int A[3];
        for(int i=0;i<3;i++){
            cin>>A[i];
        }
        if(A[a-1]!=0){
            int t=A[a-1];
            {
                if(A[t-1]!=0){
                   cout<<"YES\n";
                }
                else cout<<"NO\n";
            }
        }
        else cout<<"NO\n";
    }
}