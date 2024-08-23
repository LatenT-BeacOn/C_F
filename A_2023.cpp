#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)
int main(){
    test_case{
        int a,b;
        long long prdct=1;cin>>a>>b;int A[a];
        for(int i=0;i<a;i++){cin>>A[i];prdct*=A[i];}
        if(2023%prdct!=0) cout<<"NO\n";
        else{
            cout<<"YES\n"<<2023/prdct<<" ";
            
            for(int i=1;i<b;i++){
                 cout<<1<<" ";
            }
            cout<<'\n';
        }
        
    }
  
    
}