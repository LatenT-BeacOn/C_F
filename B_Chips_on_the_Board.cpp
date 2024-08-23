#include <bits/stdc++.h>
using namespace std;
#define test_case \
    int t;        \
    cin >> t;     \
    while (t--)
int main()
{
    test_case
    {
        int a;
        long long int sum = 0, sum1 = 0;
        cin >> a;
        int A[a], B[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < a; i++)
        {
            cin >> B[i];
        }     
        sort(A, A + a);
        sort(B, B + a);

        for (int i = 0; i < a; i++)
        {
            sum += (A[0] + B[i]);
        }
        for (int i = 0; i < a; i++)
        {
            sum1 += (B[0] + A[i]);
        }

        cout << min(sum, sum1) << '\n';
    }
}
