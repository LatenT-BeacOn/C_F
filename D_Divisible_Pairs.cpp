#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b,c;cin>>a>>b>>c;
        int A[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        int ans=0;

        for(int i=0;i<a-1;i++){
            for(int j=i+1;j<a;j++){
                if((A[i]+A[j])%b==0 && (A[i]-A[j])%c==0)
                {
                    ans++;
                }
            }
        }
        cout<<ans<<'\n';
    }
}