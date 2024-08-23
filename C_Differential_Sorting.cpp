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
        int a;
        cin >> a;
        int A[a];
        for (int i = 0; i < a; i++)
            cin >> A[i];
        if (is_sorted(A, A + a))
            cout << 0 << '\n';
       else if (A[a - 2] > A[a - 1] || (A[a - 2] - A[a - 1]) > A[a - 2] || (A[a - 2] - A[a - 2]) > A[a - 1])
            cout << -1 << '\n';
        else
        {
            cout << a - 2 << '\n';
            for (int i = 0; i < a - 2; i++)
                cout << i+1<<" "<<a - 1 <<" "<< a <<'\n';
           
        }
    }
}