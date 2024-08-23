#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)

int main(){
    test_case{
        int a;cin>>a;
        int ans=0;
        int A[a]; for(int i=0;i<a;i++){
            cin>>A[i];
            ans|=A[i];
        }
        cout<<ans<<'\n';
    }
    
  
    
}