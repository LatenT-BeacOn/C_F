#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (k--)
    {
        int l = -1, r = n, x;
        cin >> x;
        while (l + 1 < r)
        {
            long long m = (l + r) / 2;
            if (a[m] < x)
                l = m;
            else
                r = m;
        }
        cout << r + 1 << endl;
    }
    return 0;
}