#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    
            int a, b, r, sum = 0;
            cin >> a >> b;
            int n = a;
            while (a > 0)
            {

                sum += (a % 10);
                a /= 10;
            }
            if (sum % b == 0)
                cout << n << '\n';
            else
            {
                while (sum % b != 0)
                {
                    n++;
                    int m = n;
                    sum = 0;

                    while (m)
                    {

                        sum += (m % 10);
                        m /= 10;
                    }
                   
                }
                cout << n << '\n';
            }
        
    }
}
