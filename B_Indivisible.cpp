#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;while(t--){
        int a,sum=0;cin>>a;
        if(a==1)
        cout<<1<<endl;else{
        for(int i=1;i<=a;i++)
        {
            sum=sum+i;
        }
        
        if(sum%a==0)
        cout<<-1<<endl;
        else
        {
            for(int i=1;i<=a;i++)
            {if(i%2==0)
                cout<<i-1<<" ";
                else
                cout<<i+1<<" ";
            }
            cout<<endl;
        }}
    }
}