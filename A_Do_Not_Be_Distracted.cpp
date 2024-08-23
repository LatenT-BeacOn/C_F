#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c = 0;

        int a;
        cin >> a;
        string s, s1 = "";
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != s[i + 1])
                s1 += s[i];
        }
        for (int i = 0; i < s1.size(); i++)
        {
            for (int j = i + 1; j < s1.size(); j++)
            {
                if (s1[i] == s1[j])
                {
                    c = 1;
                    break;
                }
            }
        }
        if (c == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}