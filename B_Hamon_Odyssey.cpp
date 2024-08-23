#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, c = 0;
        cin >> a;
        int A[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
          
        }
        int sum=A[0];
        for (int i = 0; i < a; i++)
        {
           
             sum &= A[i];
          
            if (sum == 0)
            {
                c++;
                sum=A[i+1];
            }
        }
        
        cout << max(c, 1) << '\n';
       
    }
}