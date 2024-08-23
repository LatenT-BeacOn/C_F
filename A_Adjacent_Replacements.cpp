#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;int A[a];
    for(int i=1;i<=a;i++)
    { cin>>A[i];
        if(A[i]%2==0){
            A[i]=A[i]-1;
        
        }
        cout<<A[i]<<" ";
        
    } cout<<'\n';
}