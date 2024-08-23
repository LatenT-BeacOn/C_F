#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)
int main(){
    test_case{
        int a;cin>>a;int A[a]; int c=0;
        for(int i=0;i<a;i++) cin>>A[i];
        for(int i=1;i<a-1;i++){
            if(A[i]>A[i+1] && A[i]>A[i-1]){ c++;
            if( i+2<a)
            {
               
               if(A[i]>A[i+2]) A[i+1]=A[i];
               else A[i+1]=A[i+2];
            }
            else A[i+1]=A[i];
        }
        }

        cout<<c<<'\n';
        for(int i=0;i<a;i++)cout<<A[i]<<" ";
        cout<<'\n';

        
    }
  
    

}