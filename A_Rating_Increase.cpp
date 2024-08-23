#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string s;cin>>s;
        // if(s[1]!='0'){ 
        //     cout<<s[0]<<" ";
        // for(int i=1;i<s.size();i++){
        //     cout<<s[i];
        // }
        // cout<<'\n';
        // }
        // else{
            string s1="",s2="";
            s1+=s[0];
            int l=0;
            for(int i=1;i<s.size();i++){
                
                if(s[i]!='0'){
                    break;

                }
                else
                s1+=s[i];
            }
            for(int i=s1.size();i<s.size();i++){
                s2+=s[i];
            }
            if((s1.size()==s2.size() && s2>s1)|| (s1.size()<s2.size())) cout<<s1<<" "<<s2<<'\n';
            else cout<<-1<<'\n';


       // }
    }
}

