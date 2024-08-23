#include<bits/stdc++.h>
using namespace std;
void is_palindrome(string s){
    int d=s.size()-1,l=0;
    int x=0;
    while(l<=d){
        if(s[l]!=s[d]){
          x=1;
          break;
        }
        l++;
        d--;
    }
    if(x==0) cout<<1<<'\n';
    else cout<<2<<'\n';
   
}

int main(){
    int t;cin>>t;while(t--){
        int a,b;cin>>a>>b;
        string s;cin>>s;
        if(b==0 || a==1){
            cout<<1<<'\n';
        }
        else is_palindrome(s);
    
    }
}