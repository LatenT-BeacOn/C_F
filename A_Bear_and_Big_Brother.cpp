#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,l=0;cin>>a>>b;
    for(int i=0;i<1000;i++){
        a+=(a*3);
        b+=(b*2);
        l++;
        if(a>b){
           cout<<l<<'\n';
            break;

        }
    }
}