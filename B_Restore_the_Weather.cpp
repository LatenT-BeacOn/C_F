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
        vector<pair<int, int>> A(a);
        for (int i = 0; i < a; i++)
        {
            cin >> A[i].first;
            A[i].second = i;
        }
        sort(A.begin(), A.end());
        vector<int >B(a);
        for (int i = 0; i < a; i++)
        {
            cin >> B[i];
        }
        sort(B.begin(), B.end());
        vector<int> m(a);
        for (int i = 0; i < a; i++)
        {
           m[A[i].second] = B[i];
           
          
        }
        for (int i = 0; i < a; i++)
        {

            cout << m[i] << " ";
        }
        cout << endl;
    }
}