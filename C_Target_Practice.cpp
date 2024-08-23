#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;while (t--)
    {
        char a;
        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> a;
                if (a == 'X')
                {
                    sum += min(min(i + 1, 10 - i), min(j + 1, 10 - j));
                }
            }
        }
        cout << sum << '\n';
    }
}