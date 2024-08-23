#include<bits/stdc++.h>
using namespace std;

#define test_case int t;cin>>t;while(t--)

int main(){
  
        int a,c=0;cin>>a;for(int i=0;i<a;i++){
            string s;cin>>s;
            for(int j=0;j<s.size()-1;j++){
                if(s[j]=='O' && s[j]==s[j+1]){ c=1;s[j]=='+';
                s[j+1]=='+';break;
                }
            }
           
           
        }
        
        cout << s << '\n';
}


    
  
    
