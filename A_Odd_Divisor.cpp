#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, c = 0;
        cin >> a;
        while(a%2==0)
        {
            a=a/2;
        }
        if(a!=1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

  
    }
}

