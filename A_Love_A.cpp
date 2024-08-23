#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int c = 0;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == 'a')
        {
            c++;
        }
    }

    cout << (c+(c-1)>s.size()?s.size():(c+c-1)) << endl;
}