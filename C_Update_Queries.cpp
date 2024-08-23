#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b;cin>>a>>b;
        string s,s1;cin>>s,s1;
        vector<int>V;
        for(int i=0;i<b;i++){
            int x;cin>>x;
            V.push_back(x);
        }
        sort(V.begin(),V.end());
        vector<int>v;
        for(int i=0;i<V.size()-1;i++){
            if(V[i]!=V[i+1]) v.push_back(V[i]);
            else continue;
        }
        v.push_back(V[V.size()-1]);
        sort(s1.begin(),s1.end());
        for(int i=0,k=0;i<v.size();i++,k++){
            s[v[i]-1]=s1[k];
        }
        cout<<s<<'\n';

    }
}