#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        int count = 0;
       
            for (int i = 0; i < a; i++)
            {
                if (s[i] == '1')
                    count++;
            }
            if (count % 2 != 0)
                cout << "NO\n";
            else if (count == 2)
            {
                bool check = false;
                for (int i = 0; i < a - 1; i++)
                {
                    if (s[i] == s[i + 1] && s[i] == '1')
                    {
                        check = true;
                    }
                }
                cout << (check ? "NO\n" : "YES\n");
            }
            else
                cout << "YES\n";
      
    }
}