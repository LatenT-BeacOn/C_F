#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b;cin>>a>>b;
        string s1,s2;cin>>s1>>s2;
        int j = 0;
        for(int i=0;i<b;){
             if(s2[i]==s1[j]) {
                 j++;
                 i++;
            }
            else{
                i++;

            }
        }
        cout<<j<<'\n';

    }
  
    
}