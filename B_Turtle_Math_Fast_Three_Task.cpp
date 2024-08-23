#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int t;cin>>t;while (t--){
        int a, sum = 0;
        cin >> a;
        int A[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
            sum += A[i];
        }
        int c = 0, c3 = 0;
        if(a==0) cout<<0<<'\n';
        else if(a==1 && A[0]%3!=0) cout<<1<<'\n';
       else if(a==1 && A[0]%3==0) cout<<0<<'\n';
        else
        {
            if (sum % 3 == 0)
                cout << 0 << '\n';
            else if (sum % 3 == 2)
                cout << 1 << '\n';
            else
            {
                for (int i = 0; i < a; i++)
                {
                    if (A[i]%3 == 1)
                    {
                        c = 1;
                        break;
                    }
                    
                }

                if (c == 1)
                    cout << 1 << '\n';
                else
                    cout << 2 << '\n';
            }
        }
    }
}