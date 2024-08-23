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
        vector<int> B;
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
            B.push_back(A[i]);
        }
        sort(A, A + a);
        int c = 0;
        for (int i = 0; i < a; i++)
        {
            if (A[i] % 2 !=B[i] % 2 )
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}