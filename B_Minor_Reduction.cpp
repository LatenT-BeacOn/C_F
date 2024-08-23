#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int sum=0,d,n=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]-'0'+s[i-1]-'0'>=10){
                sum=(s[i]-'0')+(s[i-1]-'0');
                d=i;n=1;
                break;
            }


        }
        if(n==1){
            for(int i=0;i<d-1;i++){
                cout<<s[i];
            }
            cout<<sum;
            for(int i=d+1;i<s.size();i++){
                cout<<s[i];
            }
            cout<<'\n';
        }
        else{
            cout<<s[0]-'0'+s[1]-'0';
            for(int i=2;i<s.size();i++) cout<<s[i];
            cout<<'\n';
        }
        
    }
}