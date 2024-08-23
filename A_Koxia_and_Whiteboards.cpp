#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        long long int a,b;cin>>a>>b; long long int A[a],B[b];
        for(int i=0;i<a;i++)cin>>A[i];
        for(int i=0;i<b;i++) cin>>B[i];
        // sort(A,A+a);
        // sort(B,B+b);
        // reverse(B,B+b);
        long long int sum=0;
        if(a>b){
            for(int i=0,j=b-1;i<a&&j>=0;i++,j--){
                swap(A[i],B[j]);
            }
            for (int i = 0; i < a; i++)
            {
                //cout <<A[i]<<" ";
                 sum += A[i];
            }
            
        }
        else{
            for (int i = 0,j=b-1; i <a && j>=0; i++,j--)
            {
                swap(A[i], B[j]);
            }
            for (int i = 0; i < a; i++)
            {    //cout<<B[i]<<" ";
                sum += A[i];
            }
        }
        cout<<sum<<'\n';
    }
}