#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int A[a];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
       int sum=0,c=0;
       for(int i=0;i<a;i++){
        if(sum<=b){
            sum+=A[i];
            c++;
        }
       }
       if(sum<b)cout<<b-sum+sum+c<<'\n';
       else if(sum==0) cout<<b<<'\n';
       else cout<<sum<<'\n';
    }
}