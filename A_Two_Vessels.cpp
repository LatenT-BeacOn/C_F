#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c, m = 0;
        cin >> a >> b >> c;
        if (a == b || (a == b && b == c))
            cout << 0 << endl;
        else if (c > a && c > b)
            cout << 1 << endl;
        else if ((c == 1 && a == 1) || (c == 1 && b == 1))
            cout << (a + b) / 2 << '\n';
        else if (c == 1)
        {
            if ((abs(a - b) % 2) == 0)
                cout << abs(a - b) / 2 << '\n';
            else
                cout << (abs(a - b) / 2) + 1 << '\n';
        }

        else
        {

            int x = (a + b) / 2;
            int l = abs(a - x);
            if (l % c == 0)
                cout << l / c << endl;
            else
                cout << (l / c) + 1 << endl;
        }
    }
    return 0;
}