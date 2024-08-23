#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a;cin>>a;int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        sort(A,A+a);
        int x=((a+1)/2)-1,c=0;
        for(int i=x;i<a;i++){
            if(A[i]==A[x])
            c++;
        }
        cout<<c<<'\n';

    }
}