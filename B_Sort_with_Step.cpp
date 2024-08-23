
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int A[a];
        for(int i=0;i<a;i++)
        {
            cin>>A[i];
        }
        int c=0;
        for(int i=0;i<a/2;i++)
        {
            if(abs(A[i]-A[i+b])==b)
            c++;
        }
        if(c==a/2)
        cout<<0<<endl;
        else if(c<a/2 && c>0)
        cout<<1<<endl;
        else
        cout<<-1<<endl;
    }
}