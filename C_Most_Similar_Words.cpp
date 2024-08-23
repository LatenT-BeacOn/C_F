#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, sum = 0, m = INT_MAX;
        cin >> a >> b;
        vector<string> s(a);
        for (int i = 0; i < a; i++)
        {
            cin >> s[i];
            
         }
       sort(s.begin(),s.end());

        for (int i = 0; i < a; i++)
        {
         
           for(int k=i+1;k<a;k++){
            sum=0;
            for (int j = 0; j < b; j++)
        {
                sum += abs(s[i][j] - s[k][j]);
        }
           m=min(sum,m);
            }
           
        }
        cout << m << '\n';
       
    }
}