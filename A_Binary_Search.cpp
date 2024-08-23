#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int A[N];
int  check(int l, int r, int x)
{
    if (l > r)
        //return false;
        return l;
    int mid = (l + r) / 2;
    if (A[mid] == x)
        //return true;
        return mid;
    else if (A[mid] > x)
    {
        return check(l, mid - 1, x);
    }
    else
    {

        return check(mid + 1, r, x);
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    // int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    while (b--)
    {
        int k;
        cin >> k;
        //bool ok = check(0, a - 1, k);
        // if (ok)
        //     cout << "YES\n";
        // else
        //     cout << "NO\n";
        cout << check(0, a - 1, k) << '\n';
    }
}