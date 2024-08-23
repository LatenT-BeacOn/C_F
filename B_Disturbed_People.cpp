#include<bits/stdc++.h>
using namespace std;
int main(){
    int c=0,a;cin>>a;int A[a];
    for(int i=0;i<a;i++)
    {
        cin>>A[i];

    }
    for(int i=0;i<a;i++)
    {
       if(A[i]==0 && A[i-1]==1 && A[i+1]==1)
       {
        c++;
        i+=2;
       }

    }
    cout<<c<<endl;
     
}