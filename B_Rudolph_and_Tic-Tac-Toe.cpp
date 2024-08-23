#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3], c ='0';
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < 3; i++)
        {

            if ((a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] != '.'))
            {
                c = a[i][0];
            }
            else if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] != '.')
            {
                c = a[0][i];
            }
        }
        if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[1][1] != '.')
        {
            c = a[0][0];
        }
        else if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[1][1] != '.')
        {
            c = a[0][2];}
  else if (a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[1][1] != '.')
        {   
            c = a[0][1];
        }       
       
         if (c == '0')
        cout << "DRAW" << endl;
    else
        cout << c << endl;
    }
    // cout<<(c=='0'?"DRAW":c);
   
}

