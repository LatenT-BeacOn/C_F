#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;while (t--)
  {
    /* code */
    int a;cin>>a;
    int A[a];
    map<int,int>m;
     if(a==0) cout<<0<<'\n';
     else{
    for(int i=0;i<a;i++){
        cin>>A[i];
        m[A[i]]++;
    }
    int n=0;
    for(auto it:m){
       if(it.second>n)
       n=it.second;
    }
    if(n>0)cout<<a-n<<'\n';
    else cout<<a-1;
  
  }
  }
    
}