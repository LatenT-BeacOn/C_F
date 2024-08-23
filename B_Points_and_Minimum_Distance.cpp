#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;int A[2*a];
        for(int i=0;i<a*2;i++){
            cin>>A[i];

        }
        sort(A,A+(2*a));
        int sum=0;
        for(int i=0;i<a-1;i++){
            sum+=(abs(A[i]-A[i+1])+abs(A[i+a+1]-A[i+a]));
        }
        cout<<sum<<'\n';
        for(int i=0;i<a;i++){
            cout<<A[i]<<" "<<A[2*a-1-i]<<'\n';
        }
  
    
}
}