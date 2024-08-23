#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
void doll(){
    int a,c=0,k;cin>>a>>k;long long total=0;
    for(int i=1;i<=a;i++){total+=(i*5); if(total+k<=240)c++;}cout<<c<<'\n';
}
int main(){
    
        doll();
    
}