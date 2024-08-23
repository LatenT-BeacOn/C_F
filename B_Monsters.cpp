#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n,k;
    cin>>n>>k;
    pair<int,int> a[n];
    for(int i=0;i<n;i++){
        int x;cin>>x;
        x%=k;
        if(x==0) x=k;
        a[i].first=-x;
        a[i].second=i+1;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i].second<<" ";
    }
    cout<<endl;
 }
}