
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, c = 0;
        cin >> a;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                c++;
                if (c == 4)
                    break;
            }
            else
            {
                c = 0;
            }
        }
        if (c == 4)

            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}