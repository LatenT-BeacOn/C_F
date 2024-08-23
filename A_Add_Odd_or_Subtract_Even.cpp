#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
   cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a-b==0)
        cout<<0<<endl;
        else
        {
            if(a>b){
                int d=a-b;
                if(d%2==0)cout<<1<<'\n';
                else cout<<2<<'\n';
            }
          
            else {
                int l=b-a;
                if(l%2!=0)cout<<1<<'\n';
                else cout<<2<<'\n';
            }
        }
    }


}