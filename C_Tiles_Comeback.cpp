#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)
int main(){
    test_case{
        int a,b;cin>>a>>b;
        vector<int>A(a);
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        if(A[0]==A[a-1]){
            int c=0;
            for(int i=1;i<a-1;i++){
                if(A[i]==A[0]) c++;

            }
            cout<<(c>=b-2?"YES\n":"NO\n");
        }
        else{
            int d=0,x=0,k=0;
            for(int i=0;i<a;i++){
                if(A[i]==A[0]){
                    d++;
                }
                if(d==b){
                    x=i;
                   // cout<<x<<" "
                    d=0;k=1;
                    break;

                }
            }
            if(k!=1) cout<<"NO\n";
            else{
            int n=0;
            for(int i=x+1;i<a;i++){
                if(A[i]==A[a-1]){
                    d++;
                }
                if(d==b){
                    n=1;break;
                    
                }
            }
            cout<<(n==1?"YES\n":"NO\n");
            }
        }
      
        
    }
  
    
}