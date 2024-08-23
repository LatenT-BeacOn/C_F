#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;char b;cin>>a>>b;
        string s;cin>>s;
        int d=0;
        for(int i=0;i<a;i++){
            if(s[i]<b)
            {
                d=i;
                
                break;
            }
            else d=a;
        }
        //cout<<i<<" "<<d<<'\n';
        s.insert(d,1,b);
        cout<<s<<'\n';
    }
}