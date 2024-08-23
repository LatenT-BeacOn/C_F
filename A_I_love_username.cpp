#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, c = 0;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < a - 1; i++)
    {
        if (A[i + 1] > A[i])
            c++;
    }
    cout << (a>1 && c==0?1:c) << endl;
}
