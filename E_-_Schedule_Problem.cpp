#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int c=0;
        
       
     while(a--){
         int x, y;
         cin >> x >> y;
         if (y - x > 1)
             c++;
        
        
     }
        if (c!=0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}