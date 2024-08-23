#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)
int main(){
    test_case{
        int a,b,c;cin>>a>>b>>c;
        if(a%2==b%2 && b%2==c%2) cout<<1<<" "<<1<<" "<<1<<'\n';
        else if(a%2==b%2 && b%2!=c%2)
            cout << 0 << " " << 0<< " " << 1 << '\n';
            else if(b%2==c%2)
                cout << 1 << " " << 0 << " " << 0 << '\n';
                else
                    cout << 0 << " " << 1 << " " << 0 << '\n';
    }
    
  
    
}