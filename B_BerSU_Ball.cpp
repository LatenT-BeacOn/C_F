#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
       { cin >> A[i];}
    int b;
    cin >> b;
    int B[b];
    for (int i = 0; i < b; i++)
    {
        cin >> B[i];
    }
    sort(A, A + a);
    sort(B, B + b);
    int cnt = 0;

    for (int i = 0, j = 0; i < a && j < b;  )
    {

        if (abs(A[i] - B[j]) < 2)
        {
            cnt++;
            i++;
            j++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (A[i] > B[j])
        {
            j++;
        }
    }

    cout << cnt << '\n';
}