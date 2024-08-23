#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, m = -1;
        cin >> a;
        int A[a], l;
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        sort(A, A + a);
        for (int i = 0; i < a - 2; i++)
        {
            if (A[i] == A[i + 1] && A[i + 1] == A[i + 2])
            {
                l = A[i];
                m = 1;
                break;
            }
        }
        cout << (m == 1 ? l : -1) << endl;
    }
}