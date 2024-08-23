#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)
int main(){
    test_case{
        int a,b,c;cin>>a>>b>>c;int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        sort(A,A+a);
        int psum[a]={};
        psum[0]=A[0];
        for(int i=1;i<a;i++){
              psum[i]=psum[i-1]+A[i];

        }
        int ans=INT_MIN;
        for(int i=a-1;i>=0;i--){
            int l=a-1-i;
           if(l>b)break;
           //int x=min(i,c);
           int ans1;
           if(i<c) ans1=-psum[i];
           else {
         ans1=psum[i-c]-(psum[i]-psum[i-c]);}
           ans=max(ans,ans1);
        }
       if(a==b) cout<<max(0,ans)<<'\n';
       else
        cout<<ans<<'\n';
        
    }
  
    
}