#include <bits/stdc++.h>
using namespace std;
int main()
{

  int a;
  cin >> a;
  for (int i = 0; i < 1000; i++)
  {
    a++;
    int b = a % 10;
    int c = a / 10 % 10;
    int d = a / 100 % 10;
    int e = a / 1000 % 10;
    if (b != c && c != d && d != e && b != d && b != e && e != c)
    {
      break;
    }
  }
  cout << a << '\n';
}