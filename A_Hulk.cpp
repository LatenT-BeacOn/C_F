#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    if(a==1)cout<<"I hate it"<<'\n';
    else{    for(int i=0;i<a-1;i++){
        if(i%2==0){cout<<"I hate that"<<" ";}
        else{cout<<"I love that"<<" ";}}
        if((a-1)%2!=0)cout<<"I love it"<<'\n';
        else cout<<"I hate it"<<'\n';
    
}
}