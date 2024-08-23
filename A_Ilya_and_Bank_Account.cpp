#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a >= 0)
        cout << a;
    else
    {
        int d =a / 10;
        int x = a / 100;
        int c = (x * 10) + (a % 10);
         //cout<<d<<" "<<x<<" "<<c<<'\n';
        if (c < d)
            cout << d << '\n';
        else
            cout << c << '\n';
    }
}