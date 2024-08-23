
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, m = 0, n = 0;
        cin >> a; int A[a];
        for (int i = 0; i < a; i++)
        { cin >> A[i];
            if ((A[i] % 2) != (i % 2))
            {
                if (A[i] % 2 == 0)

                    m++;
                else
                    n++;
            }
        }
    
    if (m == n)
        cout << m << endl;
    else
        cout << -1 << endl;}
}
