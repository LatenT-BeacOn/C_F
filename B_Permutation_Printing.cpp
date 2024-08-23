#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A;
        cin >> A;
        for (int i = 0; i < A; i++)
        {
            if (i % 2 == 0)
            {
                cout << A - i << " ";
            }
            else
            {
                if (A % 2 == 0)
                    cout << i << " ";
                else
                    cout << i + 1 << " ";
            }
        }
        cout << '\n';
    }
}