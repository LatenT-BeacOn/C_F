#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":\n";
        int n, q;
        cin >> n >> q;
        vector<int>A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

       for(int i=0;i<q;i++)
        {

           // int c = 0;
            int a, b;
            cin >> a >> b;
            int lwr=lower_bound(A.begin(),A.end(),a)-A.begin();
            int uppr=upper_bound(A.begin(),A.end(),b)-A.begin();

           

            cout << uppr-lwr << '\n';
        }
    }
}