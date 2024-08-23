#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int A[a];
    for(int i=0;i<a;i++)
    {
        cin>>A[i];

    }
    int count=0,m=0;
    for(int i=0;i<a-1;i++)
    {
        
       { if(A[i]<A[i+1])
        count++;
        else
        count=0; 
        }
        if(m<count)
        m=count;
       

    }
    cout<<m+1<<endl;

}