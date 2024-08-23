#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)
const int N=1000000;
int A[N];
int main(){

   test_case{
      int a, b;
      cin >> a >> b;
      int a1, b1, c, d;
      cin >> a1 >> b1 >> c >> d;
      if ((a1 == 1 && b1 == 1) || (a1 == 1 && b1 == b) || (a1 == a && b1 == 1) || (a1 == a && b1 == b) || (c == 1 && d == 1) || (c == 1 && d == b) || (c == a && d == 1) || (c == a && d == b))

         cout << 2 << '\n';
      else if ((a1 == 1 && (b1 != b || b1 != 1)) || (a1 == a && (b1 != b || b1 != 1)) || (b1 == 1 && (a1 != a || a1 != 1)) || (b1 == b && (a1 != 1 || a1 != a)) || (c == 1 && (d != b || d != 1)) || (c == a && (d != b || d != 1)) || (d == 1 && (c != a || c != 1)) || (d == b && (c != a || c != 1)))
         cout << 3 << '\n';
      else
         cout << 4 << '\n';

         
   }
}