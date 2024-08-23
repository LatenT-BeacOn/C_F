#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b,m=0,n=0,c;cin>>a>>b>>c;
        string s;cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='+'){
                m++;
            }
            else
            n++;
        }
        if(m+b>a) cout<<"YES"<<'\n';
       
        else if(m+b<a)  cout<<"NO"<<'\n';
        else
            cout << "MAYBE" << '\n';
    }
}
