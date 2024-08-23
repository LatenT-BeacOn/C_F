#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, m = INT_MAX, n = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b, c;
        cin >> b >> c;
        m = min(m, c);
        n += (m* b);
    }
    cout << n << '\n';
}