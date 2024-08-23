#include<bits/stdc++.h>
using namespace std;
#define test_case int t;cin>>t;while(t--)
int main(){
    test_case{int c=0,m=0;
        string s;cin>>s; for(int i=0;i<s.size();i++){
            if(s[i]=='a' && s[i+1]=='b') c++;
           else if (s[i] == 'b' && s[i + 1] == 'a')
                m++;
        }
        if(c==m) cout<<s<<'\n';
        else{
            if(s[0]=='a' && s[0]!=s[s.size()-1]) s[0]='b';
            else s[0]='a';
            cout<<s<<'\n';
        }
    }
  
    
}