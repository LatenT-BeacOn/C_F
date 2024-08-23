#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--)
    {
        int a,sum=0;cin>>a;int A[a];
        for(int i=0;i<a;i++)
        {
            cin>>A[i];
        }
        sort(A,A+a);
        
        for(int i=0;i<a/2;i++)
        {
            sum+=(A[a-1-i]-A[i]);
        }

        cout<<sum<<'\n';
      
       

    }
}