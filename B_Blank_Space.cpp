#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        /* code */
        int a,c=0,m=0;cin>>a;int A[a];
        for(int i=0;i<a;i++){cin>>A[i];
        if(A[i]==0)c++;
        else c=0;
        if(c>=m)m=c;}
cout<<m<<'\n';        
    }
    
}
