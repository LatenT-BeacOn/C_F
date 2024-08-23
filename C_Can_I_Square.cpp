#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t;cin>>t ;while (t--)
void doll(){
    int a;cin>>a;
    int A[a];
    ll sum=0;
    for(int i=0;i<a;i++){

    cin>>A[i];
    sum+=A[i];
    }
  ll s=sqrt(sum);
  cout<<(s*s==sum?"YES\n":"NO\n");
    
}

int main(){
    test{
        doll();
    }
  
}