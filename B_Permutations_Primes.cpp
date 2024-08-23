
#include<bits/stdc++.h>
using namespace std;
#define test_case int t;cin>>t;while(t--)
int main(){
    test_case{
        int a;cin>>a;if(a==1)cout<<1<<'\n';
        else if(a==2)cout<<2<<" "<<1<<'\n';
        else{cout<<a<<" ";
            for(int i=1;i<a;i++){
             if(i%2!=0)cout<<i+1<<" ";
             else cout<<i-1<<" ";
            }
            cout<<'\n';
        }
    }
    
  
    
}