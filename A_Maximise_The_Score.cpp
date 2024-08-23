#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int A[a * 2];
        for (int i = 0; i < 2 * a; i++)
        {
            cin >> A[i];
        }
        sort(A, A + (2 * a));
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            sum += A[i];
        }
        cout << sum << '\n';
    }
}