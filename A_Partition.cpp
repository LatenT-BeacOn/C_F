#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;cin>>n;
    int a=0,b=0;
    for (int i =0;i<n;i++)
    {
        int x;cin >> x;
        if (x<0){
            b+=x;
        }
        else
        {
            a+=x;
        }
    }
    cout<<a-b<<'\n';
}
