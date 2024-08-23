#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t;cin>>t;while(t--){
        int a;cin>>a;int A[a];
        
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        int b[a]={1};
        for (int i = 0; i < a-1; i++)
        {
            for(int j=i+1;j<a;j++){
                if(A[i]==A[j]){
                    b[j]=A[i];
                    break;
                }
            }
           
        }
        for(int i=0;i<a;i++){
            cout<<b[i]<<" ";
        }
        cout<<'\n';
    }
}