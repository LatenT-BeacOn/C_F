#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        /* code */
        string s;cin>>s;
        if(s.size()==1 && s[0]=='_') cout<<2<<'\n';
        else if(s.size()==1 && s[0]=='^') cout<<1<<'\n';
        else{
        int c=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='_' && s[i+1]=='_')
            c++;
        }
        
        
        if (s[0] == '_' && s[s.size() - 1] == '_') cout<<c+2<<'\n';
       else if (s[0] == '_' || s[s.size() - 1] == '_')
            cout << c + 1 << '\n';
        else cout<<c<<'\n';}
    }
    
}