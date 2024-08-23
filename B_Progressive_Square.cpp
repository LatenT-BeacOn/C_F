#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
       int n,c,d;
       cin>>n>>c>>d;
       int a=n*n;
       int A[a];
       for(int i=0;i<a;i++) cin>>A[i];
       sort(A,A+a);
       vector<int>v;
       for(int i=0;i<n;i++)
       {
        int x=A[0]+(i*c);
        v.push_back(x);
       }
       for(int k=0;k<n;k++){
       for (int i = 1; i < n; i++)
       {
           int y = v[k] + (i * d);
           v.push_back(y);
       }
       }
       sort(v.begin(),v.end());
       bool ok=false;
       for(int i=0;i<a;i++){
           if (A[i] != v[i]){
               ok=true;
           }
       }
       cout<<(ok?"NO\n":"YES\n");

    }
    
}