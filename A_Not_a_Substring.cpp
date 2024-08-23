#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c = 0,l=0, d = 0, m = 0;
        if (s.size() % 2 != 0)
        {
            cout << "YES" << '\n';
            for (int i = 0; i < s.size() * 2; i++)
            {
                if (i % 2 == 0)
                    cout << "(";
                else
                    cout << ")";
            }
            cout << '\n';
        }
        else
        {
            for (int i = 0; i < s.size()-1; i++)
            {
                if (s[i] == '(' && s[i] == s[i + 1])
                    c++;
              else  if (s[i] == ')' && s[i] == s[i + 1])
                    l++;
              else  if (s[i] == '(' && s[i + 1] == ')')
                    d++;
                if((c+l)%2==0 && ((c+l)/2+d)==(s.size()*2) || (d*2==s.size()))
                m=1;
            }
            if (m == 1)
            {
                cout << "NO" << '\n';
            }
            else
            {
                cout << "YES" << '\n';
                for (int i = 0; i < s.size() * 2; i++)
                {
                    if (i % 2 == 0)
                        cout << "(";
                    else
                        cout << ")";
                }
                cout << '\n';
            }
        }
    }
}
