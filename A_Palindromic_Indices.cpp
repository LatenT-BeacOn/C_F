#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,c=0;cin>>a;string s;cin>>s;for(int i=0;i<a-1;i++){
            if(s[i]==s[i+1])c++;
        }
        cout<<(c==0?1:c+1)<<'\n';
    }
}