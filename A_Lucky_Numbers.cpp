#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)
const int N=1000000;
int A[N];
int main(){
    test_case{
        int a,b,sum,m=0,rem,ans=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            int n=i;
            sum=0;
            while(n!=0){
                rem=n%10;
                sum+=abs(sum-rem);
                n=n/10;

            }
            if(sum>m) {m=sum;
            ans=i;}
        }
        cout<<ans<<'\n';
    }
    
  
    
}