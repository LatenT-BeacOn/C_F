#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        int A[k + 1];
        A[0] = 0;
        for (int i = 1; i <= k; i++)
            cin >> A[i];
        int B[k + 1];
        B[0] = 0;
        for (int i = 1; i <= k; i++)
            cin >> B[i];
        while (q--)
        {
            long long d;
            cin >> d;
             bool check = false;
            int l = 0, r = k;
            while (l <= r)
            {
                int mid = (l + r) / 2;
              
                if(A[mid] > d)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (A[r] == d)
            {
                cout << B[r] << " ";
                continue;
            }
            
            long x = B[r] + (d - A[r]) * (B[r+1]-B[r])/(A[r+1]-A[r]);
            cout << x << " ";
             
        }
        cout << '\n';
    }
}