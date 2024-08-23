#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t ;while(t--){
        int a;cin>>a;int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
            
        }
        vector<int>v;
        for(int i=0;i<a-1;i++){
            v.push_back(max(A[i],A[i+1]));
        }
        sort(v.begin(),v.end());
        cout<<v[0]-1<<'\n';
       
        
       
    }
}
