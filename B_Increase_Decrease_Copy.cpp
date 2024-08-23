#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n + 1);

        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        long long ss = 0;
        for (int i = 0; i < n; i++)
        {
            ss += abs(a[i] - b[i]);
        }

        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[n] >= min(a[i], b[i]) && b[n] <= max(a[i], b[i]))
            {
                ss++;
                f = 1;
                break;
            }
        }

        if (f == 0)
        {
            ll mn = INT_MAX, mn1 = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if (abs(b[n] - a[i]) < mn)
                    mn = abs(b[n] - a[i]);
                if (abs(b[n] - b[i]) < mn1)
                    mn1 = abs(b[n] - b[i]);
            }

            ss += (min(mn, mn1));
            ss++;
        }
        cout << ss << '\n';
    }
}