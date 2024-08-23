#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, c = 0;
    cin >> a;
    vector<string> s(a);
   // string s[a];
    for (int i = 0; i < a; i++)
        {cin >> s[i];}
    sort(s.begin(),s.end());
    // int l = s[0].size();

    for (int i = 0; i < s[0].size(); i++)
    {

        if (s[0][i] != s[a - 1][i])
        {
            c = i;
            break;
        }
    }
    cout << c << '\n';
   // cout << s[a] << " " << s[a - 1] << '\n';
}