#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        long long int a,b;
        cin>>a>>b;
       
        if (b%2!=0)
            cout <<(b + 1)/2<<'\n';
        else
            cout << (2*a*b)/((4*a)-2)<<'\n';
    }
}