#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ans = 0;
        cin >> a >> b;
        int A[a], B[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < a; i++)
        {
            cin >> B[i];
        }
        int d = 0;
        for (int i = 0; i < a; i++)
        {
            if (A[i] + i <= b)
            {
                if (B[i] > d)
                {
                    d = B[i];
                    ans = i + 1;
                }
            }
        }
        cout << (ans ? ans : -1) << '\n';
    }
}