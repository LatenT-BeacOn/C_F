#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b;
        int c = 0, x = 0;
        cin>>a>>b;
        string s;cin>>s;
        map<char,int>ch;

        for(int i=0;i<a;i++){
            ch[s[i]]++;
        }
        
        for(auto it:ch){
            x++;
            if(it.second<b)
            c+=(b-it.second);
            
        }
        cout<<c+((7-x)*b)<<'\n';

        
    }
}