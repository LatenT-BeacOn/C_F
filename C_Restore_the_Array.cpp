#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int A[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        int B[a + 1];
        B[0] = A[0];
        B[a] = A[a-1];
        for (int i = 0; i < a-1; i++)
        {
            B[i+1] = min(A[i+1], A[i]);
        }

        for (int i = 0; i < a + 1; i++)
        {
            cout << B[i] << " ";
        }
        cout << '\n';
    }
}