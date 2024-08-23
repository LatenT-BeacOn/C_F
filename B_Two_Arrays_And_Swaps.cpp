#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        int A[a], B[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
            // ans+=A[i];
        }

        for (int i = 0; i < a; i++)
        {
            cin >> B[i];
        }
        sort(A, A + a);
        sort(B, B + a);
        reverse(B,B+a);
        for (int i = 0; i < b; i++)
        {
            if (A[i] < B[i])
            {
                swap(A[i], B[i]);
            }
        }
        for (int i = 0; i < a; i++)
        {
            sum += A[i];
        }
        cout << sum << '\n';
    }
}