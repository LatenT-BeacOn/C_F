#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while (t--)
    {
        /* code */
        int a;cin>>a;
      vector<char>v;
        string s;cin>>s;
        for(int i=a-1;i>=1;i--){
            if(s[i]=='a' || s[i]=='e'){
                v.push_back(s[i]);
                v.push_back(s[i-1]);
                v.push_back('.');
                i--;
            }
            else if(s[i]=='c' || s[i]=='d' || s[i]=='b') 
            {
                v.push_back(s[i]);
                v.push_back(s[i-1]);
                v.push_back(s[i-2]);
                v.push_back('.');
                i-=2;
            }

        }
        for(int i=v.size()-2;i>=0;i--){
            cout<<v[i];

        }
        cout<<'\n';
    }
    
}