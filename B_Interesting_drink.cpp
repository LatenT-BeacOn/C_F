#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,q;cin>>a;int A[a];
    for(int i=0;i<a;i++){
        cin>>A[i];
    }
    cin>>q;
    sort(A,A+a);
    while(q--){
        int x;cin>>x;
        //int count=0;
        // for(int i=0;i<a;i++){
        //     if(x>=A[i]) count++;
        // }
        auto d=upper_bound(A,A+a,x);
        cout<<d-A<<'\n';
    }
    

}
    