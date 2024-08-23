#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, d, b, n = 0, c = 0, m = INT_MAX;
        cin >> a >> b;
        int A[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < a; i++)
        {
            if (A[i] % b == 0)
            {
                m = 0;
                break;
            }
            else
            {
                d = b - (A[i] % b);
                if (d < m)
                    m = d;
            }
            if (b == 4)
            {
                if (A[i] % 2 == 0)
                    c++;
                {
                    if (c == 0)
                        n = 2;
                    else if (c % 2 != 0)
                        n = 1;
                    else
                        n = 0;
                }
                m = min(n, m);
            }
        }
        cout << m << '\n';
    }
}