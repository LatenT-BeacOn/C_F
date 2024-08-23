#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A[6]; int ans=0;
        for (int i = 0; i < 6; i++)
            cin >> A[i];
        if ((A[0] <= A[2] && A[0] <= A[4]) || (A[0] >= A[2] && A[0] >= A[4]))
        {
            ans+=min(abs(A[0]-A[2]),abs(A[4]-A[0]));
           
        }
        if ((A[3] >= A[1] && A[5] >= A[1]) || (A[3] <= A[1] && A[5] <= A[1]))
        {
           ans+=min(abs(A[3]-A[1]),abs(A[5]-A[1]));
        }
        cout<<ans+1<<'\n';
       
    }
}