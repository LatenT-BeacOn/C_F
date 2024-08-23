#include<bits/stdc++.h>
using namespace std;

int main(){
   long long int a,m=0,c=0;cin>>a;
    // for(i=1;i<=a;i++)
    // {
    //     if(i%2==0)c+=i;
    //     else m+=i;
    // }cout<<c-m<<'\n';
    if(a%2==0)cout<<(a/2)<<'\n';
    else cout<<-((a/2)+1)<<'\n';
}