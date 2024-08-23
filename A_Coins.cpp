#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;while (t--)
{
    long long int a,b;cin>>a>>b;
    if(a>=b && a%2==0 || a%2==b%2) cout<<"YES\n";
    else cout<<"NO\n";
}

}