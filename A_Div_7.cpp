#include<bits/stdc++.h>
using namespace std;
#define test_case int t;cin>>t;while(t--)
int main(){
    test_case{
        int a;cin>>a;if(a%7==0) cout<<a<<'\n';else {
            int s=(a/10)*10;
            if(s%7==0)cout<<s<<'\n';
           else
             cout<<s-(s%7)+7<<'\n';
            
            
            }
            
           
    }
    
  
    
}