#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;string s;cin>>s;int c=0;
        for(int i=0;i<a;i++){
            if(s[i]!=s[i+1]){
                i++;continue;
            }
            else{
                c++;
                if(s[i+1]!=s[i+2]){
                    c--;
                    continue;

                }
                else{
                    c++;
                    continue;
                }
            }
        }
        cout<<c<<'\n';
    }
  
    
}