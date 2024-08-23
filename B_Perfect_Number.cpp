#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    vector<int> v;
    for (int i = 19;; i++)
    {
        int sum = 0;
        int rem = i;
        while (rem)
        {
            sum += rem % 10;
            rem /= 10;
        }
        if (sum == 10)
        {
            v.push_back(i);
            if (v.size() == a){
            cout<<v[a-1]<<'\n';
                break;}
        }
    }
   // cout << v[a - 1] << '\n';
}