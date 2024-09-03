#include<bits/stdc++.h>
using namespace std;
int main(){

     int t;cin>>t;while (t--)
     {
    
        int a;cin>>a;
        string s[a];
        for(int i=0;i<a;i++){
            cin>>s[i];
        }
       vector<int>v;
        for(int i=0;i<a;i++){
            for(int j=0;j<4;j++){
                if(s[i][j]=='#'){
                        v.push_back(j+1);
                        break;
                }
            }
        }

        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
  
    
}