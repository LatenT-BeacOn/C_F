#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    int sum = 0, sum1 = 0, i = 0;
    int s = 0, e = a - 1;
   
    while (a != 0)
    {
        if (i % 2 == 0)
        {
            if (A[s] > A[e])
            {
                sum += A[s];
                s++;
            }
            else
            {
                sum += A[e];
                e--;
            }
        }
        else

        {
            if (A[s] > A[e])
            {
                sum1 += A[s];
                s++;
            }
            else
            {
                sum1 += A[e];
                e--;
            }
        }
        a--;
        i++;
    }

    cout << sum << " " << sum1 << '\n';
}
