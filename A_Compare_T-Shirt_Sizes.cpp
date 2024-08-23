#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s, s1;
        cin >> s >> s1;
        if (s.size() == s1.size())
        {
            if (s[s.size() - 1] == s1[s1.size() - 1])
                cout << "=" << '\n';
           else if (s[s.size() - 1] == 'L')

                cout << ">" << '\n';
            else if (s[s.size() - 1] == 'S')
                cout << "<" << '\n';
            else if (s[s.size() - 1] == 'M')
            {
                if (s1[s1.size() - 1] == 'L')
                    cout << "<" << '\n';
                else
                    cout << ">" << '\n';
            }
        }
       else if (s.size() >s1.size())
        {
           if(s[s.size()-1]=='L') cout<<">"<<'\n';
           else cout<<"<"<<'\n';
        }
       else if (s.size() < s1.size())
        {
           if(s1[s1.size()-1]=='L') cout<<"<"<<'\n';
           else cout<<">"<<'\n';
        }

        // else if (s[s.size() - 1] == 'L')
        //     cout << ">" << '\n';
        // else if (s[s.size() - 1] == 'S')
        //     cout << "<" << '\n';

        // 
        // else
        //     cout << "=" << '\n';
    }
}