#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int n,count=0,c=0;
        cin>>n;
        int A[n*2];
        for(int i=0;i<(2*n);i++)
        {
            cin>>A[i];
            if(A[i]%2==0) count++;
            else c++;
        }
       
        if(count==c)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
        
        
    }
}