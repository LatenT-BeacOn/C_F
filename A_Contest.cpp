#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int e=max((3*a)/10,(a-((a/250)*c)));
    int f=max((3*b)/10,(b-((b/250)*d)));
    if(e<f)
    cout<<"Vasya"<<endl;
    else if(f<e)
    {
        cout<<"Misha"<<endl;
    }
    else
    cout<<"Tie"<<endl;
   
}
