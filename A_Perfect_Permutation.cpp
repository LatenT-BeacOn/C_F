#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%2!=0)
    cout<<-1<<endl;
    else{
    for(int i=2;i<=a;i+=2)
    {
        cout<<i<<" "<<i-1<<" ";
    }
   // cout<<1<<endl;
   }
    
} 
