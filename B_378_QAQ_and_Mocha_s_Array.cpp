#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a;cin>>a;
        int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        sort(A,A+a);
        int d=A[0],x=0;
        for(int i=1;i<a;i++){
              if(A[i]%d!=0){
                x=A[i];
                break;
              }
        }
        int c=0;
        for(int i=0;i<a;i++){
            if(A[i]%d!=0 && A[i]%x!=0){
                c=1;break;
            }
        }
        if(c==1) cout<<"No\n";
        else cout<<"Yes\n";
    }
}