#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;int A[a],B[a];
        for(int i=0;i<a;i++)cin>>A[i];
        for(int i=0;i<a;i++)cin>>B[i];
        for(int i=0;i<a;i++){
            if(A[i]<B[i]) swap(A[i],B[i]);
        }
        sort(A,A+a);
        sort(B,B+a);
        cout<<A[a-1]*B[a-1]<<'\n';
    }
}