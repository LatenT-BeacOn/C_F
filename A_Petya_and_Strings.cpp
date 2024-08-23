#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,m;cin>>s>>m;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<s.size();i++){
        m[i]=tolower(m[i]);
    }
    int l=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==m[i]){
            l++;if(l==s.size()){
                cout<<0<<'\n';
                break;
            }
        }
      else if(s[i]!=m[i]){
        if(s[i]>m[i]){
            cout<<1<<'\n';
            break;
        }
        else {
            cout<<-1<<'\n';
            break;
        }

      }
      
    }
    
}