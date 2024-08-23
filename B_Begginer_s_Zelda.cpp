#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;
         int v[100001] = {0};
         int lf=0;
        for(int i=0;i<a-1;i++){
            int x,y;cin>>x>>y;
            v[x]++;
            v[y]++;
            if(v[x]>2) lf++;
            if(v[y]>2) lf++;

        }
    cout<<(lf%2==0?lf/2+1:(lf+1)/2+1)<<'\n';
    } 
}