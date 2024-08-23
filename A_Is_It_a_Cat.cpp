#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        int a;cin>>a;
        string s,x;cin>>s;

       
      for(int i=0;i<s.size();i++)
      {
    s[i]=tolower(s[i]);
      }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
            continue;
            else
            x.push_back(s[i]);

        }
       cout<<(x=="meow"?"YES":"NO")<<'\n';
    }
    
}