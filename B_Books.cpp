#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;cin>>n>>t;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int sum=0,count=0,num=0;
    for(int i=0;i<n;i++){
       // for(int j=i;j<n;j++){
            sum+=A[i];
           // cout<<sum<<" ";
            if(sum<=t){
                count++;
            }
            else{sum-=A[num];
                // num = max(num, count);
                // count=0;
                // break;
                num++;
                
            }
        //}
        // cout<<'\n';
        // cout<<count<<'\n';
        
    }
    cout<<count<<'\n';
}