#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x=0;cin>>a>>b;
    int sum=a;
    for(int i=a;i<=b;i++){
        sum^=i;
        //cout<<sum<<'\n';
        if(x<sum) x=sum; 
    }
    cout<<sum<<'\n';
}