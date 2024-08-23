#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int a;
        cin >> a;
        int A[a];
        long long int c = 0;
        for (int i = 0; i < a; i++)
            cin >> A[i];

        for (int i = 0; i < a; i++)
        {

            for (int j = i; j < a; j++)
            {
                c += (j - i + 1);
                for (int k = i; k <= j; k++)
                {
                    if (A[k] == 0)
                        c++;
                }
            }
        }
        cout << c << '\n';
    }
}