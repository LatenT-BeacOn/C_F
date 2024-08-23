#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b;
        cin>>a>>b;
        int s=abs(b-a);
        if(s==0) cout<<0<<endl;
        else{
            int d=s%10;
            if(d==0)cout<<s/10<<endl;
            else cout<<(s/10)+1<<endl;
        }
    }
}