#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;long long int A[a];
        
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        long long sum=0,c=0,d=LONG_LONG_MIN;

        for(int i=0;i<a;i++){
            sum+=A[i];
             d=max(d,A[i]);
             if(sum-d==d)
             {
                c++;
             }

        }
        cout<<c<<'\n';
    }
}