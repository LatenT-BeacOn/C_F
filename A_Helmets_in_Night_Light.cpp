#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int a, b;
        cin >> a >> b;
        int A[a], B[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        vector<pair<int, int>> s;
        long long int ans = b;
        for (int i = 0; i < a; i++)
        {
            cin >> B[i];
            s.push_back({min(B[i], b), A[i]});
        }
        sort(s.begin(), s.end());
        int n = a - 1;
        for (int i = 0; i < a - 1; i++)
        {
            ans += (min(s[i].second, n) * s[i].first);
            n -= (min(n, s[i].second));
        }
        cout << ans << '\n';
    }
}