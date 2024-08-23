#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string s;cin>>s;int c=0;
        set<char>s1;
        for(int i=0;i<s.size();i++){
            s1.insert(s[i]);

            if(s1.size()>3){
                c++;
                s1.clear();
                s1.insert(s[i]);
            
            }
        

        }
        cout<<c+1<<'\n';
       
    }
}