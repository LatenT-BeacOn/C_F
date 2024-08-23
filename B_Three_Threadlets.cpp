#include <bits/stdc++.h>
using namespace std;
#define test_case \
    int t;        \
    cin >> t;     \
    while (t--)

int main()
{
    test_case
    { 
       
        int a, b, c;
        cin >> a >> b >> c;
        sort(a,b,c);
        if((a==b && b==c) || (b%a==0 && c%a==0)) cout<<"YES\n";
        
        else cout<<"NO\n";

        // int A[3];
        // for (int a = 0; a <= 3; a++)
        //     cin >> A[a];
        // sort(A, A + 3);

        // if()
    }
}