#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;while (t--)
    {
        int a,b;cin>>a>>b;int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        int c=0;
        for(int i=0;i<a;i++){
           if(A[i]==b) {
            c=1;break;
           }
        }
        cout<<(c==1?"YES":"NO")<<'\n';



    }   
}