#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;while(t--){
        string s;cin>>s;
        int c=1;
        for (int i=0;i<s.size()-1;i++)
        {
            if (s[i]!=s[i+1])
                {c=0;break;}
        }
        if (c==0)
        {
            cout<<"YES\n";
            for (int i=0;i<s.size()-1;i++)
            {
                if(s[i]!=s[i+1])
                {
                   swap(s[i],s[i+1]);
                    break;
                }
            }
           
            cout <<s<<'\n';
        }
        else cout<<"NO\n";
    }
}