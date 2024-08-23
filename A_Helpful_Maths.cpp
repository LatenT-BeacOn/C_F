#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
       // cout << s[i] << '\n';
        if (s[i] != '+')
            v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << '+';
    }
    cout << v[v.size() - 1] << endl;
}