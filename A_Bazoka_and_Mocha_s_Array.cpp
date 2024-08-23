#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        int c=0;
        for(int i=0;i<a-1;i++){
            if(A[i]>A[i+1]) c++;
        }
        if(c>=2) cout<<"No\n";
        else cout<<"Yes\n";

    }

}