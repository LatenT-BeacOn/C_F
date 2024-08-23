#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c, m = 0;
    cin >> a >> b >> c;
    int d = max(a + (b + c), a * (b + c));
    int e = max((a * b * c), (a + b) * c);
    cout << max(d, e) << '\n';
}
