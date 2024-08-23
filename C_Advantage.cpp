#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int A[a],B[a];
        for(int i=0;i<a;i++)
        {
            cin>>A[i];
            B[i]=A[i];
        }
        sort(B,B+a);
        for(int i=0;i<a;i++)
        {
            if(A[i]!=B[a-1])
            cout<<A[i]-B[a-1]<<" ";
            else 
            cout<<B[a-1]-B[a-2]<<" ";

        }
        cout<<endl;
    }
}