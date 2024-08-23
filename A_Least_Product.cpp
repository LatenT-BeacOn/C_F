#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        int c=1,c1=0;
        sort(A,A+a);
        for(int i=0;i<a;i++){
            if(A[i]==0){
                c=0;break;
            }
            else if(A[i]<=0) c1++;
            
        }
        if(c==0 || c1%2!=0) cout<<0<<'\n';
        else {
            cout<<1<<'\n'<<1<<" "<<0<<'\n';
        }
    }
}