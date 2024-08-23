#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;int A[a],B[a];
       
        for(int i=0;i<a;i++)
        {
            cin>>A[i];
           

        }
        for(int i=0;i<a;i++)
        {
            cin>>B[i];
            

        }
        
        for(int i=0;i<a;i++)
        {
           if(A[i]<B[i]) swap(A[i],B[i]);
          
        }
       
        int sum=0,sum1=0;
       for(int i=0;i<a-1;i++){
       
        sum+=abs(A[i]-A[i+1]);
       }
      
       for(int i=0;i<a-1;i++){
       
       sum1+=(abs(B[i]-B[i+1]));
       }
      
        cout<<sum+sum1<<'\n';
        }

}