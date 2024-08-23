#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b) cout<<a<<'\n';
        else if(a+c>=b) cout<<b<<'\n';
        else {
            cout<<((b-a-c)*2)+a+c<<'\n';
        }
    }
}