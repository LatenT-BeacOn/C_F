#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int a;
        cin >> a;
        int A[a],B[a];
        
       
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < a; i++)
        {
            cin >> B[i];
        }
        int m = 0, n = a - 1;
        while (A[m] == B[m])
        {
            m++;
        }
           while(A[n]==B[n]){
            n--;
           }
           for(int i=m;i>=1;i--)
           {
            if(B[i]>=B[i-1]){
                m--;
            }
            else break;
           }
           for(int i=n;i<a-1;i++)
           {
            if(B[i]<=B[i+1]){
                n++;
            }
            else break;
           }
        cout << m+1<< " " << n+1 << '\n';
    }
}