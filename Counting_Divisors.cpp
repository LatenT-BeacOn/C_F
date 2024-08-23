#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;
        int c=0;
        for(int i=1;i*i<=a;i++){
            if(a%i==0){
                c++;
                if(a/i!=i)c++;
            }
        }
        cout<<c<<'\n';
    }
}