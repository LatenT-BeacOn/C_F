#include <bits/stdc++.h>
using namespace std;
bool check(int x){
    
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
           return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a % 2 != 0 && a > 1)
            cout << "Ashishgup\n";
        else if (a == 1)
            cout << "FastestFinger\n";
        else if (a == 2)
            cout << "Ashishgup\n";
        else if (a > 2 && a % 2 == 0)
        {
            if ((a & (a - 1)) == 0)
                cout << "FastestFinger\n";
            else
            {
                if (check(a/2))
                    cout << "FastestFinger\n";
                else
                    cout << "Ashishgup\n";
            }
        }
    }
}