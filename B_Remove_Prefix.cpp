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
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        set<int> l;
        int c = 0;
        for (int i = a - 1; i >= 0; i--)
        {
            l.insert(A[i]);
            c++;
            if (c >l.size())
            {
                break;
            }
        }
        cout << a - l.size() << '\n';
    }
}