#include<bits/stdc++.h>
using namespace std;

#define test_case int t;cin>>t;while(t--)

int main(){ test_case{
    int a;cin>>a;if(a<=6 || a==9) cout<<"NO\n";
    else{
        if(a%3!=0){
            cout<<"YES\n";
            cout<<1<<" "<<2<<" "<<a-3<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
            cout<<1<<" "<<4<<" "<<a-5<<'\n';
        }
    }
}
    
  
    
}