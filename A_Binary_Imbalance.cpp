#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,c=0,d=0,c0=0,d0=0;cin>>a;string s,s1="";cin>>s;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='1') {c++;}
            else d++;

        }
        if(d>c) cout<<"YES\n";
        else {
            for (int i = 0; i < s.size() - 1; i++)
            {
                s1 += s[i];
                if (s[i] == s[i + 1])
                {
                    s1 += '1';
                }
                else
                    s1 += '0';
            }
            s1 += s[s.size() - 1];
            for (int i = 0; i < s1.size(); i++)
            {
                if (s1[i] == '1')
                    c0++;
                else
                    d0++;
                // cout<<s1[i];
            }
            cout << (c0 < d0 ? "YES\n" : "NO\n");
        }

       
       
    }
}