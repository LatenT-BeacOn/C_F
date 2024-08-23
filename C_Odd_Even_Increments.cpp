#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,c=0,d=0,n=0,m=0,f=0,e=0;cin>>a;
        int A[a];
        for(int i=0;i<a;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<a;i+=2)
        {
           if(A[i]%2==0)c++;
           else d++;
           if(c>0 && d>0) {
            f=1;
            break;
           }
        }
        for(int i=1;i<a;i+=2)
        {
           if(A[i]%2==0)m++;
           else n++;
           if(m>0 && n>0) {
            e=1;
            break;
           }
        }
        if(f==1 || e==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}