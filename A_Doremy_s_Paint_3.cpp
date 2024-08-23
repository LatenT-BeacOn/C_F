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
        int A[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        if(a==2) cout<<"Yes\n";
        else if(a==3){
            if(A[0]==A[1] || A[0]==A[2] || A[1]==A[2]) cout<<"Yes\n";
            else cout<<"No\n";
        }
        else{
        map<int, int> mp;
        for (int i = 0; i < a; i++)
        {
            mp[A[i]]++;
        }
        if (mp.size()==1) cout<<"Yes\n";
        else if (mp.size()>2) cout<<"No\n";
        
        else
        {
            vector<int> v(2);
            int n = 0;
            for (auto it:mp){
                v[n]=it.second;
                n++;
                }
            if (abs(v[0] - v[1]) < 2)
                cout << "Yes\n";

            else
                cout << "No\n";
        }
        }
    }
}