#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 8; i++)
        {
            string s;
            cin >> s;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != '.')
                {
                    cout << s[i];
                }
            }
           
        }
        cout << '\n';
    }
}
