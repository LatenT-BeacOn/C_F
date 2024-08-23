#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        int c=0;
        for(int i=0;i<a;i++){
              if(i+1==A[A[i]-1])
              {
                c=1;break;
              }
        }
    cout<<(c==1?2:3)<<'\n';
    }
}