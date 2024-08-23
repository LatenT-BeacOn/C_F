#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int A[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        sort(A, A + a);
        int cnt = 0, m = 0;
        for (int i = 0; i < a - 1; i++)
        {
            if ((A[i + 1] - A[i]) <= b)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            if (cnt > m)
                m = cnt;
        }
        cout << a - m - 1 << endl;
    }
}