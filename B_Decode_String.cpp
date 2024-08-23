#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){


        int a,s1;cin>>a;string s,l="";cin>>s;for(int i=s.size();i>=0;i--){
            if(s[i]==0){
                s1=(s[i-2]*10)+(s[i-1]);
            }
            else
            {
                s1=(s[i]);
            }
            l+=(char)(s1+'a');
        }
        cout<<l<<'\n';
}
}