#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, d = 0, c = 0, m = 0;
        cin >> a;
        string s;
        cin >> s;
        for (int i = 0; i < a - 1; i++)
        {
            if (s[i] == '.' && s[i] == s[i + 1])
            {
                d++;
                if (d >= 2)
                {
                    m = 1;
                    break;
                }
            }

            else
                d = 0;
        }
        if (m == 1)
            cout << 2 << '\n';
        else
        {
            for (int i = 0; i < a; i++)
            {
                if (s[i] == '.')
                {
                    c++;
                }
            }
            cout << c << '\n';
        }
    }
}