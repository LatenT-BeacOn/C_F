#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int ans = 0;
        if (y % 2 == 0)
        {
            ans = y / 2;
        }
        else
        {
            ans = (y / 2) + 1;
        }
        if (y % 2 == 0)
        {
            int a = 7 * (y / 15);
            if (a <= x)
                cout << ans << '\n';
            else
            {
                int b = x - a;
                if (b % 15 == 0)
                    cout << ans + (b / 15) << '\n';
                else
                    cout << ans + (b / 15) + 1 << '\n';
            }
        }
        else if (y % 2 != 0)
        {
            int a = (7 * (y / 15) )+ 11;
            if (a <= x)
                cout << ans << '\n';
            else
            {
                int b = x - a;
                if (b % 15 == 0)
                    cout << ans + (b / 15) << '\n';
                else
                    cout << ans + (b / 15) + 1 << '\n';
            }
        }
    }
}