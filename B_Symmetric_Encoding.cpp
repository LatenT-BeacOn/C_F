#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int a;cin>>a;
        string s;
        cin>>s;
        string x=s;
        sort(s.begin(),s.end());
        vector<char>ch;
        for(int i=0;i<a-1;i++){
            if(s[i]!=s[i+1])
            ch.push_back(s[i]);
            else continue;
        }
        ch.push_back(s[a-1]);
        // for(int i=0;i<ch.size();i++)
        // {
        //     cout<<ch[i];
        // }
        // cout<<'\n';
      
       unordered_map<char,char>m;
        for(int i=0;i<ch.size();i++){
               m[ch[i]]=ch[ch.size()-1-i];
        }
        for(auto it:x){
            cout<<m[it];
            
        }
        cout<<'\n';
    }
    
}