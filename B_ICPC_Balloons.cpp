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
        char A[a];
        scanf("%s",A);
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
                if(A[i]>A[j])
                {
                    int tmp=A[i];
                    A[i]=A[j];
                    A[j]=tmp;
                }
            }
        }
        int sum=0;
        for(int i=0;i<a-1;i++)
        {
            if(A[i]==A[i+1])
            sum=sum+1;
            else
            sum=sum+2;
        }
        cout<<sum+2<<endl;
    }

    
} 
