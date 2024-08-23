#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int A[3];
        for(int i=0;i<3;i++)
        cin>>A[i];
        sort(A,A+3);
        if(A[1]!=A[2])
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl<<A[0]<<" "<<A[1]<<" "<<1<<endl;
    }
}
