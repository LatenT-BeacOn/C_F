#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;while(t--){
       // int m=0;
        long long int a,b,c;
        cin >> a >> b >> c;
       if(b>=c && c!=1) cout<<"NO"<<'\n';
       else{
        long long int m = (b * (b + 1)) / 2, l = ((a - b + 1 + a) * b) / 2;
        
        if(m>c || l<c)
        {
            cout<<"NO"<<'\n';
        }
        else cout<<"YES"<<'\n';}}
        
  
    
}