#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int A[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        int B[a];

        B[0] = A[0];
        for (int i = 1; i < a; i++)
        {
            B[i] = B[i - 1] + A[i];
        }
        while (b--)
        {
            int l,r, k;
            cin >> l >> r >> k;
            int x = ((r - l) + 1) * k;
            // cout<<x<<'\n';
            // cout<<(B[a-1]-(B[r-1]-B[l-2]))<<'\n';
            //   cout<<B[a-1]<<'\n';
            //  cout<<B[r]- B[l-1]<<'\n';
            int ans;
            if (l == 1)
                ans= B[a - 1] - (B[r - 1]) + x;
            else
                ans = (B[a - 1] - (B[r - 1] - B[l- 2])) + x;
            // cout<<ans<<'\n';
            cout << (ans % 2 != 0 ? "YES" : "NO") << '\n';
        }
    }
}