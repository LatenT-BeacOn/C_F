#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,c=0;cin>>a;int A[a];
        for(int i=0;i<a;i++)
        {
            cin>>A[i];
            if(A[i]!=i+1) c++;
        }
        cout<<c/2<<'\n';
    }
}