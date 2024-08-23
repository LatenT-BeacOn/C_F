#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    if(a<5)cout<<1<<'\n';
    else if(a%5==0)cout<<a/5<<'\n';
    else
   cout<<(a/5)+1<<'\n';


}