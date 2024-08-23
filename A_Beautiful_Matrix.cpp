#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[5][5];
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j< 5; j++)
        {
            cin >> A[i][j];
        }
    }
    int m = 0, n = 0, l = 0;
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <5; j++)
        {
            if (A[i][j] != 0)
            {
                n = 1;
                m = j;
                break;
            }
        }
        if (n == 1)
        {
            l = i;
            break;
        }
    }
    cout << abs(2 - m) + abs(2 - l) << '\n';
    //cout << m << " " << l << '\n';
}