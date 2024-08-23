#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0, l = 1;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            int a = s[i] - '0';
            if (a == 0)
                a = 10;
            sum += abs(l - a) + 1;
            l = a;
        }
        cout << sum << '\n';
    }
}