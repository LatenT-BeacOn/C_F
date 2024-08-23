#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)
int main(){
    test_case{
        string s;cin>>s;int A=0,B=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') A++;
            else B++;
        }
        if(A>B) cout<<'A'<<'\n';
        else cout<<'B'<<'\n';
    }
  
    
}