#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--)
    {
        int a;cin>>a;string s;cin>>s;
        int c=0;
     for(int i=0;i<s.size();i++)
     {
        for(int j=i+1;j<s.size();j+=2)
        {
            if(s[i]==s[j])
            c=1;
        }
     }
        cout<<(c!=1?"YES":"NO")<<'\n';
    }
}