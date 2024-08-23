#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int A[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        int m = false;
        for (int i = 0; i < a; i++)
        {
            m = m | A[i];
        }
        for (int i = 0; i <= 15; i++)
        {
            if (m | i == b)

                m = i;
            break;
        }
          if (m == false)
        cout << -1 << endl;
    else
        cout << m << endl;

    }
  
// your code goes here
return 0;
}
