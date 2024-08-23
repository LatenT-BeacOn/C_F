#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        /* code */
        string s;cin>>s;
        int count=1;
        bool check=false;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1])  count++;
            else continue;
            if(s[i]=='0' && s[i+1]=='1')
            check=true;

        }
        if(check)
        cout<<count-1<<'\n';
        else cout<<count<<'\n';
    }
    
}