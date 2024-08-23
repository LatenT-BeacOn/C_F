#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, c = 0;
        cin >> a;
        int A[a];
        int b[a] = { 0 } ;
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
          
        }
        sort(A,A+a);
        for(int i=0;i<a;i++)
        {
            if(A[i]!=A[i+1])
            c++;
        }
        
        cout << c << endl;
    }
}