#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int a;
        cin>>a;
        int A[a];
       for(int i=0;i<a;i++)
       {
        cin>>A[i];
        //scanf("%d",&A[i]);

       }
       for(int i=0;i<a;i++)
       {
        for(int j=0;j<a;j++)
        {
            if(A[i]<A[j])
            {
                int tem=A[i];
                A[i]=A[j];
                A[j]=tem;
            }
        }
       }
       int sum=0;
       for(int i=0;i<a;i++)
       {
        sum+=A[i]-A[0];
       }
       cout<<sum<<endl;

    }
}