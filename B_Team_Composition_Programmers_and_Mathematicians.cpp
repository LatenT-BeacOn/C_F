#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define test int t;cin>>t;while (t--)
void doll(){
    ll programmer,mathematicians;
    cin>>programmer>>mathematicians;
    cout<<min(min(programmer,mathematicians),(programmer+mathematicians)/4)<<'\n';
}

int main()
{
    test{
        doll();
    }
    
}