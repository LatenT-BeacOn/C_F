#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        /* code */
        int a;cin>>a;
        string s;cin>>s;
        int c=0,f=0;
        for(int i=0;i<a;i++){
            if(s[i]=='@'){ c++; f=0;}
            else if(s[i]=='.'){
                f = 0;
                continue;
                
            }
            else {
                f++;
                if(f>=2){
                    break;
                }
            }
        }
        cout<<c<<'\n';
    }
    
}