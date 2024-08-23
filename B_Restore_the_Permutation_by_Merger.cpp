#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int a;
       cin>>a;
       int A[a*2],b[a*2]={};
       for(int i=0;i<(a*2);i++)
       {
        cin>>A[i];
       }
       for(int i=0;i<a*2;i++)
       {
         if(b[A[i]]==0)
        cout<<A[i]<<" ";
       
        b[A[i]]++;
       }
       
         cout<<endl;
    }
    
}