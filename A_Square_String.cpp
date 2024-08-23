#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0;
        if(s.size()%2!=0)cout<<"NO"<<endl;
        else{
     for(int i=0;i<s.size()/2;i++)
     {
        if(s[i]!=s[(s.size()/2)+i])
        c=1;
     }
     cout<<(c!=1?"YES":"NO")<<endl;
        }
    }
}