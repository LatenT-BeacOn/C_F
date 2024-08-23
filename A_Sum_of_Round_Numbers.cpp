#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;
        vector<int>v;
        int d=1;
        while(a!=0){
            if(a%10!=0) v.push_back((a%10)*d);
           
                a/=10;
                d*=10;
            
        }
        cout<<v.size()<<'\n';
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<'\n';
    }
}