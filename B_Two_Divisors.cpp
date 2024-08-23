
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
        if(a==1) cout<<b*b<<'\n';
        else{
        int c=a;
        for(int i=2;i*i<=b;i++){
            if(b%i==0){
                 c=i;
                 break;
            }
        }
        int x=a;
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                x = i;
                break;
            }
        }
        x=min(x,c);
        cout<<x*b<<'\n';
        }
       
    }
}