#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>>test;
    while(test--){
      long long int n;cin>>n;int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        long long sub,ans=INT_MIN;
        //sort(A,A+n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                sub=abs(A[i]-A[j]);
                ans=max(ans,sub);
                
            }
        }
      
        //cout<<A[n-1]-A[0]<<"\n";
        
        // for(int i=0;i<n-1;i++){
        //     sub=abs(A[i]-A[i+1]);
        //     if(ans<sub) ans=sub;
        // }
        cout << ans << "\n";
    }
}