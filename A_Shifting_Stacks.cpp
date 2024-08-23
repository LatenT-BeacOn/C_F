#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case \
    int t;        \
    cin >> t;     \
    while (t--)
int main()
{
    test_case
    {
       long long int a;
        cin >> a;
        int A[a];
       long long int sum = 0, c = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
            sum += A[i];
            if (sum < i)
                c = 1;

            sum -= i;
        }

        cout << (c == 0? "YES\n" : "NO\n");
    }
}