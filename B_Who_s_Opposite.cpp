#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;cin>>a>>b>>c;
        int d=abs(a-b)*2;
        if(d<a || d<b || d<c)
        {
            cout<<-1<<endl;
        }
        else 
        {
            if((abs(a-b)+c)<=d)
            cout<<abs(a-b)+c<<endl;
            else
            cout<<(abs(a-b)+c)%d<<endl;
        }
    }
}